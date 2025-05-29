alter table Film modify (titreF varchar(70));

alter table Realisateur add (prenomR varchar(20));

update Realisateur set prenomR = 'James', nomR='Cameron' where codR='R0001';
update Realisateur set prenomR = 'Ridley', nomR='Scott' where codR='R0002';
update Realisateur set prenomR = 'San', nomR='Mendes' where codR='R0003';
update Realisateur set prenomR = 'Jean', nomR='Negulesco' where codR='R0004';
update Realisateur set prenomR = 'Guillaume', nomR='Canet' where codR='R0005';
update Realisateur set prenomR = 'Claude', nomR='Berry' where codR='R0006';
update Realisateur set prenomR = 'Danny', nomR='Boyle' where codR='R0007';
update Realisateur set prenomR = 'Gilles', nomR='Lellouche' where codR='R0008';

update Film set budget = budget + budget*0.1;


alter table Film drop constraint fk_Film_Realisateur;
alter table Realisateur modify (codR char(5));
alter table Film modify (codR char(5));
alter table Film add constraint fk_Film_Realisateur foreign key(codR) references Realisateur;


alter table Film add (nomCat varchar(30));
alter table Film add constraint ck_Film_nomCat CHECK (nomCat IN ('comédie', 'drame', 'policier', 'science-fiction', 'horreur', 'thriller', 'comédie dramatique'));

update Film set nomCat= 'science-fiction' where codF='F001';
update Film set nomCat= 'science-fiction' where codF='F002';
update Film set nomCat= 'science-fiction' where codF='F003';
update Film set nomCat= 'drame' where codF='F004';
update Film set nomCat= 'drame' where codF='F005';
update Film set nomCat= 'drame' where codF='F006';
update Film set nomCat= 'comédie dramatique' where codF='F007';
update Film set nomCat= 'comédie dramatique' where codF='F008';
update Film set nomCat= 'thriller' where codF='F009';
update Film set nomCat= 'comédie' where codF='F010';

set pagesize 100
set linesize 300

select Film.*
from Film
where budget > 1000000;

Select Acteur.*
from Acteur
where nationA='americaine';