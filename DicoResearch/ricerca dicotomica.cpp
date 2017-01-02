#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int APP,INT,CONTA,RISERVA,NUM,J,MEM,I,TEST;
    int DATO=10;
    int V[DATO];
    APP=0;
    RISERVA=DATO;
    INT=0;
    I=0;
    J=0;
     cout<<"programma che caricati tot elementi:\n";
     cout<<"gli riordina in ordine crescente in un vettore;\n";
     cout<<"scelto un elemento presente nel vettore ne indica la sua posizione;\n";
     cout<<"\n";
     cout<<"caricare"<<" "<<DATO<<" "<<"elementi nel vettore\n";
     cout<<"\n";
    while(I<DATO) 
         {
          cout<<"caricare elemento numero"<<" "<<I<<"\n";       
          cin>>V[I];
          I++;
          }
     I=0;
     cout<<"\n";
     cout<<"riordino elementi nel vettore\n";
     
     while(I<DATO-1) 
           {
            J=I+1;
            while(J<DATO)
                 {
                  if(V[J]<V[I])
                    {
                     APP=V[I];
                     V[I]=V[J];
                     V[J]=APP;
                     }
                     J++;
                  }
               I++;
               }   
          I=0;                                 
          while(I<DATO)
               { 
                cout<<V[I]<<",";
                I++;
                }
     cout<<"\n";         
     cout<<"scegliere un elemento tra quelli presenti nel vettore\n";                
     
    APP=0;
    CONTA=0;
    INT=0;
    I=0;
    J=0; 
    while(TEST==0){
    cout<<"premere 0 per uscire\n";
    cout<<"premere 1 per effettuare la ricerca\n";
    cin>>TEST;
    switch(TEST){
    case 1:                            
    while(INT==0)
          {
           if(APP==0)
             {     
              cout<<"inserire l'elemento da ricercare\n";     
              cin>>NUM;
              APP=1;
              }
              if(NUM>=V[DATO])
                 {
                  CONTA=DATO;
                  while(CONTA<RISERVA)
                        {
                         if(NUM==V[CONTA])
                            {
                             MEM=CONTA;
                             CONTA=RISERVA;
                             INT=1;
                             }
                          
                             CONTA++;
                              if(CONTA==RISERVA)
                                {
                                 INT=1;
                                 J=1;
                                 }
                          }                                                            
                  }
              else
                  {
                   DATO=(DATO/2);
                                  
                                   
                   if(DATO==0)
                     {
                      INT=1;
                      J=1;
                      }        
                                   
                  }
           }
           cout<<"\n";
           if(J==0)
             {
              cout<<"l'elemento si trova alla posizione:"<<""<<MEM<<"\n";     
              }          
           else
              {
               cout<<"elemento non trovato\n";               
               }
           break;
           default:
           cout<<"richiesta non valida\n";
           } 
           }           
    system("PAUSE");
    return EXIT_SUCCESS;
}
