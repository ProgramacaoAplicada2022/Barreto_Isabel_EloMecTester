# ELO-MEC Tester da VSS

### O Elo-Mec Tester é um programa criado para auxiliar os testes dos robos da VSS da equipe RoboIME.

## Trabalho: PROPOSTA DE PROJETO
##### Al Henrique Barreto 20030 3° ANO COMUNICAÇÕES
##### Al Isabel Chaves de Freitas 20032 3° ANO ELÉTRICA

Esteja ciente do funcionamento dos motores,  encoders e comunicação dos robôs da VSS e SSL, para a preparação de jogos.


### Motivação
RoboIME é a equipe de robótica do IME, com robôs autônomos do Laboratório de Robótica e Inteligencia Computacional, formado por alunos de graduação em Engenharia de Computação, Engenharia Eletrônica e Engenharia Mecânica e alunos de mestrado e doutorado do Instituto Militar de Engenharia. A RoboIME participa de competições de nível nacional e internacional nas categorias Small Size League(SSL), Standard Education Kit (SEK), Very Small Soccer(VSS), Humanoid Robot Race(HRR) e Batalha.

Assim, com a reativação da VSS, um programa de testes dos robôs se faz necessário.

### Principais Funcionalidades

* Teste de Controle de Motores
* Teste de Encoders
* Teste do Microcontrolador

### Biblioteca Gráfica

* O programa irá utilizar o LabView 2022, para isso será necessário a intalação do aplicativo LabVIEW 2022 Q3, dar o pull do projeto SSL_NovoEloMecTest, e abrir o arquivo EloMec Tester.vi no ambiente LabView. Para testar, será necessário um Robo da SSL com o microcontrolador STM32F407 já com o firmware da pasta SSL_Firmware, o código deverá ser testado com o robô conectado ao computador. Para a RoboIME, a utilização do LabVIEW não será um problema pois esse aplicativo ja está instalado nas máquinas que realizam a comunicação com os Robôs atualmente.

### Esboço

* Executável do LabVIEW na qual os testes são realizados. 

![interface_LabView](https://github.com/ProgramacaoAplicada2022/Barreto_Isabel_EloMecTester/raw/main/Interface_grafica_funcional.jpeg)

* Para o projeto faremos o código do firmware do robô, que será escrito utilizando a interface STM32CubeIDE1.10.1
* Faremos também a lógica da interface de testes utilizando o LabVIEW 2022Q3.
* Para a realização dos testes, o Firmware deve ser passado para o microcontrolador e o robô deve ser conectado ao computador, selecionando a Porta de COM correta. 
* Devido à facilidade da parte física eletrônica e mecânica dos robôs da SSL já estarem prontas, o firmware e os testes serão feito utilizando os Robôs da SSL e o microcontrolador STM32F407. Para os robôs da VSS, o código deverá ser adaptado para utilizar a BluePill e será necessário utilizar o STlink para passar o firmware. Porém a interface do LabView funcionará em ambos os robôs.
* Para "rodar" a interface, deve-se selecionar a seta branca no canto superior esquerdo da tela.
* Ao selecionar o booleano wheelsspeed, será possível fazer o controle da velocidade dos motores por roda, inserindo nos inputs wheel1, wheel2, wheel3 e wheel4 a velocidade. A resposta do motor será obtida pela leitura do gráfico que indica o RPM dos motores. 
* Com o booleano wheelsspeed desativado, será possível fazer o controle da velocidade dos motores definindo a direção a ser atingida pelo robô, inserindo nos inputs velnormal, veltangent e velangular as velocidades normal, tangente e angular do robô. A resposta dos motores serão obtidas pela leitura do gráfico que indica o RPM dos motores. 
* O botão de STOP para de enviar dados para o robô e chama as rotinas de finalização da comunicação e fechamento da Porta COM.
* O botão hexagonal vermelho, no canto superior esquerdo, o abort só interrompe a execução da VI imediatamente, sem executar rotinas de finalização, sendo útil para abortar a execução em caso de travamento ou erro.

###  Tutorial:

1- Instale a interface STM32CubeIDE1.10.1
2- Abra o projeto da pasta SSL_Firmware nessa interface.
3- Passe o firmware para o microcontrolador STM32F407 conectando o cabo miniUSB no microcontrolador e USB no computador, selecione a porta correta e clique em "Run SSL_Firmware Debug".
4- Instale a interface para os testes LabVIEW 2022Q3.
5- Abra o arquivo EloMec Tester.vi, do projeto SSL_NovoEloMecTest, no ambiente LabView.
6- Conecte os cabos mini USB e micro USB no microcontrolador no robô para realizar a comunicação. Alimente o Robô com uma ddp de 7,4V e 1,5A de limite em uma fonte de bancada.
7- Para "rodar" a interface, deve-se selecionar a seta branca no canto superior esquerdo da tela.
8- Ao selecionar o booleano wheelsspeed, será possível fazer o controle da velocidade dos motores por roda, inserindo nos inputs wheel1, wheel2, wheel3 e wheel4 a velocidade. A resposta do motor será obtida pela leitura do gráfico que indica o RPM dos motores. 
![controle_rodas](https://github.com/ProgramacaoAplicada2022/Barreto_Isabel_EloMecTester/raw/main/controle_por_roda.jpeg)
9- Com o booleano wheelsspeed desativado, será possível fazer o controle da velocidade dos motores definindo a direção a ser atingida pelo robô, inserindo nos inputs velnormal, veltangent e velangular as velocidades normal, tangente e angular do robô. A resposta dos motores serão obtidas pela leitura do gráfico que indica o RPM dos motores. 
![controle_direcao](https://github.com/ProgramacaoAplicada2022/Barreto_Isabel_EloMecTester/raw/main/controle_por_direcao.jpeg)
10- O botão de STOP para de enviar dados para o robô e chama as rotinas de finalização da comunicação e fechamento da Porta COM.

### Observações:

Como o nosso projeto envolve um hardware, colocaremos no repositório um vídeo do projeto funcionando e poderemos apresentar para a turma em um momento posterior oportuno.

