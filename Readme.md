# ELO-MEC Tester da VSS

### O Elo-Mec Tester é um programa criado para auxiliar os testes dos robos da vss da equipe Roboime.

## Trabalho: PROPOSTA DE PROJETO
##### Al Henrique Barreto 20030 3° ANO COMUNICAÇÕES
##### Al Isabel Chaves de Freitas 20032 3° ANO ELÉRTICA

Esteja ciente do funcionamento dos motores,  encoders e comunicação dos robôs da VSS e SSL, para a preparação de jogos.


### Motivação
RoboIME é uma equipe de futebol de robôs autônomos do Laboratório de Robótica e Inteligencia Computacional formado por alunos de graduação em Engenharia de Computação, Engenharia Eletrônica e Engenharia Mecânica e alunos de mestrado e doutorado do Instituto Militar de Engenharia. A RoboIME participa de competições de nível nacional e internacional nas categorias Small Size League(SSL), Standard Education Kit (SEK) e Very Small Soccer(VSS).

Assim, com a reativação da VSS, um programa de testes dos robôs se faz necessário.

### Principais Funcionalidades

* Teste de Controle de Motores
* Teste de Encoders
* Teste do Microcontrolador

### Biblioteca Gráfica

* O programa irá utilizar o LabView, para isso será necessário a intalação do aplicativo LabView e baixar o executável no Git quando estiver pronto. Para a RoboIME, a utilização do LabView não será um problema pois esse aplicativo ja está instalado nas máquinas que realizam a comunicação com os Robôs atualmente.

### Esboço

* Executável do LabView na qual os testes são realizados. 

![interface_LabView](https://user-images.githubusercontent.com/82892691/200083499-a01c7bc8-06ca-43fe-9de7-760000f0d888.jpeg)

* Para o projeto faremos o código do firmware do robô, que será escrito utilizando a interface STM32CubeIDE1.10.1
* Faremos também a lógica da interface de testes utilizando o LabView.
* Para a realização dos testes, o Firmware deve ser passado para o microcontrolador e o robô deve ser conectado ao computador, selecionando a Porta de COM correta. 
* Devido à facilidade da parte física eletônica e mecânica dos robôs da SSL já estarem prontas, o firmware e os testes serão feito utilizando os Robos da SSL e o microcontrolador Discovery f407. Para os robôs da VSS, o código deverá ser adaptado para utilizar a BluePill e será necessário utilizar o STlink para passar o firmware. Porém a interface do LabView funcionará em ambos os robôs.
* Para "rodar" a interface, deve-se selecionar a seta branca no canto superior esquerdo da tela.
* Caso o robô não esteja conectado ou a porta de COM selecionada seja a errada, o led indicando que o robô está conectado permanece apagado.
* Nas abas de Duty Cycle será possível selecionar a velocidade a ser mandada para cada motor, a resposta do motor será obtida pela leitura do gráfico que indica o RPM dos motores. 
* O botão de STOP pode ser utilizado para parar de enviar dados para os robôs.
* O botão hexagonal vermelho, no canto superior esquerdo, para a comunicação da interface com o robô, ou seja, a interface para de "rodar".
