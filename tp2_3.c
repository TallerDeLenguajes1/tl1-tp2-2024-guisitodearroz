#include <stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    #define N 5
    #define M 7
    int i,j;
    int mt[N][M], *pMt;
    pMt=&mt[0][0];
    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            *(pMt+(i*2+j))=1+rand()%100;
            printf("%d ", *(pMt+(i*2+j)));
            }
            printf("\n");
    return 0;
}
}