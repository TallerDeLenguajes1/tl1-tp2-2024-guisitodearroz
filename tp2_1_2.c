#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
     #define N 20
    int i;
    double vt[N],*pV;
    pV=vt;
    for(i = 0;i<N; i++)
    {
        *(pV+i)=1+rand()%100;
        //printf("%f ", vt[i]);
        printf("%f " ,*(pV+i));
        //gg
        }   
    return 0;
}
