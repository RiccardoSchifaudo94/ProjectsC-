#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    float CDT,R1,R2,RTOT,IT,I1,I2,E,Ri,Ru,VP,VTOT;
    int J,TEST,INT;
    string risposta;
    cout<<"Cosa vuoi che ti calcoli?\n";
    cout<<"premere 1:calcolo resistenze in serie\n";
    cout<<"premere 2:calcolo resistenze in parallelo\n";
    cout<<"premere 3:calcolo di una caduta di tensione\n";
    cout<<"premere 4:partitore di corrente\n";
    cout<<"premere 5:partitore di tensione\n";
    cout<<"premere 6:equazione alla maglia calcolo del f.e.m\n";
    cout<<"premere 0:per uscire dal programma!\n"; 
    INT=0;
    while(INT==0){
    cout<<"\n";              
    cout<<"selezionare un comando:";
    cin>>TEST;
    switch(TEST){
   
    case 0:
    INT=1;
    break;     
    
    
    case 1:
    cout<<"inserire R1:";
    cin>>R1;
    cout<<"inserire R2:";
    cin>>R2;
    cout<<"\n";
    RTOT=R1+R2;
    cout<<"la serie vale:"<<RTOT<<" " <<"Ohm\n";
    J=1;
    break;
    
    case 2:
    cout<<"inserire R1:";
    cin>>R1;
    cout<<"\n";
    cout<<"inserire R2:";
    cin>>R2;
    cout<<"\n";
    RTOT=((R1*R2)/(R1+R2));
    cout<<"il parallelo vale:"<<RTOT<<" "<<"Ohm\n"; 
    J=1;                      
    break;
    
    case 3:
    cout<<"inserire la corrente I totale entrante nel parallelo:";
    cin>>IT;
    cout<<"\n";
    cout<<"inserire la resistenza R1:";
    cin>>R1;
    cout<<"\n";
    cout<<"inserire la resistenza R2:"; 
    cin>>R2;
    cout<<"\n";
    cout<<"le resistenze sono in SERIE o in PARALLELO?\n";
    cin>>risposta;
    cout<<"\n";
    if(risposta=="SERIE"||risposta=="serie"){
    RTOT=R1+R2;
    CDT=(RTOT*IT);
    cout<<"la c.d.t della serie vale:"<<CDT<<" "<<"Volt\n";
    J=1;
    }
    else{
    RTOT=((R1*R2)/(R1+R2));
    CDT=(RTOT*IT);
    cout<<"la c.d.t del parallelo vale:"<<CDT<<" "<<"Volt\n";
    J=1;
    }
    break;     
      
    case 4:
    cout<<"inserire il valore di corrente I totale entrante nel parallelo:";
    cin>>IT;
    cout<<"\n";
    cout<<"(ATTENZIONE:nel caso vi sia un parallelo nel ramo calcolarlo a parte!)\n";
    cout<<"inserire il valore della resistenza totale del ramo1:";
    cin>>R1;
    cout<<"\n";
    cout<<"inserire il valore della resistenza totale del ramo2:";
    cin>>R2;
    cout<<"\n";
    cout<<"cosa vuoi che ti ricavi?\n";
    cout<<"la I1 entrante nel ramo 1 o la I2 entrante nel ramo 2 ?\n";
    cin>>risposta;
    cout<<"\n";
    if(risposta=="I1"||risposta=="i1"){
    I1=(IT*(R2/(R1+R2)));
    cout<<"la corrente I1 vale:"<<I1<<" "<<"Ampere\n";
    cout<<"\n2";
    }
    else{
    I2=(IT*(R1/(R1+R2))); 
    cout<<"la corrente I2 vale:"<<I2<<" "<<"Ampere\n";                                              
    }
    break;
    
                     
    default:
    cout<<"selezione non valida!\n";
    }        
}                          
   
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
