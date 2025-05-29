
--question 1)
select Film.* 
From Film 
Where budget > 1000000;

-- question 2

select Acteur.* 
from Acteur
where sexe='F' and nationA='américaine';

-- 3)

select distinct nationA
from Acteur;

-- 4)
select nomA, prenomA
from Acteur
where nationA='française' or 
nationA='belge';

--5)
select titreF
From Film F, Realisateur R
where F.codR= R.codR and nomR='Cameron' 
and prenomR='James';

--6)
select nomA,prenomA
from Acteur,Joue,Film
where Acteur.codA=Joue.nAct 
    and Joue.codF= Film.codF
    and titreF='La plage'
    and (nationA='française' or nationA='américaine');

--7)
select nomA,prenomA,dNaisA
from Acteur
where extract(year from dNaisA)=(select extract(year from dNaisA) from Acteur where nomA='Dujardin' and prenomA='Jean')
and (nomA <>'Dujardin'
or prenomA <> 'Jean');

--7)
select A1.prenomA, A1.nomA,A1.dNaisA
from Acteur A1, Acteur A2 
where A2.nomA='Dujardin' 
and A2.prenomA='Jean'
and extract(year from A1.dNaisA) = extract(year from A2.dNaisA) 
and (A1.prenomA <> 'Jean'
or A1.nomA <> 'Dujardin');

--8)
select R.* 
from Realisateur R
where extract(year from R.dDecR) < (select dateSortie from Film where titreF='Ensemble c''est tout');

--8)
select R.*
from Realisateur R, Film 
where titreF='Ensemble c''est tout'
and extract(year from dDecR) < dateSortie;

--9)
select distinct titreF, nomR
from Joue J,Film F,Realisateur R
where nomPers='Lieutenant Ellen Ripley'
and J.codF=F.codF 
and F.codR=R.codR;

--10)
select nomR 
from Realisateur 
where codR not in (
    select codR 
    from Joue J, Acteur A, Film F
    where A.nationA='americaine'
    and J.nAct=A.codA
    and J.codF=F.codF
);

--10)
select nomR 
from Realisateur
where codR in (select codR
                from Realisateur
                minus
                select codR
                from Joue J,Film F, Acteur A
                where A.nationA='americaine'
                and J.nAct= A.codA
                and J.codF=F.codF);

--11)
select distinct nomR,prenomR
from Joue J, Realisateur R, Acteur A, Film F
where nationA <> 'americaine'
and J.nAct=A.codA
and J.codF=F.codF 
and F.codR= R.codR
order by nomR ,prenomR ASC; 

--12)

select titreF,dateSortie,budget
from Film F, Realisateur R
where F.codR=R.codR
and (dateSortie - extract(year from dNaisR)) < 40;