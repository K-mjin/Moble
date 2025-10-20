use GameDB;

delimiter $$

drop procedure if exists sp_today $$
create procedure sp_today()
begin
	declare v_today DATE;
    set v_today = curdate();
    select v_today as Today;
end $$

delimiter ;

call sp_today();

delimiter $$

drop procedure if exists sp_check_player $$
create procedure sp_check_player(in p_name varchar(50))
begin
	declare v_cnt int default 0;
    
    select count(*) into v_cnt
    from Players where Name = p_name;
    
    if v_cnt = 0 then
		select concat(p_name, '-> 신규 등록 필요') as msg;
	else
		select concat(p_name, '-> 이미 존재') as msg;
	end if;
end $$

delimiter ;

call sp_check_player('기대교');

delimiter $$

drop procedure if exists sp_give_potion $$
create procedure sp_give_potion(in p_player_id int, in p_qty int)
begin
	declare v_i int default 0;
    declare v_item_id int;
    
    select ItemID into v_item_id
    from Items where ItemName = 'Mana Potion' limit 1;
    
    while v_i < p_qty do
		insert into PlayerItems(PlayerID, ItemID, quantity)
        values(p_player_id, v_item_id, 1)
        on duplicate key update quantity = quantity + 1;
        
        set v_i = v_i + 1;
	end while;
end $$

delimiter ;

call sp_give_potion(2, 2);

delimiter $$

drop procedure if exists sp_loop_demo $$
create procedure sp_loop_demo()
begin
	declare v_num int default 0;
 
	myloop:loop
    set v_num = v_num + 1;
    if v_num >= 5 then
    leave myloop;
    end if;
    end loop myloop;
    
    select v_num as FinalValue;
end $$

delimiter ;

delimiter $$

drop procedure if exists sp_today $$
create procedure sp_today()
begin
	declare v_today date;
    set v_today = curdate();
    select v_today as Today;
end $$

delimiter ;

call sp_today();

delimiter $$

drop procedure if exists sp_count_players $$
create procedure sp_count_players()
begin
	declare v_cnt int default 0;
    select count(*) into v_cnt from Players;
    select v_cnt as PlayerCount;
end $$

delimiter ;

call sp_count_players();

delimiter @@

drop procedure if exists sp_new_player @@
create procedure sp_new_player(in p_name varchar(50))
begin
	declare v_cnt int default 0;
    select count(*) into v_cnt  from Players where Name = p_name;
    if v_cnt = 0 then
		insert into Players(PlayID, Level, Gold, JoinDate, GuildID)
        values(p_name, 1, 1000, curdate(), null);
        select '등록 성공' as msg.p_name as Name;
	else
		select '이미 존재' as msg.p_name as Name;
	end if;
end @@

delimiter ;

call sp_new_player('최뉴비');

select PlayerID, Name, Level, Gold
from Players
where Name = '최뉴비';

delimiter @@

drop procedure if exists sp_min_gold @@
create procedure sp_min_gold(in p_name  varchar(50), in p_min int)
begin
	declare v_gold int;
    
	select gold into v_gold 
    from Players
    where Name = p_name limit 1;
    
    if v_gold < p_min then
    update Players set Gold = p_min
    where Name = p_name;
    end if;
    
    select Name, Gold
    from Players
    where Name = p_name;
end @@
    
delimiter ;
    
call sp_min_gold('천재민', 200000);
    
delimiter @@
    
drop procedure if exists sp_sum_to_n @@
create procedure sp_sum_to_n(in p_n int)
begin
	declare v_i int default 1;
	declare v_sum int default 0;
        
	while v_i <= p_n do
	set v_sum = v_sum + v_i;
	set v_i = v_i + 1;
	end while;
        
	select v_sum as SumToN;
end @@
	
delimiter ;
    
call sp_sum_to_n(10);    
    
DELIMITER $$

DROP PROCEDURE IF EXISTS sp_assign_default_guild $$
CREATE PROCEDURE sp_assign_default_guild(IN p_name VARCHAR(50))
BEGIN
DECLARE v_gid INT;
DECLARE v_has INT;

SELECT GuildID INTO v_gid FROM Guilds
WHERE GuildName='마법의 숲' LIMIT 1;

SELECT COUNT(*) INTO v_has FROM Players
WHERE Name=p_name AND GuildID IS NOT NULL;

IF v_has = 0 THEN
UPDATE Players SET GuildID = v_gid WHERE Name=p_name;
END IF;

SELECT Name, GuildID FROM Players WHERE Name=p_name;
END $$

call sp_assign_default_guild('천재민');

DELIMITER $$

DROP PROCEDURE IF EXISTS sp_tri_pyramid $$
CREATE PROCEDURE sp_tri_pyramid(IN p_n INT)
BEGIN
	DECLARE i INT DEFAULT 1;

	CREATE TEMPORARY TABLE IF NOT EXISTS _lines (line TEXT);
	TRUNCATE TABLE _lines;

	WHILE i <= p_n DO
		INSERT INTO _lines(line) VALUES (
			CONCAT(
				SPACE(p_n - i),
				REPEAT('*', 2*i - 1)
			)
		);
		SET i = i + 1;
	END WHILE;

	SELECT line FROM _lines;
END $$

DELIMITER ;

call sp_tri_pyramid(10);

delimiter $$

drop procedure if exists proc_get_play_id $$
create procedure proc_get_play_id(
	in p_name varchar(50),
    out p_id int
)
begin
	select PlayerID into p_id
    from Players
    where Name = p_name
    limit 1;
end $$

delimiter ;

set @getValue = -1;
call proc_get_play_id('김미진', @getValue);
select @getValue;

delimiter $$

drop procedure if exists proc_double_gold $$
create procedure proc_double_gold(
	inout p_gold int
)
begin
	set p_gold = p_gold * 2;
end $$

delimiter ;

set @getValue = 600;
call proc_double_gold(@getValue);
select @getValue;

delimiter $$

drop procedure if exists has_item $$
create procedure has_item (
	in p_player_id int,
    in p_itemname varchar(50),
    out p_has int
)
begin
	declare v_itemid int;
    
    select ItemID into v_itemid
    from Items
    where ItemName = p.itemname
    limit 1;
    
    select ItemID into v_itemid
    from PlayerItems
    where PlayerID = p_player_id
    and ItemID = v.itemid;
end $$

delimiter ;

delimiter ##

drop procedure if exists get_guildname ##
create procedure get_guildname(
	in p_name varchar(50),
    out p_guild varchar(50)
)
begin
	select g.GuildName into p_guild
    from Players p
    left join Guilds g on p.GuildID = g. GuildID
    where p.Name = p.Name
    limit 1;
end ##

delimiter ;

set @getValue = '없음';
call get_guildname('박민준', @getValue);
select @getValue

DELIMITER $$
CREATE PROCEDURE proc_get_item_info(
	IN p_itemname VARCHAR(100),
	OUT p_rarity VARCHAR(20),
	OUT p_price INT
)
BEGIN
	SELECT Rarity, Price INTO p_rarity, p_price
	FROM Items
	WHERE ItemName = p_itemname
	LIMIT 1;
END $$
DELIMITER ;

DELIMITER $$
CREATE PROCEDURE proc_add_gold(
	IN p_player_id INT,
	IN p_amount INT,
	OUT p_new_gold INT
)
BEGIN
	UPDATE Players
	SET Gold = Gold + p_amount
	WHERE PlayerID = p_player_id;
	SELECT Gold INTO p_new_gold
	FROM Players
	WHERE PlayerID = p_player_id;
END $$
DELIMITER ;

DELIMITER $$

CREATE PROCEDURE sp_price_band(IN p_item VARCHAR(100))
BEGIN
	DECLARE v_price INT;
	DECLARE v_band VARCHAR(20);

	SELECT Price INTO v_price
	FROM Items WHERE ItemName=p_item LIMIT 1;

	CASE
		WHEN v_price < 1000 THEN SET v_band='Cheap';
		WHEN v_price <= 3000 THEN SET v_band='Normal';
		ELSE SET v_band='Expensive';
	END CASE;

	SELECT p_item AS Item, v_band AS PriceBand;
END $$

DELIMITER ;

DELIMITER $$

CREATE PROCEDURE sp_check_gold(IN p_pid INT, IN p_need INT)
BEGIN
	DECLARE v_gold INT;

	SELECT Gold INTO v_gold
	FROM Players WHERE PlayerID=p_pid;

	IF v_gold < p_need THEN
		SIGNAL SQLSTATE '45000'
		SET MESSAGE_TEXT='골드 부족';
	END IF;

	SELECT v_gold AS CurrentGold;
END $$

DELIMITER ;

delimiter $$

drop procedure if exists sum_3mul_skip_5mul $$
create procedure sum_3mul_skip_5mul(
	in p_n int
)
begin
	declare v_i int default 0;
    declare v_sum int default 0;
    
    myloop:loop
		set v_i = v_i + 1;
        
        if v_i > p_n then
			leave myloop;
		end if;
        
        if v_i % 3 <> 0 then
			iterate myloop;
		end if;
        
        if v_i % 5 = 0 then
			iterate myloop;
		end if;
        
        set v_sum = v_sum + v_i;
	end loop;
        
	select v_sum as SumOnlyDivNot5;
end $$

delimiter ;

call sum_3mul_skip_5mul(15);