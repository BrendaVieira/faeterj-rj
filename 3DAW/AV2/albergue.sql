

CREATE TABLE `CLIENTE` (
  `ID` int(3) NOT NULL,
  `NOME` varchar(20) NOT NULL,
  `ENDERECO` varchar(20) NOT NULL,
  `POSTALCODE` char(1) NOT NULL,
  `EMAIL` char(1) NOT NULL,
  `CPF` char(1) NOT NULL,
  `PASSAPORTE` varchar(20) NOT NULL,
  `DATANASCIMENTO` varchar(7) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;


INSERT INTO `CLIENTE` (`ID`, `NOME`, `ENDERECO`, `POSTALCODE`, `EMAIL`, `CPF`, `PASSAPORTE`, `DATANASCIMENTO`) VALUES
(1, 'BRENDA', 'RUA 1', 948198494, 'BRENDA@LALALA', '8371232', '783247CNDH', '22/07'),
(2, 'MARCOS', 'RUA 2', 983184, 'MARCOS@LALALA', '871783', '07384CNDH', '12/02'),
(3, 'MARIA', 'RUA 3', 9012479012, 'MARIA@LALALA', '87218812', '8734UEJD', '04/01'),
(4, 'ROMULO', 'RUA 4', 30720734, 'ROMULO@LALALA', '9874174', '92UEI9JD', '09/09'),
(5, 'LUCAS', 'RUA 5', 39720741, 'LUCAS@LALALA', '8712487', '287048EDHN', '34/10'),
(6, 'GABRIELA', 'RUA 6', 92739329, 'GABRIELA@LALALA', '81930894', '2189483EDJ', '19/12');


ALTER TABLE `CLIENTE`
  ADD PRIMARY KEY (`ID`);

ALTER TABLE `CLIENTE`
  MODIFY `ID` int(3) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;
COMMIT;

