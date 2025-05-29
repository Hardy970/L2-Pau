CREATE TABLE Realisateur(
    codR varchar(6),
    nomR varchar(20),
    nationR varchar(20),
    dNaisR date,
    dDecR date,
    constraint pk_Realisateur primary key(codR),
    constraint ck_Realisateur_dNaisR check(dNaisR < dDecR)
);
CREATE TABLE Acteur(
    codA char(5),
    nomA varchar(20),
    prenomA varchar(20),
    nationA varchar(20),
    sexe char(1),
    dNaisA date,
    dDecA date,
    constraint pk_Acteur primary key(codA),
    constraint ck_Acteur_dNaisA check(dNaisA < dDecA),
    constraint ck_Acteur_sexe check(sexe in ('F','M')) 
);
CREATE TABLE Film(
    codF char(4),
    titreF varchar(60),
    dateSortie number,
    duree number,
    budget number,
    codR varchar(6),
    constraint pk_Film primary key(codF),
    constraint fk_Film_Realisateur foreign key(codR) references Realisateur
);
CREATE TABLE Joue(
    codF char(4),
    nAct char(5),
    nomPers varchar(30),
    constraint fk_Joue_Film foreign key(codF) references Film,
    constraint fk_Joue_Acteur foreign key(nAct) references Acteur,
    constraint pk_Joue primary key(codF,nAct)
);

