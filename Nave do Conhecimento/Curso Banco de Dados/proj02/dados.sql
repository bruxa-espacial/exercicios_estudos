/*
CRUD -> CREATE, READ, UPDATE, DELETE
*/


/* C R E A T E */
INSERT INTO `pessoas`(`primeiro_nome`, `sobrenome`, `data_nascimento`, `endereço`, `Identidade`, `cpf`, `email`, `telefone`) VALUES ('JM','Flora','2000-10-31','Algum canto de Nilópolis, Rio de Janeiro',111111111,11111111111,'jmflora@gmail.com','11111111');
INSERT INTO `pessoas`(`primeiro_nome`, `sobrenome`, `data_nascimento`, `endereço`, `Identidade`, `cpf`, `email`, `telefone`) VALUES ('Sandy','Cristina','2001-06-31','Algum canto de São Paulo',222222222,22222222222,'sancristina@gmail.com','22222222');
INSERT INTO `pessoas`(`primeiro_nome`, `sobrenome`, `data_nascimento`, `endereço`, `Identidade`, `cpf`, `email`, `telefone`) VALUES ('Camille','Mirabelle','0001-12-31','Faerie',666666666,66666666666,'millamirabello@gmail.com','66666666');
INSERT INTO `pessoas`(`primeiro_nome`, `sobrenome`, `data_nascimento`, `endereço`, `Identidade`, `cpf`, `email`, `telefone`) VALUES ('John','Alan','2001-06-31','Cidade Pequena Fictícia',999999999,99999999999,'johnallan@gmail.com','99999999');


/* R E A D */
SELECT * FROM `pessoas` WHERE id_pessoa=1; 
SELECT MIN(id_pessoa), primeiro_nome FROM `pessoas`;
SELECT MAX(id_pessoa), primeiro_nome FROM `pessoas`;
SELECT * FROM `pessoas` ORDER BY primeiro_nome;



/* U P D A T E */
UPDATE

/* D E L E T E */
DELETE