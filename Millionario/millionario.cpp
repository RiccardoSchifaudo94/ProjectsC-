#include <cstdlib>
#include <iostream>
#include <math.h>
#include <time.h>
#include <string>
using namespace std;
int esatta,a,b,c,d;
string e,f;
char risposta;
void pubblico()//aiuto del pubblico
{          
          
    cout<<"HAI CHIESTO L'AIUTO DEL PUBBLICO, ECCO I RISULTATI:"<<endl<<endl;
    cout<<"RISPOSTA 1: "<<a<<"%           RISPOSTA 2: "<<b<<"%"<<endl;
    cout<<"RISPOSTA 3: "<<c<<"%           RISPOSTA 4: "<<d<<"%"<<endl<<endl;
}
void dimezza()//50 e 50
{
cout<<"ORA IL NOSTRO COMPUTER ELIMINERA' 2 RISPOSTE, LASCIANDO SOLO QUELLA CORRETTA"<<endl;
cout<<" ED UNA SBAGLIATA."<<endl<<endl;
cout<<e<<                                      "                      "<<f<<endl<<endl;
}
//DOMANDE DA 50 EURO
void funzione1()
{

cout<<"Quale giorno e' considerato festa della repubblica italiana?"<<endl<<endl;
cout<<"1)1 MAGGIO                                   2)2 GIUGNO"<<endl;
cout<<"3)8 SETTEMBRE                                4)25 DICEMBRE"<<endl<<endl;
esatta=2;
a=3; b=90;c=4;d=3;e="2)2 GIUGNO";f="3)8 SETTEMBRE";
     }

  void funzione2()
  { 
       cout<<"Quale e' la capitale della Germania?"<<endl<<endl;
  cout<<"1)BERLINO                                  2)PARIGI"<<endl;
  cout<<"3)VIENNA                                   4)PRAGA"<<endl<<endl;
  esatta=1;
  a=94;b=2;c=1;d=3;e="1)BERLINO";f="3)VIENNA";
}
void funzione3()
{cout<<"Dove si sono svolti i giochi olimpici del 2012?"<<endl<<endl;
cout<<"1)PARIGI                                     2)ROMA"<<endl;
cout<<"3)LONDRA                                     4)WASHINGTON"<<endl<<endl;
esatta=3;
a=4;b=3;c=85;d=8;e="1)PARIGI";f="3)LONDRA";
}
void funzione4()
{
cout<<"Dove si svolgeranno i mondiali di calcio del 2014?"<<endl<<endl;
cout<<"1)BRASILE                                    2)SPAGNA"<<endl;
cout<<"3)RUSSIA                                     4)ITALIA"<<endl;
esatta=1;
a=80;b=5;c=7;d=8;e="1)BRASILE";f="4)ITALIA";
     }   
    void funzione5()
    { cout<<"Chi e' stato il primo presidente degli Stati Uniti d'America?"<<endl<<endl;
cout<<"1)THEODORE ROOSVELT                          2)GEORGE WASHINGTON"<<endl;
cout<<"3)BARACK OBAMA                               4)GEORGE W. BUSH"<<endl<<endl;   
esatta=2; 
a=10;b=75;c=5;d=10;e="1)THEODORE ROOSVELT";f="2)GEORGE WASHINGTON";
}
void funzione6()
{cout<<"Quale giorno e' considerato festa nazionale in Francia?"<<endl;
cout<<"1)12 GENNAIO                                 2)8 MARZO"<<endl;
cout<<"3)25 APRILE                                  4)14 LUGLIO"<<endl<<endl;
esatta=4;
a=4;b=7;c=8;d=81;e="2)8 MARZO";f="4)14 LUGLIO";
}
void funzione7()
{cout<<"Quale fra queste pietanze e' tipica del Piemonte?"<<endl;
cout<<"1)BAGNA CAUDA                                2)CASSATA"<<endl;
cout<<"3)MILLEFOGLIE                                4)BUCATINI"<<endl<<endl;
esatta=1;
a=95;b=0;c=3;d=2;e="1)BAGNA CAUDA";f="3)MILLEFOGLIE";

}
//DOMANDE DA 100 EURO
void domanda1()
{cout<<"In che squadra gioca Mario Balotelli?"<<endl;
cout<<"1)LAZIO                                      2)JUVENTUS"<<endl;
cout<<"3)MILAN                                      4)FIORENTINA"<<endl<<endl;
esatta=3;
a=3;b=1;c=90;d=6;e="2)JUVENTUS";f="3)MILAN";
}
void domanda2()
{cout<<"Chi e' l'attuale presidente del consiglio dei ministri?"<<endl<<endl;
cout<<"1)ENRICO LETTA                               2)SILVIO BERLUSCONI"<<endl;
cout<<"3)PIERLUIGI BERSANI                          4)NICOLE MINETTI"<<endl<<endl;
esatta=1;
a=80;b=12;c=5;d=3;e="1)ENRICO LETTA";f="2)SILVIO BERLUSCONI";
}
void domanda3()
{cout<<"Quanti lati ha un pentagono?"<<endl<<endl;
cout<<"1)DUE                                        2)TRE"<<endl;
cout<<"3)QUATTRO                                    4)CINQUE"<<endl<<endl;
esatta=4;
a=2;b=2;c=4;d=92;e="3)QUATTRO";f="4)CINQUE";
}
void domanda4()
{cout<<"quale fra questi attori ha interpretato James Bond nel film 007?"<<endl<<endl;
cout<<"1)SEAN CONNERY                               2)ROBBIE WILLIAMS"<<endl;
cout<<"3)ARNOLD SCHWARZENEGGER                      4)BRAD PITT"<<endl<<endl;
esatta=1;
a=87;b=3;c=8;d=2;e="1)SEAN CONNERY";f="3)ARNOLD SCHWARZENEGGER";
}
void domanda5()
{cout<<"Chi canta ''la isla bonita''?"<<endl<<endl;
cout<<"1)BRITNEY SPEARS                             2)MADONNA"<<endl;
cout<<"3)KATY PERRY                                 4)LAURA PAUSINI"<<endl<<endl;
esatta=2;
a=4;b=86;c=4;d=6;e="2)MADONNA";f="3)KATY PERRY";
}
//DOMANDE DA 200 EURO
void questione1()
{
cout<<"In che anni si svolse la prima guerra mondiale?"<<endl<<endl;
cout<<"1)1779-1793                                  2)1840-1860"<<endl;
cout<<"3)1914-1918                                  4)1939-1945"<<endl<<endl;
esatta=3;
a=5;b=7;c=73;d=15;e="2)1840-1860";f="3)1914-1918";
}
void questione2()
{
cout<<"Chi scrisse ''La divina commedia''?"<<endl<<endl;
cout<<"1)GIOVANNI BOCCACCIO                         2)DANTE ALIGHIERI"<<endl;
cout<<"3)FRANCESCO PETRARCA                         4)TORQUATO TASSO"<<endl<<endl;
esatta=2;
a=3;b=91;c=5;d=1;e="2)DANTE ALIGHIERI";f="3)FRANCESCO PETRARCA";
}
void questione3()
{
cout<<"Chi scrisse ''Il Decameron''?"<<endl<<endl;
cout<<"1)GIOVANNI BOCCACCIO                         2)GIORGIO FALETTI"<<endl;
cout<<"3)FRANCESCO PETRARCA                         4)GIACOMO LEOPARDI"<<endl<<endl;
esatta=1;
a=80;b=1;c=12;d=7;e="1)GIOVANNI BOCCACCIO";f="2)GIORGIO FALETTI";
}
//DOMANDE DA 300 EURO
void richiesta1()
{
cout<<"Qual e' la capitale della Spagna?"<<endl<<endl;
cout<<"1)BARCELLONA                                 2)SIVIGLIA"<<endl;
cout<<"3)MADRID                                     4)VALENCIA"<<endl<<endl;
esatta=3;
a=18;b=3;c=77;d=2;e="2)SIVIGLIA";f="3)MADRID";
}
void richiesta2()
{
cout<<"Da quali colori e' formata la bandiera della Francia?"<<endl<<endl;
cout<<"1)BIANCO,VERDE E ROSSO                       2)GIALLO E NERO"<<endl;
cout<<"3)ROSSO E BIANCO                             4)BLU,BIANCO E ROSSO"<<endl<<endl;
esatta=4;
a=10;b=7;c=6;d=77;e="2)GIALLO E NERO";f="4)BLU,BIANCO E ROSSO";
}
void richiesta3()
{
cout<<"Quale tra questi vini e' piemontese?"<<endl<<endl;
cout<<"1)MARSALA                                    2)MONTEPULCIANO"<<endl;
cout<<"3)BAROLO                                     4)FRANCIACORTA"<<endl<<endl;
esatta=3;
a=1;b=4;c=85;d=10;e="3)BAROLO";f="4)FRANCIACORTA";
}
//DOMANDE DA 500 EURO


int main(int argc, char *argv[])

   {
            string nome;
            char selezione;
   cout<<"Inserisci il tuo nome"<<endl;
   cin>>nome;
   cout<<"CIAO "<<nome<<",";
     cout<<"BENVENUTO A CHI VUOL ESSERE MILIONARIO!!!SEI PRONTO PER DARE LA SCALATA AL MILIONE?"<<endl;
                 system("PAUSE"); cout<<endl; 
                 //50 EURO
     cout<<"BENE PARTIAMO SUBITO CON LA PRIMA DOMANDA, VALE 50 EURO."<<endl<<endl;
   int risposta;
srand(time(NULL));
switch(rand() % 7) {
   case 0: funzione1(); break;
   case 1: funzione2(); break;
   case 2: funzione3(); break;
   case 3: funzione4(); break;
   case 4: funzione5(); break;
   case 5: funzione6(); break;
   case 6: funzione7(); break;
}

selezione:
cout<<"PREMI 1,2,3 O 4 PER RISPONDERE,5 PER ABBANDONARE IL GIOCO,"<<endl;
cout<<"6 PER L'AIUTO DEL PUBBLICO,7 PER IL 50/50 E 8 PER LA TELEFONATA A CASA"<<endl<<endl;
    
    
    
   cin>>risposta;
   cout<<endl<<endl;
   switch (risposta)
   {
          case 1: case 2: case 3: case 4:
   if (risposta==esatta)
   {
                   
                         
                         cout<<"RISPOSTA ESATTA!!!HAI APPENA VINTO 50 EURO!!!"<<endl<<endl;
                         system("COLOR F2");
                        }
                        else
                        {
                         
               cout<<"SONO COSTERNATO, MA LA RISPOSTA CHE HAI DATO NON E' QUELLA CORRETTA"<<endl;
               cout<<"DOVRAI TORNARE A CASA A MANI VUOTE,UN VERO PECCATO."<<endl<<endl;
               system("COLOR FC");
               
               }
                           break;
                           case 5: 
   cout<<"HAI DECISO DI FERMARTI, TU HAI QUALCHE PROBLEMA DI TESTA, HAI VINTO ZERO EURO!!!!"<<endl<<endl;
                         break;
                         case 6:
                              pubblico();
                              goto selezione;
                              break;
                              case 7:
                                   dimezza();
                                   goto selezione;
                                   break;
                                   case 8:
cout<<"Ciao "<<nome<<", sono Edoardo, e' un onore per me accorrere in tuo aiuto!!"<<endl;
cout<<"Sono sicuro che la risposta corretta sia la "<<esatta<<endl<<endl;
goto selezione;
                            break;
                            }
                            system("PAUSE");cout<<endl<<endl<<endl<<endl<<endl;
                            system("COLOR F");
                 //100 euro
cout<<"OTTIMO SIAMO ALLA DOMANDA NUMERO 2, CHE VALE 100 EURO."<<endl<<endl;
                           
    srand(time(NULL));
switch(rand() % 5) {
   case 0: domanda1(); break;
   case 1: domanda2(); break;
   case 2: domanda3(); break;
   case 3: domanda4(); break;
   case 4: domanda5(); break;
}
   seleziona:
   cout<<"PREMI 1,2,3 O 4 PER RISPONDERE,5 PER ABBANDONARE IL GIOCO,"<<endl;
cout<<"6 PER L'AIUTO DEL PUBBLICO,7 PER IL 50/50 E 8 PER LA TELEFONATA A CASA"<<endl<<endl;
cin>>risposta;
switch (risposta)
   {
          case 1: case 2: case 3: case 4:
   if (risposta==esatta)
   {
                   system("COLOR F2");
                         
                         cout<<"RISPOSTA ESATTA!!!HAI APPENA VINTO 100 EURO!!!"<<endl<<endl;
                         
                        }
                        else
                        {
                         system("COLOR FC");
               cout<<"SONO COSTERNATO, MA LA RISPOSTA CHE HAI DATO NON E' QUELLA CORRETTA"<<endl;
               cout<<"DOVRAI TORNARE A CASA A MANI VUOTE,UN VERO PECCATO."<<endl<<endl;
               }
                           break;
                           case 5: 
   cout<<"HAI DECISO DI FERMARTI, HAI PORTATO A CASA 50 EURO!!!!"<<endl<<endl;
                         break;
                         case 6:
                              pubblico();
                              goto seleziona;
                              break;
                              case 7:
                                   dimezza();
                                   goto seleziona;
                                   break;
                                   case 8:
cout<<"Ciao "<<nome<<", sono Edoardo, e' un onore per me accorrere in tuo aiuto!!"<<endl;
cout<<"Sono sicuro che la risposta corretta sia la "<<esatta<<endl<<endl;
goto seleziona;
break;
}
                          system("PAUSE");
                          system("COLOR F");
//200 euro
cout<<endl<<endl<<endl<<endl<<endl;
cout<<"ED ECCOCI ALLA DOMANDA NUMERO 3, VALE 200 EURO."<<endl<<endl;
 srand(time(NULL));
switch(rand() % 3) {
   case 0: questione1(); break;
   case 1: questione2(); break;
   case 2: questione3(); break;
}
char choose;
choose:
cout<<"PREMI 1,2,3 O 4 PER RISPONDERE,5 PER ABBANDONARE IL GIOCO,"<<endl;
cout<<"6 PER L'AIUTO DEL PUBBLICO,7 PER IL 50/50 E 8 PER LA TELEFONATA A CASA"<<endl<<endl;
cin>>risposta;
cout<<endl<<endl;
   switch (risposta)
   {
          case 1: case 2: case 3: case 4:
   if (risposta==esatta)
   {
                   
                         
                         cout<<"RISPOSTA ESATTA!!!SIAMO A QUOTA 200 EURO!!!CONGRATULAZIONI."<<endl<<endl;
                         system("COLOR F2");
                        }
                        else
                        {
                         
               cout<<"SONO COSTERNATO, MA LA RISPOSTA CHE HAI DATO NON E' QUELLA CORRETTA"<<endl;
               cout<<"DOVRAI TORNARE A CASA A MANI VUOTE,UN VERO PECCATO."<<endl<<endl;
               system("COLOR FC");
               
               }
                           break;
                           case 5:
cout<<"HAI DECISO DI FERMARTI, HAI VINTO 100 EURO!!!"<<endl;
                             break;
                             case 6:
                                  pubblico();
                                  goto choose;
                                  break;
                                  case 7:
                                       dimezza();
                                       goto choose;
                                       case 8:
cout<<"CIAO SONO STEFANO,SPERO DI POTERTI AIUTARE!!!"<<endl;
cout<<"VEDIAMO UN PO'...CREDO PROPRIO CHE LA RISPOSTA ESATTA SIA LA "<<esatta<<endl<<endl;
                              goto choose;
                                      break;
                                      
           }
            system("PAUSE");cout<<endl<<endl<<endl<<endl<<endl;
                          system("COLOR F");
cout<<"BENE, STAI ANDANDO ALLA GRANDE!!! SEI ALLA QUARTA DOMANDA, DEL VALORE DI 300 EURO."<<endl<<endl;
srand(time(NULL));
switch(rand() % 3) {
   case 0: richiesta1(); break;
   case 1: richiesta2(); break;
   case 2: richiesta3(); break;
}
char dilemma;
dilemma:
cout<<"PREMI 1,2,3 O 4 PER RISPONDERE,5 PER ABBANDONARE IL GIOCO,"<<endl;
cout<<"6 PER L'AIUTO DEL PUBBLICO,7 PER IL 50/50 E 8 PER LA TELEFONATA A CASA"<<endl<<endl;
cin>>risposta;
cout<<endl<<endl;
   switch (risposta)
   {
          case 1: case 2: case 3: case 4:
   if (risposta==esatta)
   {
                   
                         
               cout<<"RISPOSTA ESATTA!!!HAI APPENA VINTO 300 EURO, COMPLIMENTI!!!"<<endl<<endl;
                         system("COLOR F2");
                        }
                        else
                        {
                         
               cout<<"MI DISPIACE, MA LA RISPOSTA CHE HAI DATO NON E' QUELLA CORRETTA"<<endl;
               cout<<"DOVRAI TORNARE A CASA A MANI VUOTE,UN VERO PECCATO."<<endl<<endl;
               system("COLOR FC");
               
               }
                           break;
                           case 5:
               cout<<"BEH HAI DECISO DI FERMARTI,HAI VINTO 200 EURO!!!!"<<endl;
                          break;
                          case 6:
                               pubblico();
                               goto dilemma;
                               break;
                               case 7:
                                    dimezza();
                                    goto dilemma;
                                    break;
                                    case 8:
cout<<"CIAO "<<nome<<",SONO FILIPPO, SPERO DI POTERTI DARE UNA MANO!!!"<<endl;
cout<<"ALLORA, LA RISPOSTA ESATTA DOVREBBE ESSERE LA "<<esatta<<endl<<endl;
                        goto dilemma;
                        break;
                        }
    system("PAUSE");
    return EXIT_SUCCESS;
}

