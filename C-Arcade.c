#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<windows.h>
#include<stdbool.h>
void azzera_griglia(int griglia[][3]);
void trivia(int game);
void tris(int game);
void cavalli(int game);
void mastermind(int game);
void impiccato(int game);
void color(int x);
int main()
{
	int game;
	do{
		system("cls");
		printf("\n\n");
		printf("Benvenuto in C-Aracade!\n");
		printf("Scegli il gioco:\n-scrivi 1 per giocare a Trivia Quiz \n-scrivi 2 per giocare a Corsa dei Cavalli \n-scrivi 3 per giocare all'Impiccato \n-scrivi 4 per giocare a Mastermind \n-scrivi 5 per giocare a Tris\n");
		scanf("%d", &game);
		while(game<0||game>5)
		{
			color(12);
			printf("ERROR il numero inserito non e' tra quelli disponibili\n");
			color(15);
			scanf("%d", &game);
		}
		printf("\n\n");
		if(game==1)
		{
			trivia(game);	
		}
		else if(game==2)
		{
			cavalli(game);
		}
		else if(game==3)
		{
		    impiccato(game);
		}
		else if(game==4)
		{
			mastermind(game);
		}
		else if(game==5)
		{
			tris(game);
		}
	}while(game!=0);
}
  
void trivia(int game)
{
	printf("Benvenuto al trivia quest a tema informatica base!\n");
    char Risposta1,Risposta2,Risposta3,Risposta4,Risposta5,Risposta6,Risposta7,Risposta8,Risposta9,Risposta10,Risposta11,Risposta12,Risposta13,Risposta14,Risposta15,Risposta16,Risposta17,Risposta18,Risposta19,Risposta20;
    printf("1)Che cosa significa CPU? \nA) Central Process Unit \nB) Computer Personal Unit \nC) Central Processing Unit \nD) Central Processor Unit\n");
    scanf(" %c", &Risposta1);
    int punteggio=0;
    while(Risposta1!='A'&&Risposta1!='a'&&Risposta1!='b'&&Risposta1!='C'&&Risposta1!='c'&&Risposta1!='D'&&Risposta1!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta1);
    }
    if(Risposta1=='C'||Risposta1=='c')
    {
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }
        
    else
        printf("Sbagliato!, la risposta corretta e' la C\n");
    printf("2)Quale dispositivo e' utilizzato per memorizzare dati in modo permanente? \nA) SSD \nB) CPU \nC) RAM \nD) GPU\n");
    scanf(" %c", &Risposta2);
    while(Risposta2!='A'&&Risposta2!='a'&&Risposta2!='b'&&Risposta2!='C'&&Risposta2!='c'&&Risposta2!='D'&&Risposta2!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta2);
    }
    if(Risposta2=='A'||Risposta2=='a')
    {
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }
    else
        printf("Sbagliato!, la risposta corretta e' la A\n");
    printf("3)Quale protocollo di sicurezza e' comunemente usato per proteggere le comunicazioni su Internet? \nA) HTTP \nB) HTTPS \nC) SMTPS \nD) SFTP\n");
    scanf(" %c", &Risposta3);
    while(Risposta3!='A'&&Risposta3!='a'&&Risposta3!='b'&&Risposta3!='C'&&Risposta3!='c'&&Risposta3!='D'&&Risposta3!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta3);
    }
    if(Risposta3=='B'||Risposta3=='b')
	{
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }
    else
        printf("Sbagliato!, la risposta corretta e' la B\n");
    printf("4)Qual e' il linguaggio di markup standard per i documenti creati per essere visualizzati in un browser web? \nA) HTML \nB) XML \nC) JSON \nD) PHP\n");
    scanf(" %c", &Risposta4);
    while(Risposta4!='A'&&Risposta4!='a'&&Risposta4!='b'&&Risposta4!='C'&&Risposta4!='c'&&Risposta4!='D'&&Risposta4!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta4);
    }
    if(Risposta4=='A'||Risposta4=='a')
	{
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }
    else
        printf("Sbagliato!, la risposta corretta e' la A\n");
    printf("5)Che cos'e' un bug nel contesto dell'informatica? \nA) Un easter egg nascosto nel codice \nB) Un tipo di virus informatico \nC) Un componente hardware difettoso \nD) Un errore nel software\n");
    scanf(" %c", &Risposta5);
    while(Risposta5!='A'&&Risposta5!='a'&&Risposta5!='b'&&Risposta5!='C'&&Risposta5!='c'&&Risposta5!='D'&&Risposta5!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta5);
    }
    if(Risposta5=='D'||Risposta5=='d')
	{
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }
    else
        printf("Sbagliato!, la risposta corretta e' la D\n");
    printf("6)Qual e' il principale linguaggio di scripting utilizzato per la creazione di siti web dinamici? \nA) Java \nB) C# \nC) JavaScript \nD) Python\n");
    scanf(" %c", &Risposta6);
    while(Risposta6!='A'&&Risposta6!='a'&&Risposta6!='b'&&Risposta6!='C'&&Risposta6!='c'&&Risposta6!='D'&&Risposta6!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta6);
    }
    if(Risposta6=='C'||Risposta6=='c')
	{
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }
    else
        printf("Sbagliato!, la risposta corretta e' la C\n");
    printf("7)Quale tra questi NON e' un sistema operativo? \nA) Linux \nB) Java \nC) macOS \nD) Windows\n");
    scanf(" %c", &Risposta7);
    while(Risposta7!='A'&&Risposta7!='a'&&Risposta7!='b'&&Risposta7!='C'&&Risposta7!='c'&&Risposta7!='D'&&Risposta7!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta7);
    }
    if(Risposta7=='B'||Risposta7=='b')
	{
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }
    else
        printf("Sbagliato!, la risposta corretta e' la B\n");
    printf("8)Che cos'e' un firewall? \nA) Un tipo di malware \nB) Un dispositivo di rete \nC) Una barriera di sicurezza nella rete \nD) Un software di editing foto\n");
    scanf(" %c", &Risposta8);
    while(Risposta8!='A'&&Risposta8!='a'&&Risposta8!='b'&&Risposta8!='C'&&Risposta8!='c'&&Risposta8!='D'&&Risposta8!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta8);
    }
    if(Risposta8=='C'||Risposta8=='c')
	{
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }
    else
        printf("Sbagliato!, la risposta corretta e' la C\n");
	printf("9)Quale tra questi NON e' un linguaggio di programmazione? \nA) HTML \nB) Python \nC) Java \nD) C++\n");
	scanf(" %c", &Risposta9);
	while(Risposta9!='A'&&Risposta9!='a'&&Risposta9!='b'&&Risposta9!='C'&&Risposta9!='c'&&Risposta9!='D'&&Risposta9!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta9);
    }
    if(Risposta9=='A'||Risposta9=='a')
	{
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }
    else
        printf("Sbagliato!, la risposta corretta e' la A\n");
    printf("10)Che cos'e' un array nella programmazione? \nA) Una collezione di elementi di diversi tipi \nB) Un operatore logico \nC) Un tipo di ciclo \nD) Una collezione di elementi dello stesso tipo\n");
    scanf(" %c", &Risposta10);
    while(Risposta10!='A'&&Risposta10!='a'&&Risposta10!='b'&&Risposta10!='C'&&Risposta10!='c'&&Risposta10!='D'&&Risposta10!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta10);
    }
    if(Risposta10=='D'||Risposta10=='d')
	{
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }	
    else
        printf("Sbagliato!, la risposta corretta e' la D\n");
    printf("11)Qual e' il nome del processo di rimozione di errori dal codice? \nA) Compiling \nB) Executing \nC) Debugging \nD) Scripting\n");
    scanf(" %c", &Risposta11);
    while(Risposta11!='A'&&Risposta11!='a'&&Risposta11!='b'&&Risposta11!='C'&&Risposta11!='c'&&Risposta11!='D'&&Risposta11!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta11);
    }
    if(Risposta11=='C'||Risposta11=='c')
	{
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }	
    else
        printf("Sbagliato!, la risposta corretta e' la C\n");
    printf("12)Qual e' il principale vantaggio dell'utilizzo di algoritmi di ordinamento efficienti? \nA) Riduzione del tempo di esecuzione \nB) Miglioramento della sicurezza \nC) Riduzione dello spazio su disco \nD) Aumento della capacita' di memoria\n");
    scanf(" %c", &Risposta12);
    while(Risposta12!='A'&&Risposta12!='a'&&Risposta12!='b'&&Risposta12!='C'&&Risposta12!='c'&&Risposta2!='D'&&Risposta12!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta12);
    }
    if(Risposta12=='A'||Risposta12=='a')
	{
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }	
    else
        printf("Sbagliato!, la risposta corretta e' la A\n");
    printf("13)Che cos'e' un ciclo in programmazione? \nA) Un errore di sistema \nB) Un tipo di variabile \nC) Una funzione matematica \nD) Una struttura che ripete un insieme di istruzioni per N volte\n");
    scanf(" %c", &Risposta13);
    while(Risposta13!='A'&&Risposta13!='a'&&Risposta13!='b'&&Risposta13!='C'&&Risposta13!='c'&&Risposta13!='D'&&Risposta13!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta13);
    }
    if(Risposta13=='D'||Risposta13=='d')
	{
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }	
    else
        printf("Sbagliato!, la risposta corretta e' la D\n");
    printf("14)Quale tra questi e' un editor di codice open source? \nA) Sublime Text \nB) Visual Studio Code \nC) Adobe Dreamweaver \nD) Microsoft FrontPage\n");
    scanf(" %c", &Risposta14);
    while(Risposta14!='A'&&Risposta14!='a'&&Risposta14!='b'&&Risposta14!='C'&&Risposta14!='c'&&Risposta14!='D'&&Risposta14!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta14);
    }
    if(Risposta14=='B'||Risposta14=='b')
	{
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }	
    else
        printf("Sbagliato!, la risposta corretta e' la B\n");
    printf("15)Quale tra questi e' un linguaggio di programmazione ad alto livello? \nA) Assembly \nB) Machine Code \nC) Python \nD) Binary\n");
    scanf(" %c", &Risposta15);
    while(Risposta15!='A'&&Risposta15!='a'&&Risposta15!='b'&&Risposta15!='C'&&Risposta15!='c'&&Risposta15!='D'&&Risposta15!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta15);
    }
    if(Risposta15=='C'||Risposta15=='c')
	{
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }	
    else
        printf("Sbagliato!, la risposta corretta e' la C\n");
    printf("16)Che cos'e' un byte? \nA) Una unita' di misura della velocita' di trasmissione dati \nB) Una unita' di misura della capacita' di memoria \nC) Un tipo di errore di programmazione \nD) Un componente hardware\n");
	scanf(" %c", &Risposta16);
	while(Risposta16!='A'&&Risposta16!='a'&&Risposta16!='b'&&Risposta16!='C'&&Risposta16!='c'&&Risposta16!='D'&&Risposta16!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta16);
    }
    if(Risposta16=='B'||Risposta16=='b')
	{
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }	
    else
        printf("Sbagliato!, la risposta corretta e' la B\n");
    printf("17)Qual e' l'acronimo HTML? \nA) HyperText Markup Language \nB) Hyper Transfer Markup Language \nC) HyperText Markdown Language \nD) Hyper Transfer Markdown Language\n");
	scanf(" %c", &Risposta17);
	while(Risposta17!='A'&&Risposta17!='a'&&Risposta17!='b'&&Risposta17!='C'&&Risposta17!='c'&&Risposta17!='D'&&Risposta17!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta17);
    }
    if(Risposta17=='A'||Risposta17=='a')
	{
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }	
    else
        printf("Sbagliato!, la risposta corretta e' la A\n");
    printf("18)Qual e' l'acronimo di RAM? \nA) Rapid Action Memory \nB) Read Access Memory \nC) Random Allocation Memory \nD) Random Access Memory\n");
    scanf(" %c", &Risposta18);
    while(Risposta18!='A'&&Risposta18!='a'&&Risposta18!='b'&&Risposta18!='C'&&Risposta18!='c'&&Risposta18!='D'&&Risposta18!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta18);
    }
    if(Risposta18=='D'||Risposta18=='d')
	{
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }	
    else
        printf("Sbagliato!, la risposta corretta e' la D\n");
    printf("19)Qual e' il principale sistema operativo utilizzato nei server web? \nA) Windows \nB) iOS \nC) Android \nD) Linux\n");
    scanf(" %c", &Risposta19);
    while(Risposta19!='A'&&Risposta19!='a'&&Risposta19!='b'&&Risposta19!='C'&&Risposta19!='c'&&Risposta19!='D'&&Risposta19!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta19);
    }
	if(Risposta19=='D'||Risposta19=='d')
	{
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }	
    else
        printf("Sbagliato!, la risposta corretta e' la D\n");
    printf("20)Qual e' l'acronimo di WWW? \nA) World Wide Web \nB) Wide Web Window \nC) Web Window Wide \nD) World Web Window\n");
    scanf(" %c", &Risposta20);
    while(Risposta20!='A'&&Risposta20!='a'&&Risposta20!='b'&&Risposta20!='C'&&Risposta20!='c'&&Risposta2!='D'&&Risposta20!='d')
    {
    	color(12);
    	printf("ERROR la tua risposta non e' tra quelle selezionabili, riprova\n");
    	color(15);
    	scanf(" %c", &Risposta20);
    }
	if(Risposta20=='A'||Risposta20=='a')
	{
    	printf("Bravo!, la risposta e' corretta\n");
    	punteggio+=1;
    }	
    else
        printf("Sbagliato!, la risposta corretta e' la A\n");
	float risultato=punteggio/2;
    printf("Il voto finale e' %.2f", risultato);
	system("pause");
	game=0;
}

void cavalli(int game)
{
	printf("Benvenuto alla corsa dei cavalli!\n");
	printf("REGOLAMENTO: come prima cosa devi decidere quanto caricare il conto, poi devi decidere quanto puntare e poi devi scegliere il numero del cavallo su cui vuoi puntare tra i 7. Se riesci a prevedere quale sara' il cavallo che arrivera' prima vincerai il doppio dei soldi che hai puntato, se perderai verranno scalati i soldi dal conto.\n");
	printf("Ricorda 99 percento dei giocatori smette prima della grande vincita :)\n");
	float conto, puntare=0;
	printf("Decidi il tuo conto\n");
	scanf("%f", &conto);
	while(conto<0)
	{
		color(12);
		printf("ERROR la cifra e' minore di 0, riscrivilo\n");
		color(15);
		scanf("%f", &conto);
	}
	srand(time(NULL));
	while(conto>=0)
	{
		if(conto<=0)
		{
			printf("Hai perso tutti i soldi!\n");
			break;
		}		
		printf("conto = %.2f euro\n", conto);
		printf("Scrivi quanto vuoi puntare\n");
		scanf("%f", &puntare);
		while(puntare<0)
		{
			color(12);
			printf("ERROR la cifra e' minore di 0, riscrivilo\n");
			color(15);
			scanf("%f", &conto);
		}
		while(conto<puntare)
		{
			color(12);
			printf("ERROR la cifra che vuoi puntare e' maggiore dei soldi che hai sul conto, ripunta\n");
			color(15);
			scanf("%f", &puntare);
		}
		printf("Scegli uno dei 7 cavalli su cui vuoi puntare\n");
		int cavalloScelta;
		scanf("%d", &cavalloScelta);
		while(cavalloScelta<1||cavalloScelta>7)
		{
			color(12);
			printf("ERROR il numero del cavallo selezionato non e' tra quelli selezionabili, riprova\n");
			color(15);
			scanf("%d", &cavalloScelta);
		}
		int ncavallo[7]={0}, i, num, podio=0;
	    printf("Classifica:\n");
	    for(i=0; i<7; i++)
		{
			do{
				do {
	            num = rand() % 8; 
	        }while(ncavallo[num-1] == 1);
	        ncavallo[num-1] = 1;
			}while(num==0);
			if(i==0)
				podio=num;
	        printf("%d posto: cavallo numero %d\n", i+1, num);
	    }
	    if(podio==cavalloScelta)
	    {
	    	printf("Complimenti hai vinto!\n");
	    	conto+=puntare;
	    }
	    else
	    {
	    	printf("Mi dispiace hai perso!\n");
	    	conto-=puntare;
	    }
	}
	system("pause");
	game=0;
}

void impiccato(int game)
{
	printf("Benvenuto al gioco dell'impicato!\n");
	int tentativii, i;
    tentativii = 5;
    char *parole[] = {"casa", "cane", "gatto", "fiore", "sole", "luna", "stella", "mare", "cielo", "erba", "albero", "frutto", "libro", "penna", "foglio", "sedia", "tavolo", "porta", "finestra", "muro", "tetto", "strada", "piazza", "ponte", "fiume", "lago", "monte", "valle", "pioggia", "neve", "vento", "fuoco", "terra", "acqua", "aria", "vita", "amore", "tempo", "spazio", "mente", "cuore", "corpo", "suono", "luce", "ombra", "colore", "forma", "numero", "parola", "lettera", "gioco", "sport", "palla", "corsa", "salto", "grido", "risata", "sogno", "veglia", "giorno", "notte", "mattina", "sera", "pranzo", "cena", "colazione", "viaggio", "treno", "auto", "bici", "nave", "aereo", "bus", "mano", "piede", "testa", "braccio", "gamba", "dito", "occhio", "orecchio", "naso", "bocca", "dente", "lingua", "capello", "pelle", "sangue", "ossa", "muscolo", "cervello", "stomaco", "fegato", "rene", "polmone", "cuore", "vena", "arteria", "energia", "forza", "mente", "anima", "spirito", "destino", "fortuna", "speranza", "paura", "gioia", "tristezza", "rabbia", "calma", "pace", "guerra", "esercito", "soldato", "arma", "pace", "bandiera", "inno", "nazione", "regione", "citta", "paese", "villaggio", "confine", "mondo", "universo", "galassia", "pianeta", "saturno", "marte", "venere", "mercurio", "giove", "urano", "nettuno", "plutone", "cometa", "asteroide", "razzo", "navicella", "telescopio", "microscopio", "telefono", "radio", "televisione", "computer", "internet", "sito", "email", "chat", "social", "notizia", "giornale", "rivista", "libro", "biblioteca", "scuola", "lezione", "studente", "maestro", "professore", "esame", "voto", "diploma", "laurea", "lavoro", "ufficio", "collega", "capo", "salario", "denaro", "banca", "soldi", "prezzo", "costo", "sconto", "regalo", "festa", "compleanno", "natale", "pasqua", "vacanza", "albergo", "spiaggia", "montagna", "campagna", "cucina", "forno", "frigo", "piatto", "bicchiere", "posata", "cibo", "pasta", "pane", "pizza", "carne", "pesce", "verdura", "frutta", "dolce", "gelato", "caffe", "te", "latte", "acqua", "vino", "birra", "succo", "minerale", "bibita", "vestito", "scarpa", "cappello", "guanto", "sciarpa", "giacca", "pantaloni", "camicia", "maglia", "calzino", "mutanda"};
    srand(time(NULL));
	int np=rand() % 31;
    char *parola = parole[np];
    int l = strlen(parola);
    char indovina[l];
    for(i = 0; i < l; i++) {
        indovina[i] = '_';
        printf(" %c", indovina[i]);
    }
    printf("\n");
    
    while(tentativii > 0)
    {
        printf("Indovina una lettera: ");
        char lettera;
        scanf(" %c", &lettera);
        int corretto = 0;
        for(i = 0; i < l; i++)
        {
            if(parola[i] == lettera)
            {
                indovina[i] = lettera;
                corretto = 1;
            }
        }

        if(corretto == 0)
        {
            tentativii--;
            printf("Sbagliato! Hai ancora %d tentativi.\n", tentativii);
        }
        else
        {
            printf("Corretto! La parola e': ");
            for(i = 0; i < l; i++)
            {
                printf("%c ", indovina[i]);
            }
			printf("\n");
        } 
        int vinto = 1;
        for(i = 0; i < l; i++)
        {
            if(indovina[i] == '_')
            {
                vinto = 0;
            }
        }
        if(vinto == 1)
        {
            printf("Hai vinto!\n");
            fflush(stdin);
			system("pause");
			break;
        }
    }
    if(tentativii==0)
    {
    	printf("Hai perso! La parola era '%s'.\n", parola);
		system("pause");
		game=0;
	}
}

void mastermind(int game)
{
	int lunghezzasequenza = 4;
	int numtentativi = 10;
    int sequenza[lunghezzasequenza];
    int tentativo[lunghezzasequenza];
    int tentativi = 0, i, j, nu, controllo[nu];
    srand(time(NULL));
    for (i = 0; i < lunghezzasequenza; i++) 
	{
    	do {
        	nu = rand() % 10;
    	} while (controllo[nu]); 
		sequenza[i] = nu; 
    	controllo[nu] = 1; 
    }
    printf("Benvenuto a Mastermind!\n");
    printf("Indovina la sequenza di 4 numeri compresi tra 0 e 9 (compresi pure 0 e 9)\n");
    printf("Inserire la sequenza di numeri separata da spazi");
    printf("\nHai %d tentativi.", numtentativi);
    while (tentativi < numtentativi) {
        printf("\nTentativo %d/%d: ", tentativi + 1, numtentativi);
        for (i = 0; i < lunghezzasequenza; i++) {
            scanf("%d", &tentativo[i]);
        }

    int corretti_posizione = 0;
    int corrispondenza_numero = 0;

    for (i = 0; i < lunghezzasequenza; i++) {
        if (sequenza[i] == tentativo[i]) {
            corretti_posizione++;
        }
    }

    for (i = 0; i < lunghezzasequenza; i++) {
        for (j = 0; j < lunghezzasequenza; j++) {
            if (i != j && sequenza[i] == tentativo[j]) {
               corrispondenza_numero++;
            }
        }
    }
	if(corretti_posizione==lunghezzasequenza)
	{
		printf("Complimenti hai vinto!\n");
		fflush(stdin);
		system("pause");
		break;
	}
	else
	{
		printf("Risultato: %d corretti nella posizione e %d corretti ma nella posizione sbagliata.\n", corretti_posizione, corrispondenza_numero);
        tentativi++;

        if (tentativi >= numtentativi) {
            printf("Hai esaurito i tentativi. La sequenza era: ");
            for (i = 0; i < lunghezzasequenza; i++) {
                printf("%d ", sequenza[i]);
            }
            printf("\n");
			system("pause");
			break;
        }
    }
	}
}

void tris(int game)
{
	int i, j, t, x, y;
	bool gg;
    printf("Benvenuto al gioco del Tris!\nGIOCATORE 1 usa 1\nGIOCA0TORE 2 usa 2\n");
    int griglia[3][3];
    azzera_griglia(griglia);
    printf("\nGriglia vuota:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", griglia[i][j]);
        }
        printf("\n");
    }
    printf("Le righe e colonne partono da 0\n");
    for (t = 0; t < 5; t++) {
        printf("\nGIOCATORE 1");
        do {
            printf("\nInserisci la riga di x: ");
            scanf("%d", &x);
            printf("Inserisci la colonna di x: ");
            scanf("%d", &y);
            if (x < 0 || x > 2 || y < 0 || y > 2 || griglia[x][y] != 0) {
            	color(12);
                printf("ERROR Inserire un valore tra 0 e 2 e assicurarsi che la cella non sia già' occupata.\n");
                color(15);
            }
        } while (x < 0 || x > 2 || y < 0 || y > 2 || griglia[x][y] != 0);
        griglia[x][y] = 1;
        for (i = 0; i < 3; i++) {
            printf(" \n");
            for (j = 0; j < 3; j++) {
                printf("%d ", griglia[i][j]);
            }
        }
        if (griglia[0][0] == 1 && griglia[0][1] == 1 && griglia[0][2] == 1 ||
            griglia[1][0] == 1 && griglia[1][1] == 1 && griglia[1][2] == 1 ||
            griglia[2][0] == 1 && griglia[2][1] == 1 && griglia[2][2] == 1 ||
            griglia[0][0] == 1 && griglia[1][0] == 1 && griglia[2][0] == 1 ||
            griglia[0][1] == 1 && griglia[1][1] == 1 && griglia[2][1] == 1 ||
            griglia[0][2] == 1 && griglia[1][2] == 1 && griglia[2][2] == 1 ||
            griglia[0][0] == 1 && griglia[1][1] == 1 && griglia[2][2] == 1 ||
            griglia[0][2] == 1 && griglia[1][1] == 1 && griglia[2][0] == 1) {
            printf("\nGIOCATORE 1 HAI VINTO");
            fflush(stdin);
			system("pause");
			game=0;
			gg=true;
			break;
        }
        if (t == 4) {
            break;
        }
        printf("\nGIOCATORE 2");
        do {
            printf("\nInserisci la riga di x: ");
            scanf("%d", &x);
            printf("Inserisci la colonna di x: ");
            scanf("%d", &y);
            if (x < 0 || x > 2 || y < 0 || y > 2 || griglia[x][y] != 0) {
            	color(12);
                printf("ERRO inserire un valore tra 0 e 2 e assicurarsi che la cella non sia gia' occupata.\n");
                color(15);
            }
        } while (x < 0 || x > 2 || y < 0 || y > 2 || griglia[x][y] != 0);
        griglia[x][y] = 2;
        for (i = 0; i < 3; i++) {
            printf(" \n");
            for (j = 0; j < 3; j++) {
                printf("%d ", griglia[i][j]);
            }
        }
        if (griglia[0][0] == 2 && griglia[0][1] == 2 && griglia[0][2] == 2 ||
            griglia[1][0] == 2 && griglia[1][1] == 2 && griglia[1][2] == 2 ||
            griglia[2][0] == 2 && griglia[2][1] == 2 && griglia[2][2] == 2 ||
            griglia[0][0] == 2 && griglia[1][0] == 2 && griglia[2][0] == 2 ||
            griglia[0][1] == 2 && griglia[1][1] == 2 && griglia[2][1] == 2 ||
            griglia[0][2] == 2 && griglia[1][2] == 2 && griglia[2][2] == 2 ||
            griglia[0][0] == 2 && griglia[1][1] == 2 && griglia[2][2] == 2 ||
            griglia[0][2] == 2 && griglia[1][1] == 2 && griglia[2][0] == 2) {
            printf("\nGIOCATORE 2 HAI VINTO");
			fflush(stdin);
			system("pause");
			game=0;
			gg=true;			
        }
    }
    if(gg==false)
    {
    	printf("\nPAREGGIO TRA I 2 GIOCATORI");
		system("pause");
		game=0;
	}
}

void azzera_griglia(int griglia[][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            griglia[i][j] = 0;
        }
    }
}

void color(int x)
{
	HANDLE hCon;
	hCon=GetStdHandle (STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, x);
}

