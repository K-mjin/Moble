create database TestGameDB;

use TestGameDB;

CREATE TABLE Test_Items (
ItemID INT AUTO_INCREMENT PRIMARY KEY, -- 자동 증가 PK
ItemName VARCHAR(100) NOT NULL, -- 아이템 이름
Rarity VARCHAR(20) NOT NULL, -- 희귀도
Price INT NOT NULL, -- 가격
ObtainDate DATETIME DEFAULT NOW(), -- 기본값 : 현재 시간
CHECK (Rarity IN ('Common','Rare','Epic','Legendary')) -- 허용값만
);

CREATE TABLE Test_Players (
PlayerID INT PRIMARY KEY,
Name VARCHAR(50),
Gold INT
);

CREATE TABLE Test_Guilds (
GuildID INT PRIMARY KEY,
GuildName VARCHAR(100)
);

ALTER TABLE Test_Items
ADD CanEnhance BOOLEAN DEFAULT TRUE;

ALTER TABLE Test_Players
MODIFY Gold BIGINT;

ALTER TABLE Test_Guilds
ADD CONSTRAINT uq_guildname UNIQUE (GuildName);

ALTER TABLE Test_Items
ALTER COLUMN ObtainDate SET DEFAULT NOW();

ALTER TABLE Test_Players
ADD GuildID INT NULL,
ADD CONSTRAINT fk_players_guilds
FOREIGN KEY (GuildID)
REFERENCES Test_Guilds(GuildID)
ON DELETE SET NULL
ON UPDATE CASCADE;