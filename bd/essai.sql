CREATE TABLE Realisateur(
    codR char(4),
    nomR varchar(20),
    nationR varchar (20),
    dNaisR date,
    dDecR date,
    CONSTRAINT pk_Realisateur primary key(codR),
    CONSTRAINT ck_Relisateur_date check (dDecR>dNaisR),
);


create table Film(
    codF char(4),
    TitreF varchar(60),
    datesortie number,
    duree number,
    budget number,
    codR char(4),
    CONSTRAINT pk_Film primary key(codF),
    CONSTRAINT fk_Film_Realisateur foreign key (codR) references Realisateur,
    CONSTRAINT ck_Flim_duree check(dUree>0)
);