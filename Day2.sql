use GAMEDB;

START TRANSACTION;

-- PlayerItems → Players → Items → Guilds
-- 순서로 드롭하면 문제가 없을듯하지만 혹시 모르니 꺼두고

SET FOREIGN_KEY_CHECKS = 0;


DROP TABLE IF EXISTS PlayerItems;
DROP TABLE IF EXISTS Players;
DROP TABLE IF EXISTS Items;
DROP TABLE IF EXISTS Guilds;


SET FOREIGN_KEY_CHECKS = 1;


CREATE TABLE Guilds (
    GuildID     INT AUTO_INCREMENT PRIMARY KEY,
    GuildName   VARCHAR(100) NOT NULL UNIQUE,
    CreateDate  DATE NOT NULL,
    GuildLevel  INT DEFAULT 1
);


CREATE TABLE Items (
    ItemID     INT AUTO_INCREMENT PRIMARY KEY,
    ItemName   VARCHAR(100) NOT NULL,
    Rarity     VARCHAR(20) NOT NULL,
    Price      INT NOT NULL,
    ObtainDate DATETIME DEFAULT CURRENT_TIMESTAMP,
    CONSTRAINT items_chk_1 CHECK (
        Rarity IN ('Common','Rare','Epic','Legendary')
    )
);


CREATE TABLE Players (
    PlayerID  INT AUTO_INCREMENT PRIMARY KEY,
    Name      VARCHAR(50) NOT NULL,
    Level     INT NOT NULL,
    Gold      INT NOT NULL,
    JoinDate  DATE NOT NULL,
    GuildID   INT DEFAULT NULL,
    CONSTRAINT fk_players_guilds
      FOREIGN KEY (GuildID)
      REFERENCES Guilds (GuildID)
      ON DELETE SET NULL
      ON UPDATE CASCADE
);


CREATE TABLE PlayerItems (
    PlayerID   INT NOT NULL,
    ItemID     INT NOT NULL,
    Quantity   INT NOT NULL DEFAULT 1,
    ObtainDate DATETIME DEFAULT CURRENT_TIMESTAMP,
    PRIMARY KEY (PlayerID, ItemID),
    CONSTRAINT fk_pi_player
      FOREIGN KEY (PlayerID) REFERENCES Players (PlayerID)
      ON DELETE CASCADE
      ON UPDATE CASCADE,
    CONSTRAINT fk_pi_item
      FOREIGN KEY (ItemID) REFERENCES Items (ItemID)
      ON DELETE RESTRICT
      ON UPDATE CASCADE,
    CHECK (Quantity > 0)
);

-- 길드
INSERT INTO Guilds (GuildName, CreateDate, GuildLevel) VALUES
('용사의 전당', '2021-05-01', 5),
('마법의 숲',   '2022-07-15', 3),
('어둠의 군단', '2023-09-20', 7),
('모블 게이머스', '2025-08-20', 1);

-- 아이템
INSERT INTO Items (ItemName, Rarity, Price, ObtainDate) VALUES
--  800
('Iron Dagger',          'Common',    800,  NOW() - INTERVAL 35 DAY),
('Traveler Boots',       'Common',    800,  NOW() - INTERVAL 30 DAY),
('Apprentice Staff',     'Rare',      800,  NOW() - INTERVAL 28 DAY),

-- 1200
('Steel Sword',          'Rare',     1200,  NOW() - INTERVAL 27 DAY),
('Chainmail Armor',      'Rare',     1200,  NOW() - INTERVAL 25 DAY),
('Heavy Crossbow',       'Rare',     1200,  NOW() - INTERVAL 23 DAY),
('Guardian Shield',      'Rare',     1200,  NOW() - INTERVAL 21 DAY),

-- 2500
('Amulet of Power',      'Epic',     2500,  NOW() - INTERVAL 20 DAY),
('Runed Greatsword',     'Epic',     2500,  NOW() - INTERVAL 18 DAY),
('Sage Robe',            'Epic',     2500,  NOW() - INTERVAL 16 DAY),
('Hunter Bow',           'Epic',     2500,  NOW() - INTERVAL 14 DAY),
('Adamantine Helm',      'Epic',     2500,  NOW() - INTERVAL 12 DAY),

-- 기타 아이템
('Bronze Sword',         'Common',    500,  NOW() - INTERVAL 40 DAY),
('Steel Boots',          'Rare',      900,  NOW() - INTERVAL 38 DAY),
('Leather Armor',        'Common',    600,  NOW() - INTERVAL 37 DAY),
('Plate Armor',          'Epic',     2200,  NOW() - INTERVAL 36 DAY),
('Dragon Armor',         'Legendary',6000,  NOW() - INTERVAL 34 DAY),
('Elixir of Life',       'Legendary',5000,  NOW() - INTERVAL 32 DAY),
('Cloak of Invisibility','Legendary',4200,  NOW() - INTERVAL 31 DAY),
('Ring of Strength',     'Rare',     1300,  NOW() - INTERVAL 29 DAY),
('Ring of Wisdom',       'Rare',     1400,  NOW() - INTERVAL 26 DAY),
('Mana Potion',          'Common',     60,  NOW() - INTERVAL 24 DAY),
('Stamina Potion',       'Common',     70,  NOW() - INTERVAL 22 DAY),
('Antidote Potion',      'Common',     80,  NOW() - INTERVAL 19 DAY),
('Firebomb',             'Rare',      350,  NOW() - INTERVAL 17 DAY),
('Frostbomb',            'Rare',      350,  NOW() - INTERVAL 15 DAY),
('Thunderbomb',          'Rare',      350,  NOW() - INTERVAL 13 DAY),
('Phoenix Feather',      'Legendary',7000,  NOW() - INTERVAL 11 DAY),
('Tome of Secrets',      'Epic',     3200,  NOW() - INTERVAL 9 DAY),
('Gale Spear',           'Rare',     1800,  NOW() - INTERVAL 7 DAY),
('Shadow Dagger',        'Epic',     2800,  NOW() - INTERVAL 5 DAY),
('Lightbringer Mace',    'Legendary',6500,  NOW() - INTERVAL 3 DAY),
('Bear Claw Gauntlet',   'Rare',     1700,  NOW() - INTERVAL 2 DAY),
('Serpent Whip',         'Epic',     2900,  NOW() - INTERVAL 1 DAY);

-- 플레이어
INSERT INTO Players (`PlayerID`,`Name`,`Level`,`Gold`,`JoinDate`,`GuildID`) VALUES 
(1,'가대교',2,12000,'2025-01-12',NULL),
(2,'강건우',9,7800,'2025-03-05',3),
(3,'강승진',6,1500,'2025-02-23',2),
(4,'김미진',5,120000,'2025-07-01',1),
(5,'김주엽',4,12000,'2025-04-18',1),
(6,'김찬송',1,20000,'2025-02-09',1),
(7,'김태은',3,180000,'2025-06-06',3),
(8,'김없음',10,999999,'2024-12-21',NULL),
(9,'박민준',5,35000,'2025-01-31',2),
(10,'박준혁',6,120000,'2025-05-14',3),
(11,'배기현',8,12000,'2025-06-18',3),
(12,'백용',5,12000,'2025-02-11',3),
(13,'성요셉',4,3400,'2025-03-10',3),
(14,'소현섭',3,130000,'2025-07-02',2),
(15,'송현수',7,89000,'2025-05-27',3),
(16,'윤영서',9,120000,'2025-01-30',2),
(17,'이국현',10,120000,'2025-04-19',2),
(18,'이빈칸',2,0,'2025-06-01',NULL),
(19,'이문형',10,1500,'2025-07-05',1),
(20,'이진희',10,120000,'2025-03-12',3),
(21,'임준용',7,7800,'2025-02-03',NULL),
(22,'황장보',5,600,'2025-01-22',1),
(23,'정소빈',8,300000,'2025-04-26',3),
(24,'차승우',2,12000,'2025-05-15',NULL),
(25,'천재민',3,120000,'2025-06-08',1),
(26,'최상욱',8,1200,'2025-02-28',2),
(27,'허영수',1,800,'2025-07-20',3);

-- 소지 아이템
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (1,4,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (2,22,2,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (3,3,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (3,23,2,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (4,8,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (4,31,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (6,6,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (6,15,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (7,12,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (7,28,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (9,2,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (9,29,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (10,5,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (10,25,3,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (11,21,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (11,33,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (12,7,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (12,24,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (13,9,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (14,10,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (14,21,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (15,22,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (15,30,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (17,16,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (17,18,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (19,14,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (19,23,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (20,25,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (20,32,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (22,23,3,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (22,33,2,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (23,9,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (23,24,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (25,16,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (25,20,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (26,22,2,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (26,31,1,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (27,3,2,'2025-09-14 17:47:14');
INSERT INTO playeritems (`PlayerID`,`ItemID`,`Quantity`,`ObtainDate`) VALUES (27,28,1,'2025-09-14 17:47:14');

COMMIT;

select count(*) from Players;

select sum(Gold) from Players;

select avg(Level) from Players;

select max(Gold), min(Gold)
from players;

SELECT
	COUNT(*) AS PlayerCount,
	SUM(Gold) AS TotalGold,
	AVG(Level) AS AvgLevel,
	MAX(Gold) AS MaxGold,
	MIN(Gold) AS MinGold
FROM Players;

select count(GuildID), count(*)
from Players;

select count(distinct Level) as UniqueLevels
from Players;

select count(*) from Players;

select sum(Gold) from Players;

select round(avg(Level)) from Players;

select max(Gold), min(Gold) from Players;

select count(distinct(Level)) from players;

select count(*) as ItemCount, avg(Price)
from Items;

select count(*) as CountItems, avg(Price)
from Items where Price >= 1000;

select Level, avg(Gold) as AvgGold
from Players
where Level >= 1
group by Level
having avg(Gold) >= 50000;

select Level,
	year(JoinDate) as JoinYear,
	count(*) as PlayerCount,
	avg(Gold) as AvgGold
from Players
group by Level, YEAR(JoinDate)
having count(*) >= 3;

select Level,
	count(*) as PlayerCount
from Players
group by Level;

select Level, avg(Gold) as AvgGold
from Players group by Level order by Level asc;

select Level, count(*) as PlayerCount
from Players
where JoinDate <= '2024-12-31'
group by Level;

select Rarity, count(*) as ItemCount
from Items 
group by rarity;

select Rarity, avg(Price)
from Items
group by Rarity
having avg(price) >= 2000;

select Rarity, count(*) as ItemCount
from Items
where price >= 1000
group by Rarity;

select substr(Name, 1, 1) as FirstChar, count(*) as PlayerCount
from Players
group by substr(Name, 1, 1)
order by substr(Name, 1, 1) asc;

select year(JoinDate) as Year, 
	count(*) as PlayerCount
from players
group by year(JoinDate);

select Price, count(*) as ItemCount
from items
group by Price
order by Price asc;

select Level, avg(Gold)
from players
group by Level
Having avg(Gold) >= 100000;



select * from Players where GuildID = 7;

drop table Guilds;

select * from Guilds;

delete from Guilds where GuildID = 3;

update Guilds set GuildID = 7 where GuildID = 2;