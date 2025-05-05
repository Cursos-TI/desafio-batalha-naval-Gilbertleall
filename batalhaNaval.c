#include <stdio.h>


int main(){
int tabuleiro [10][10];
int naviohorizontal [3][3] = {3,3,3};
int naviovertical [3][3] = {3,3,3};
//---------------//
int linhah = 2;
int colunah = 4;
int linhav = 3;
int colunav = 6;
int diagonal = 2;

for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++)
    {  
     tabuleiro[i][j] = 0;    
    }
    
}
 

for (int i = 0; i < 3; i++)
{
    tabuleiro[linhah][colunah + i] = 3;
}
for (int i = 0; i < 3; i++)
{
    tabuleiro[linhav + i][colunav] = 3;
}

for (int i = 0; i < 3; i++){
      tabuleiro[9-i][i] = 3;
}
for (int i = 0; i < 3; i++){
    tabuleiro[i][9-i] = 3;
}


printf("tabuleiro\n");
for (int i = 0; i < 10; i++){
   for (int j = 0; j < 10; j++)
   {
    printf("%d ", tabuleiro[i][j]);
   }
   printf("\n");
}



}