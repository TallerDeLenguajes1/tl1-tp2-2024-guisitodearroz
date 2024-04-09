#include <stdio.h>
#include <stdlib.h>
char tipo[6]={"intel","AMD","Celeron"."Athlon" , "Core","Pentium"};

struct cpu
{
  int velocidad;
  int anio;
  int cantidad;
  char *tipo_cpu;  
}typedef Cpu;

int main(int argc, char const *argv[])
{
    int i;
    Cpu nuevoCpu[5];
    for ( i = 0; i =< 5; i++)
    {
        nuevoCpu->velocidad= 
        nuevoCpu->tipo_cpu[i]=tipo[i];
        
    }
    
    return 0;
}
