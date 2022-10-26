#include<stdio.h>
#include<string.h>
void Bord();
char board[]={'0','1','2','3','4','5','6','7','8','9'};
void Bord()
{
    printf("\n\n");
    printf("=== TIC TAC ===\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",board[1],board[2],board[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",board[4],board[5],board[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",board[7],board[8],board[9]);
    printf("     |     |     \n");
    printf("\n\n");
}
int main()
{ 
   int player=1,input;
   char marks;
   Bord();
   while(1)
{
   
    if(player%2==0)
    {
        player=2;
        marks='0';
    }
    else
    {
    player=1;
    marks='X';
    }
    printf("enter the player number %d \n",player);
    scanf("%d ",&input);
    if(input<1||input>9)
    {
        printf("invalid input");
    }
   
    board[input]=marks;
    player++;
      Bord();
}
    
}
