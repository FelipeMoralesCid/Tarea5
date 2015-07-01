#include <stdio.h>
#include <string.h>

int main()
{

  
  int largo,cont,pot=0,pan,i;
  char palabra[30],control[]="A";
  printf("\nescriba la palabra que desee para avanzar\n");
  gets(palabra);
  largo=strlen(palabra);
  strupr(palabra);

for (cont = 0; cont < largo+1; ++cont)
{
  palabra[cont]=palabra[cont]-control[0];

}
if (palabra[0]>13)
{
  i=(palabra[0]-13)*2;
  pot=palabra[0]-i;
}
else{

pot=palabra[0];

}


for (cont = 0; cont < largo-1; ++cont)
{
    pan=0;
    pan=palabra[cont]-palabra[cont+1];
    if (-13<pan && pan<12){

        if (palabra[cont+1]>palabra[cont]){
        pot=pot + (palabra[cont+1]-palabra[cont]);
        

        }
        else{

        pot= pot +palabra[cont]- palabra[cont+1];
          
        }
    }
    else if(pan>=13){
        pot=pot-(palabra[cont]-palabra[cont+1]-26);

          
    }
    else{

        palabra[cont]=palabra[cont]+26;
        pot=pot+palabra[cont]-palabra[cont+1];
        
    }


}
printf("El total recorrido es de %d espacios.\n",pot);





return 0;
}
