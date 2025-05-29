-- 0.
select count(codF) as nombreDeFilm 
from Film;

-- 1.
select count(distinct nAct)
from Joue J, Film F, Realisateur R
where J.codF=F.codF 
and R.codR=F.codR
and nomR='Cameron'
and prenomR='James';

-- 2.
select max(budget)
from Film;

-- 3.
select titreF
from Film
where budget = (select max(budget)
                from Film);

--4.
select sum(budget)
from Film F, Realisateur R
where F.codR=R.codR
and nomR='Cameron'
and prenomR='James';

--5.
select F.codR, nomR,prenomR, count(codF) as nombreDeFilm
from Film F, Realisateur R 
where F.codR= R.codR
group by F.codR,nomR,prenomR
order by nombreDeFilm DESC;

--6.
select nomR,prenomR,nationR, count(distinct nAct) as NombreActeur
from Joue J,Film F, Realisateur R 
where J.codF=F.codF 
and F.codR=R.codR 
group by F.codR,nomR,prenomR,nationR;

-- 7.
select nomR,nationR, sum(budget) as budgetTotalFilmSF
from Realisateur R , Film F 
where F.codR=R.codR
group by F.codR,nomR,nationR,nomCat
having nomCat='science-fiction';

--7.
select nomR,nationR, sum(budget) as budgetTotalFilmSF
from Realisateur R , Film F 
where F.codR=R.codR
and nomCat='science-fiction'
group by F.codR,nomR,nationR;

--8.
select nomR,prenomR,nationR,nomCat,count(codF) as NbFilmParCat
from Realisateur R, Film F 
where R.codR=F.codR
group by F.codR,nomR,prenomR,nationR,nomCat;

--9.
select nomA,prenomA 
from Joue J, Acteur A 
where J.nAct=A.codA 
and nationA='américaine'
group by J.nAct, nomA,prenomA 
having count(codF) > 2;

--10.
select nomR,prenomR,nationR 
from Film F,Realisateur R 
where F.codR=R.codR 
and nomCat='science-fiction'
group by F.codR,nomR,prenomR,nationR 
having sum(budget) > 1000000;

--11.
select nomA,prenomA 
from Acteur A,Joue J 
where A.codA=J.nAct
and (nomA <>'Winslet' or prenomA<> 'Kate')
group by  nAct, nomA, prenomA 
having count(codF) > (select count(codF)
                        from Joue J, Acteur A
                        where J.nAct=A.codA
                        and nomA='Winslet'
                        and prenomA='Kate');

--12.
select nomA,prenomA
from Acteur A, Joue J 
where A.codA=J.nAct 
group by nAct,nomA,prenomA 
having count(codF)=  (select max(count(codF))
                        from Joue J
                        group by nAct);

-- select nAct,nomA,prenomA, count(codF)
--                         from Joue J, Acteur A
--                         where J.nAct=A.codA
--                         group by nAct,nomA,prenomA;


