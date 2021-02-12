#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <time.h>
#include <math.h>

struct JOGADOR
{
int Njogador,x,Contador,Player[0][5],pergunta[35]; // váriaveis feitas com struct para ficar salva durante todo o jogo.
};struct JOGADOR a;


int main()
{
	setlocale(LC_ALL, "portuguese");
			// do while feito para que escolha a quantidade de players sem bugar
		do{
	printf("Quantos jogadores(MIN PLAYER 2|MAX PLAYER 4): \nNúmeros de jogadores: ");
	scanf("%d",&a.Njogador);

		if(a.Njogador == 2){
			printf("2 PLAYERS\n\n");
		}else
		if(a.Njogador == 3){
			printf("3 PLAYERS\n\n");
		}else
		if(a.Njogador == 4){
			printf("4 PLAYERS\n\n");
		}else
		if(a.Njogador <2 || a.Njogador >4){
			system("cls");
			printf("Números de jogadores errados! \n\n");
		}
	}while(a.Njogador <2 || a.Njogador>4 ); // só deixar o resultado entre 2 e 4 se não entra num loop infinito
	
	a.Player[a.Njogador][5]; // o numero do Njogador é atribuido a matriz Player para ficar salvo a quantidade de jogadas pelos números de player

	
	srand (time(NULL));
	a.x =rand() % 2001; // randomiar um número aléatorio entre 0 e 2000
	printf("Tente acerta um NÚMERO de 0 a 2000 com 5 perguntas\nAqui vai a primeira\n\n");
	Perguntas(); // chama as perguntas
} 

int Perguntas()
{
	if(a.pergunta[8] == 0){ // para não repetir a pergunta
		if((a.x)%2==0){ //para ver se o numero(X) randozimado se encaixa na pergunta
 			printf("O NÚMERO é par\n");
 			a.pergunta[8] = 1;  // é dado o número 1, para que a pergunta não repita
 			JOGO(); // chama o jogo
	 	}} //Todas as perguntas são na mesma idéia
	if(a.pergunta[9] == 0){
		if((a.x)%2==1){
 			printf("O NÚMERO é ímpar\n");
 			a.pergunta[9] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[0] == 0){
 		if(a.x > 518){
 			printf("O NÚMERO é maior do que a idade do descobrimento do Brasil.\n");
 			a.pergunta[0] = 1;
 			JOGO();		
 		}}
	if(a.pergunta[1] == 0){
		if(a.x > 100 && a.x <900){
 			printf("O NÚMERO está num intervalo de 100 e 900\n");
 			a.pergunta[1] = 1;
 			JOGO();
		}}

	if(a.pergunta[3] == 0){
	 	if(a.x > 799 && a.x<1001){
 			printf("A divisão do NÚMERO por 2 está entre 400 e 500\n");
 			a.pergunta[3] = 1;
 			JOGO();
		}} 
	if(a.pergunta[4] == 0){
	 	if(a.x < 477){
 			printf("O NÚMERO é menor que o começo da idade média\n");
 			a.pergunta[4] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[5] == 0){
	 	if(a.x > 475 && a.x <1454){
 			printf("O NÚMERO está entre o périodo da idade média\n");
 			a.pergunta[5] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[6] == 0){
	  if(a.x > 1700){
 		printf("A divisão do NÚMERO por 3 está entre 566 e 666\n");
 		a.pergunta[6] = 1;
 		JOGO();
	 	}}
	if(a.pergunta[7] == 0){
		if(a.x >900 && a.x<1200){
 			printf("A raiz do NÚMERO está entre 30 e 35\n");
 			a.pergunta[7] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[2] == 0){
		if(a.x <100){
 			printf("A multiplicação do NÚMERO por 3 está entre 1 e 300\n");
 			a.pergunta[2] = 1;
 			JOGO();
		}} 
	if(a.pergunta[10] == 0){
		if(a.x <1729){
 			printf("O NÚMERO é menor que a raiz cubica de 12\n");
 			a.pergunta[10] = 1;
 			JOGO();
	 	}} 
	if(a.pergunta[11] == 0){
		if(a.x > 1094 && a.x<1292){
 			printf("O NÚMERO está entre o periodo de todas as cruzadas\n");
 			a.pergunta[11] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[12] == 0){
		if((a.x)%5==0){
 			printf("O NÚMERO é divisivel por 5\n");
 			a.pergunta[12] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[13] == 0){
		if(a.x>1500 && a.x < 1800){
 			printf("O NÚMERO está entre 1500 e a subtração de 2088 menos o tempo em que o Brasil era colônia!\n");
 			a.pergunta[13] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[14] == 0){
		if(a.x>1650 && a.x < 1700){
 			printf("O NÚMERO está entre a data da insurreição pernambucana e a subtração de 3310 menos a data em que ocorreu a guerra dos mascates!\n");
 			a.pergunta[14] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[15] == 0){
		if(a.x>0 && a.x < 500){
 			printf("O NÚMERO está entre 500 e a data da conjuração do Nosso Pai Dividida por 10 menos 166!\n");
 			a.pergunta[15] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[16] == 0){
		if(a.x>400 && a.x < 600){
 			printf("O NÚMERO está entre a data da guerra dos mascates dividido por 4!\n");
 			a.pergunta[16] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[17] == 0){
		if(a.x>100 && a.x < 200){
 			printf("O NÚMERO está entre a data da cospiração dos Suassunas dividido por 100!\n");
 			a.pergunta[17] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[18] == 0){
		if(a.x>600 && a.x < 700){
 			printf("O NÚMERO está entre a data da revolução pernambucana subtraindo por 1117!\n");
 			a.pergunta[18] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[19] == 0){
		if(a.x < 2000){
 			printf("O NÚMERO está entre a data da convenção do Beberibe, somando 179!\n");
 			a.pergunta[19] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[20] == 0){
		if(a.x>1200 && a.x < 1300){
 			printf("O NÚMERO está entre a data da confederação do Equador dividido por 2 mais 370!\n");
 			a.pergunta[20] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[21] == 0){
		if(a.x>0 && a.x < 100){
 			printf("O NÚMERO está entre a data da revolição praieira vezes 5 dividido por 267!\n");
 			a.pergunta[21] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[22] == 0){
		if(a.x>1400 && a.x < 1500){
 			printf("O NÚMERO está entre o período da primeira guerra mundial subtraindo por 430!\n");
 			a.pergunta[22] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[23] == 0){
		if(a.x>350 && a.x < 400){
 			printf("O NÚMERO está entre a data da revolução constitucionalista dividido por 5!\n");
 			a.pergunta[23] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[24] == 0){
		if(a.x>1939 && a.x < 1945){
 			printf("O NÚMERO está entre o período em que durou a segunda guerra mundial!\n");
 			a.pergunta[24] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[25] == 0){
		if(a.x < 300){
 			printf("A divisão do NÚMERO por 16 está entre 18 e 19!\n");
 			a.pergunta[25] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[26] == 0){
		if(a.x < 75){
 			printf("A multiplicação do NÚMERO por 7 está entre 500 e 535!\n");
 			a.pergunta[26] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[27] == 0){
		if(a.x>100 && a.x < 350){
 			printf("O NÚMERO está entre a divisão de 1000 por 10 e a multiplicação de 35 por 10!\n");
 			a.pergunta[27] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[28] == 0){
		if(a.x < 540){
 			printf("O NÚMERO está entre a multiplicação de 200 e o período em que durou a guerra do Araguaia!\n");
 			a.pergunta[28] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[29] == 0){
		if(a.x < 1400){
 			printf("Seu NÚMERO é a Multiplicação de 200 e o período em que durou a guerra do Araguaia!\n");
 			a.pergunta[29] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[30] == 0){
		if(a.x < 320){
 			printf("O NÚMERO está entre a multiplicação de 400 e o período em que durou a guerra entre o Irã e Iraque!\n");
 			a.pergunta[30] = 1;
 			JOGO();
	 	}}
	if(a.pergunta[31] == 0){
		if( a.x > 1500){
 			printf("O NÚMERO Está a cima do descobrimento do Brasil !\n");
 			a.pergunta[31] = 1;
 			JOGO();
	 	}}  	
}

int JOGO()
{
	int i;
	for(i=0;i<a.Njogador;i++){  //for criado só para passar as linhas, o Njogador é para contagem de vezes jogada
		printf("Número PLAYER %d: ",i+1);
		scanf("%d",& a.Player[i][a.Contador]); // declarar o número onde o jogo ocorre,  Contador ele vem como o numero de colunas
		
	if(a.Player[i][a.Contador]==a.x){ //se a pessoa acertar o número ela chama o resultado
		printf("WINS PLAYER %d",i+1);
		Resultado();
	}}
	a.Contador++; // contador ele tem 2 funções, 1 passar o número de colunas da matriz(Player), 2 e a quantidade de vezes que o jogo pode ser jogado
	if(a.Contador == 5){ // se for igual a 5 ele chama o resultado
		Resultado();
	}
	int Perguntas();
}
	
int Resultado()
{

	int i,j,menor,resposta;
	system("cls");
	for(i=0;i<a.Njogador;i++){ // 2 for construido para passar os números dos players que foram digitados
		for(j=0;j<5;j++){
		printf("Número PLAYER %d: %d\n",i+1,a.Player[i][j]); // mostra os players os números declarado anteriormente 
		a.Player[i][j] =abs( a.Player[i][j] - a.x); // faz uma subtração entre os números declarado pelo número aléatorio(X) e coloca o número absoluto deles deixando tudo positivo

	}}
	printf("O número sorteado foi : %d\n",a.x); // mostra o número sorteado
	menor = a.Player[0][0]; // adiciona o número da posição 0 da matriz como o menor
	for(i=0;i<a.Njogador;i++){// for para passar todos os números subtraidos e ver quem se aproxima mais do número aléatorio(X)
		for(j=0;j<5;j++){
		if(a.Player[i][j]<menor){ // se for menor que o menor ele adiciona ao menor
        menor=a.Player[i][j];
    	}
	}}
	for(i=0;i<a.Njogador;i++){ // for para declarar o campeão
		for(j=0;j<5;j++){
		if(a.Player[i][j]== menor){ // para saber o player que acertou
			printf("PLAYER %d WINS\n\n", i+1);
      	}
	}}

	for(i=0;i<35;i++){ // adiciona 0 em todas as perguntas para poder repetilas 
		a.pergunta[i]=0;
	}
	a.Contador=0; // adiciona 0 em contador, para renicia o jogo sem bugar
	
	printf("Deseja renicia o jogo \n1 para SIM \n2 para NÃO\n");
	scanf("%d",&resposta); // para renicia o jogo ou não
	if(resposta == 1){
		system("cls");
		main();
	}else{
		exit(0);
	}
}
