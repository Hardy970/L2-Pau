INSERT INTO Realisateur VALUES ('R0001','James Cameron','canadienne','16/08/1954',null);
INSERT INTO Realisateur VALUES ('R0002','Ridley Scott','américaine','30/11/1937',null);
INSERT INTO Realisateur VALUES ('R0003','San Mendes','anglaise','01/08/1965',null);
INSERT INTO Realisateur VALUES ('R0004','Jean Negulesco','américaine','26/02/1900','18/07/1993');
INSERT INTO Realisateur VALUES ('R0005','Guillaume Canet','française','10/04/1973',null);
INSERT INTO Realisateur VALUES ('R0006','Claude Berry','française','01/07/1934','12/01/2009');
INSERT INTO Realisateur VALUES ('R0007','Danny Boyle','anglaise','20/10/1956',null);
INSERT INTO Realisateur VALUES ('R0008','Gilles Lellouche','française','05/07/1972',null);


insert into Acteur values ('A0001', 'Worthington', 'Sam','australienne', 'M', '02/08/1976', NULL );
insert into Acteur values ('A0002', 'Saldana', 'Zoe', 'américaine', 'F', '19/06/1978', NULL);
insert into Acteur values ('A0003', 'Weaver', 'Sigourney', 'américaine', 'F', '08/10/1949', NULL);
insert into Acteur values ('A0004', 'Lang', 'Stephen', 'américaine', 'M', '11/07/1952', NULL);
insert into Acteur values ('A0005', 'Weaver', 'Sigourney', 'américainee', 'M', '08/10/1949', NULL);
insert into Acteur values ('A0006', 'Biehn', 'Micheal', 'américaine', 'M', '31/07/1956', NULL);
insert into Acteur values ('A0007', 'Henriksen', 'Lance', 'américaine', 'M', '05/05/1940', NULL);
insert into Acteur values ('A0008', 'Skerritt', 'Tom', 'américaine', 'M', '25/08/1933', NULL);
insert into Acteur values ('A0009', 'Di caprio', 'Leonardo', 'américaine', 'M', '11/11/1974', NULL);
insert into Acteur values ('A0010', 'Winslet', 'Kate', 'anglaise', 'F', '10/05/1975', NULL);
insert into Acteur values ('A0011', 'Webb', 'Clifton', 'américaine', 'M', '11/11/1889', '26/02/1966');
insert into Acteur values ('A0012', 'Stanwyck', 'Barbara', 'américaine', 'F', '16/07/1907', '20/01/1990');
insert into Acteur values ('A0013', 'Dalton', 'Audrey', 'américaine', 'F', '21/01/1934', NULL);
insert into Acteur values ('A0014', 'Wagner', 'Robert', 'américaine', 'M', '10/02/1930', NULL);
insert into Acteur values ('A0015', 'Cluzet', 'Francois', 'française', 'M', '21/09/1955', NULL);
insert into Acteur values ('A0016', 'Cotillard', 'Marion', 'française', 'F', '30/09/1975', NULL);
insert into Acteur values ('A0017', 'Lellouche', 'Gilles', 'française', 'M', '05/07/1972', NULL);
insert into Acteur values ('A0018', 'Dujardin', 'Jean', 'française', 'M', '19/06/1972', NULL);
insert into Acteur values ('A0019', 'Magimel', 'Benoit', 'française', 'M', '11/05/1974', NULL);
insert into Acteur values ('A0020', 'Canet', 'Guillaume', 'française', 'M', '10/04/1973', NULL);
insert into Acteur values ('A0021', 'Tautou', 'Audrey', 'française', 'F', '09/08/1976', NULL);
insert into Acteur values ('A0022', 'Ledoyen', 'Virginie', 'française', 'F', '15/11/1975', NULL);
insert into Acteur values ('A0023', 'Poelvoorde', 'Benoit', 'belge', 'M', '22/09/1964', NULL);




insert into Film values ('F001','Avatar',2009,162,1000000,'R0001');
insert into Film values ('F002','Aliens, le retour',1986,137,2000000,'R0001');
insert into Film values ('F003','Alien,le huitieme passager',1979,116,3900000,'R0002');
insert into Film values ('F004','Titanic',1998,194,29300000,'R0001');
insert into Film values ('F005','Les noces rebelles',2009,125,12799999,'R0003');
insert into Film values ('F006','Titanic',NULL,98,1900000,'R0004');
insert into Film values ('F007','Les petits mouchoirs',2010,154,20900000,'R0005');
insert into Film values ('F008','Ensemble c''est tout',2007,97,5000000,'R0006');
insert into Film values ('F009','La plage',2000,119,20000010,'R0007');
insert into Film values ('F010','Narco',2004,105,2000000,'R0008');



insert into Joue values ('F001', 'A0001', 'Jake Sully');
insert into Joue values ('F001', 'A0002', 'Neytiri');
insert into Joue values ('F001', 'A0003', 'GRACE AUGUSTINE');
insert into Joue values ('F001', 'A0004', 'le colonel Miles Quaritch');
insert into Joue values ('F002', 'A0005', 'Lieutenant Ellen Ripley');
insert into Joue values ('F002', 'A0006', 'Caporal Dwayne Hicks');
insert into Joue values ('F002', 'A0007', 'Eveque');
insert into Joue values ('F003', 'A0003', 'Lieutenant Ellen Ripley');
insert into Joue values ('F003', 'A0008', 'Capitaine A.J.Dallas');
insert into Joue values ('F004', 'A0009', 'Jack Dawson');
insert into Joue values ('F004', 'A0010', 'Rose DeWitt Butaker');
insert into Joue values ('F005', 'A0009', 'Franck Wheeler');
insert into Joue values ('F005', 'A0010', 'April Wheeler');
insert into Joue values ('F006', 'A0011', 'Richard Ward Sturges');
insert into Joue values ('F006', 'A0012', 'Julia Sturges');
insert into Joue values ('F006', 'A0013', 'Anette Sturges');
insert into Joue values ('F006', 'A0014', 'Gifford Roger');
insert into Joue values ('F007', 'A0015', 'Max Cantara');
insert into Joue values ('F007', 'A0016', 'Marie');
insert into Joue values ('F007', 'A0018', 'Ludo');
insert into Joue values ('F007', 'A0017', 'Eric');
insert into Joue values ('F007', 'A0019', 'Vincent Ribaud');
insert into Joue values ('F008', 'A0020', 'Franck');
insert into Joue values ('F008', 'A0021', 'Camille');
insert into Joue values ('F009', 'A0009', 'Richard');
insert into Joue values ('F009', 'A0020', 'Etienne');
insert into Joue values ('F009', 'A0022', 'Françoise');
insert into Joue values ('F010', 'A0020', 'Gustave Klopp');
insert into Joue values ('F010', 'A0023', 'Lenny Bar');
insert into Joue values ('F010', 'A0017', 'le jumeau patineur');
