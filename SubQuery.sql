use gameDB;

select Name, Level
from Players
where Level > (
	select avg(Level)
    from Players
);

select ItemName, Price
from Items
where Price in (
	select Price
    from Items
    where Rarity = 'Epic'
);

select p.Name
from Players p
where exists (
	select 1
    from PlayerItems pi
    where pi.PlayerID = p.PlayerID
);

select p.Name
from Players p
where not exists (
	select 1
    from PlayerItems pi
    where pi.PlayerID = p.PlayerID
);

select Name, Gold
from Players
where Gold > all (
	select avg(Gold)
    from Players
    where GuildID is not NULL
    group by GuildID
);

select g.GuildName, ga.AvgLevel
from (
	select GuildID, avg(Level) as AvgLevel
    from Players
    where GuildID is not NULL
    group by GuildID
) as ga
join Guilds g
on g.GuildID = ga.GuildID;

with GuildGold as (
	select GuildID, sum(Gold) as TotalGold
	from Players
	where GuildID is not NULL
	group by GuildID
)
select g.GuildName, gg.TotalGold
from Guilds g
join GuildGold gg
on g.GuildID = gg.GuildID;

select p.Name, p.Gold
from Players p
where exists (
	select 1
    from PlayerItems pi
    join Items i
    on pi.ItemID = i.ItemID
    where pi.PlayerID = p.PlayerID
    and i.Rarity = 'Legendary'
);

select ItemName, Price
from Items
where Rarity = 'common'
and Price < all(
	select Price
    from Items
    where Rarity = 'epic'
);

select p.Name, p.Level
from Players p
where p.Level >= (
	select avg(Level)
    from Players
)
and exists (
	select 1
    from PlayerItems pi
    where pi.PlayerID = p.PlayerID
);

SELECT Name, GuildID
FROM Players
WHERE GuildID = (
	SELECT GuildID
	FROM Players
	WHERE Name = '강건우'
)
AND Name <> '강건우';

