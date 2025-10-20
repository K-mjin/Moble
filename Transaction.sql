use gameDB;

start transaction;

select *
from Players
where Name = '강건우' or Name = '박준혁';

-- 보낸 사람(강건우) 골드 차감(잔액 확인 포함)
UPDATE Players
SET Gold = Gold - 5000
WHERE Name = '강건우' 
AND Gold >= 5000;

-- 실제로 1행이 바뀌었는지 확인(잔액 부족이면 0행)
SELECT ROW_COUNT() 
AS affected_sender;

-- 받는 사람(박준혁) 골드 증가
UPDATE Players
SET Gold = Gold + 5000
WHERE Name = '박준혁';
SELECT ROW_COUNT() 
AS affected_receiver;

-- 점증 후 커밋/롤백
-- (클라이언트/프로시저 로직에서 두 결과가 모두 1이어야 COMMIT)
commit; -- 또는 ROLLBACK


start transaction;

-- 1) 현재 값 확인
select Name, Gold
from Players
where Name = '박민준';

-- 2) 임시 변경
update Players
set Gold = Gold + 5000
where Name = '박민준';

-- 3) 변경 확인
select Name, Gold
from Players
where Name = '박민준';

-- 4) 맘에 안들면 되돌리기
rollback;

-- 5) 정말 복구됐는지 확인
select Name, Gold
from Players
where Name = '박민준';


START TRANSACTION;

INSERT INTO Players (Name, Level, Gold, JoinDate, GuildID)
VALUES ('정대현', 1, 1000, '2025-09-14', NULL);

-- 추가된 데이터 확인
SELECT * FROM Players WHERE Name = '정대현';

commit;


START TRANSACTION;

INSERT INTO Items (ItemName, Rarity, Price)

-- ObtainDate는 기본값(NOW) 사용
VALUES ('Beginner Wand', 'Common', 300);

-- 추가된 아이템 확인
SELECT ItemName, Rarity, Price, ObtainDate
FROM Items
WHERE ItemName = 'Beginner Wand';

rollback;

commit;


START TRANSACTION;

-- 예: 박민준(PlayerID=9)에게 ItemID=2 아이템 1개 지급
INSERT INTO PlayerItems (PlayerID, ItemID, Quantity, ObtainDate)
VALUES (9, 2, 1, NOW());

-- 쇼유 관계 확인
SELECT * FROM PlayerItems
WHERE PlayerID = 9 AND ItemID = 2;

ROLLBACK;

commit;


start transaction;

-- 식제 삭제되긴 전에 대상을 미리 확인하는 습관
select Name
from Players
where Name = '정대현';

-- 정대현 플레이어 삭제
delete from Players
where Name = '정대현';

-- 삭제 후 남은 플레이어 확인
select *
from Players
where Name = '정대현';

rollback;


start transaction;

-- GuildID=1 삭제 시 미리 확인
select *
from Players
where GuildID=1;

-- 길드 삭제(소속 플레이어의 GuildID는 NULL이 됨)
delete from Guilds
where GuildID=1;

-- 삭제 후 확인
select GuildID, count(*) as cnt
from Players
group by GuildID;

rollback;


start transaction;

INSERT INTO Players (Name, Level, Gold, JoinDate, GuildID)
VALUES ('신입용사', 1, 5000, CURDATE(), NULL);

select *
from Players;

rollback;


start transaction;

insert into Items(ItemName, Rarity, Price)
values ('Training Sword', 'Common', 300);

commit;


start transaction;

insert into PlayerItems(PlayerID, ItemID, quantity, obtainDate)
values (9, (select ItemID from Items  where ItemName = 'Training Sword'), now());

select *
from PlayerItems
where ItemID;


start transaction;

select Name, Gold
from Players
where Name = '김찬송';

update Players
set Gold = Gold + 5000
where Name = '김찬송';

select Name, Gold
from Players
where Name = '김찬송';

rollback;

start transaction;

select ItemName, Rarity, Price
from Items
where ItemName = 'Amulet of Power';

update Items
set Price = round(price * 1.1, -2);

select ItemName, Rarity, Price
from Items
where ItemName = 'Amulet of Power';

rollback;

start transaction;

select Name, JoinDate
from Players
where JoinDate 
between '2025-01-01' and '2025-01-31';

delete from Players
where JoinDate
between '2025-01-01' and '2025-01-31';

select Name, JoinDate
from Players
where JoinDate 
between '2025-01-01' and '2025-01-31';

select Name, JoinDate
from Players;

rollback;