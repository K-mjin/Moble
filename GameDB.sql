use GAMEDB;

SELECT * FROM Players;

select * from Items where ItemName LIke '%Sword%';

select Name, Gold from Players order by Gold desc;

select Name, Gold, Level
from Players
order by Level desc, Gold asc;

select * from Items limit 5;
select * from Items limit 10, 5;

select Name, Gold from players order by Gold DESC LIMIT 1;

select Name, Gold
from players
where Gold = 0;

select ItemName, ObtainDate
where Items
order by ObtainDate desc limit 5;

select Name, JoinDate
from Players
where Name Like '김%';

select ItemName, Price
From Items
order by Price asc limit 1;

select Name, Level
From players
where Level >= 50;

select ItemName, Price
From Items
order by Price desc limit 3;

select Name, Gold
From Players
where Gold between 10000 and 50000;

select ItemName, Price
From Items
where Price >= 1000 and Price <= 2000;

select ItemName, Price
From Items
where ItemName like '%Wand%' Or ItemName like '%Staff%';

select Name, Gold, 
	case 
		when Gold >= 10000 then '부자' 
		else '일반' 
	end as Statu 
from Players;

select concat(PlayerID, '-', Name) as PlayerID_Name
From Players;

select ItemName, substr(ItemName, 1, 5) as First5
From items order by First5 desc;

select Name, Gold, round(gold * 1.1, 0) as Gold_Ind
From Players order by Gold_Ind asc;

select ItemName, price, round(price / 3, -0) as Price_Rounded
from Items;

select ItemName, ceil(price / 1000) as ceilK, floor(price / 1000) as FloorK
from Items;

select Name, JoinDate, datediff(CURDATE(), JoinDate) as Days
From Players;

select Name, JoinDate, datediff(CURDATE(), JoinDate) as Days
from Players 
where datediff(CURDATE(), JoinDate) >= 1000
order by Days desc;

select ItemName, price, round(price * 1.15, 0) as Price_Tax
from Items order by Price_Tax desc;

select concat(Name, ' (Lv.', Level,')')
from players order by level asc;

select ItemName, length(ItemName) as NameLen
from Items 
where ItemName like '%Sword%' order by NameLen asc;

select ItemName, mod(Price, 500) as ModVal
from Items order by ModVal asc;

select Name, JoinDate, adddate(JoinDate, 30) as Plus30
from Players order by Plus30 asc;

select concat(Name, ' joined ', JoinDate) as Info
from Players order by Name asc;

select Name from players
order by rand() limit 5;

SELECT CONCAT(
'INSERT INTO Players (PlayerID, Name, Level, Gold, JoinDate) VALUES (',
PlayerID, ', ',
QUOTE(Name), ', ',
Level, ', ',
Gold, ', ',
QUOTE(JoinDate), ');'
) FROM Players;

select Name, Gold from Players order by Gold desc, Name asc;

select Name, Level, Gold, (level * Gold) as PowerScore
from players order by (Level * Gold) desc;

select ItemName, Rarity
from Items 
order by field(Rarity, 'Legendary', 'Epic', 'Rare', 'Common');

select Name, Level
from Players
order by (Level >= 50) desc, level asc;

SELECT Name, LENGTH(Name) AS ByteLen, CHAR_LENGTH(Name) AS CharLen
FROM Players
WHERE Name LIKE '김%';

SELECT CONCAT_WS(' - ', PlayerID, Name, Level) AS Info
FROM Players
WHERE Name LIKE '김%';

select Name
from Players
where Name like '김%';

select Name
from Players
where Name like '%현%';

select Name
from Players
where Name like '%용';

select ItemName, upper(ItemName) as UpperName, lower(ItemName) as LowerName
from Items 
where ItemName like '%Sword%';

select Name, substr(Name, 1, 2) as Prefix
from Players
where Name like '김%';

select Name, substr(Name, -2) as Prefix
from Players
where Name like '김%';

select ItemName, replace(ItemName, 'Sword', '검') as Changed
from Items 
where ItemName like '%Sword%';

select Name, JoinDate, datediff(curdate(), JoinDate) as DaysPassed
from players
order by DaysPassed asc;

select Name, JoinDate, extract(year from JoinDate) as JoinYear
from Players
order by JoinYear asc;

select Name, JoinDate, timestampdiff(year, joinDate, curDate()) as Years
from Players
order by Years asc;

select Name, JoinDate, round(datediff(curdate(), joindate) / 365, 1) as YearsRounded
from Players
order by YearsRounded asc;

select ItemName, Price, ObtainDate
from Item 
where ObtainDate >= NOW() - interval 14 day and Price >= 2500;