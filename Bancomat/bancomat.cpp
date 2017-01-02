#include <cstdlib>
#include <iostream>
#define CODICE 12345
float versa(float credito);
float preleva(float credito);
float controlla(float credito);
using namespace std;

int main(int argc, char *argv[])
{
    int const max=0;
    int pin;
    int i=3;
    int test;
    float conto=0;
    do
      {
       cout<<"tentativi a disposizione:"<<i<<endl;     
       cout<<"inserisci il pin:\n";
       cin>>pin;
       i--;
       }
    while(pin!=CODICE && i!=max);
    if(pin==CODICE)
       {
        do
          {            
           cout<<"fai le tue operazioni\n";
           cout<<"premi 1:versamento\n";
           cout<<"premi 2:preleva\n";
           cout<<"premi 3:controlla conto\n";
           cout<<"premi 0:termina operazioni\n";
           cin>>test;
           switch(test)
                 {
                  case 0:
                  cout<<"grazie e arrivederci!\n";     
                  break;          
                  case 1:
                        conto=versa(conto);
                  break;     
                  case 2:
                        conto=preleva(conto);
                  break;     
                  case 3:
                        conto=controlla(conto);
                  break;     
                  default:
                        cout<<"ATTENZIONE!scelta non valida!\n";
                  break;      
                  }                           
           
           }
           while(test!=0);
        }
    else    
        {
         cout<<"tessera ritirata!\n";
         }   
    system("PAUSE");
    return EXIT_SUCCESS;
}

float versa(float credito)
           {
            float soldi;
            cout<<"inserire importo:";
            cin>>soldi;
            credito=credito+soldi;
            return credito;
            }
            
float preleva(float credito)
            {
             float soldi;
             cout<<"preleva importo:";
             cin>>soldi;
             if(credito==0)
               {
                cout<<"ATTENZIONE:il tuo conto e' in rosso!NON PUOI PRELEVARE\n";
                }
             else 
                 {
                  if(soldi>credito)
                     {
                      cout<<"l'importo e'troppo elevato,ripetere operazione!\n";
                      }
                  else
                      {
                       credito=credito-soldi;
                       }
                  }                                                                                       
              return credito;
              }
 
 float controlla(float credito)
             {
              cout<<"sul conto corrente sono presenti euro:"<<credito<<endl;
              if(credito<=0)
              cout<<"il tuo conto e' in rosso!\n";
              }                          
