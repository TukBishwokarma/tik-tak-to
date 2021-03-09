#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int k=0,end=1;
char a[9]={'1','2','3','4','5','6','7','8','9'};
char O,X;
void name()
    {
        char name[50];
        printf("\n\t\t\t\t\tWELCOME TO TIC TAC TOE GAME");
        printf("\n------------------------------------------------------------------------------------------------------------------------");
        printf("\n'A' New game\n'B'level\n'C'game instruction and help\n");
        printf("player have option of0-9 only\nif any other key are press then not expect\n if any row,column and digonally are same i.e xxx or ooo\n");
        printf ("game over and win\n player 1 have first chance to input");
        printf("\n'D'score:" );
        printf("\nPlayer 1 plays as X");
        printf("\nEnter name of player 1:");
        gets(name);
        printf("\nPlayer 2 player as O");
        printf("\nEnter name of player 2:");
        gets(name);
    }




void draw()
{
printf("\n\t\t  %c|  %c|  %c|",a[0],a[1],a[2]);
printf("\n\t\t---|---|---");
printf("\n\t\t  %c|  %c|  %c|",a[3],a[4],a[5]);
printf("\n\t\t---|---|---");
printf("\n\t\t  %c|  %c|  %c|",a[6],a[7],a[8]);
}
void getInput(){
char ch ;
int i;
printf("\n\n\nenter the position(1-9):");
scanf("%c",&ch);
if(k==0){
for(i=0;i<=8;i++)

    {
        if(a[i]==ch){
                a[i]='X';
                k=1;
                 break;
                }}}
      else  {
            for(i=0;i<=8;i++)
    {
        if(a[i]==ch)
            {a[i]='O';
            k=0;
            break;
        }}}}
        int gameOver()
        {
        if      (a[0]=='X'&&a[1]=='X'&&a[2]=='X')return 1;
        else if (a[0]=='X'&&a[3]=='X'&&a[6]=='X')return 1;
        else if (a[0]=='X'&&a[4]=='X'&&a[8]=='X')return 1;
        else if (a[1]=='X'&&a[4]=='X'&&a[7]=='X')return 1;
        else if (a[2]=='X'&&a[5]=='X'&&a[8]=='X')return 1;
        else if (a[2]=='X'&&a[4]=='X'&&a[6]=='X')return 1;
        else if (a[3]=='X'&&a[4]=='X'&&a[5]=='X')return 1;
        else if (a[6]=='X'&&a[7]=='X'&&a[8]=='X')return 1;

        else if (a[0]=='O'&&a[1]=='O'&&a[2]=='O')return 2;
        else if (a[0]=='O'&&a[3]=='O'&&a[6]=='O')return 2;
        else if (a[0]=='O'&&a[4]=='O'&&a[8]=='O')return 2;
        else if (a[1]=='O'&&a[4]=='O'&&a[7]=='O')return 2;
        else if (a[2]=='O'&&a[5]=='O'&&a[8]=='O')return 2;
        else if (a[2]=='O'&&a[4]=='O'&&a[6]=='O')return 2;
        else if (a[3]=='O'&&a[4]=='O'&&a[5]=='O')return 2;
        else if (a[6]=='O'&&a[7]=='O'&&a[8]=='O')return 2;

        else return 3;
        }

        void final(){
        int var;
        var=gameOver();
        if(var==1){
            printf("\n Player 1 is the winner\n");
            end=0;
        }
        else if(var==2){
            printf("\n Player 2 is the winner\n");
        end=0;
        }

        else printf("");

        }

        void main(){
            char c;
             name();
            label:
            system("cls");
            draw ();
            while(end){
            getInput();
        system("cls"); //to remove previous cont. picture
        draw();
        final ();
        }
        printf("\nDo you want to play it again?\n");
        printf("\nIf yes! Press Y\n");
        fflush(stdin);
        scanf("%c",&c);
        if(c=='y'||c=='Y'){
            a[0]='1';a[1]='2';a[2]='3';a[3]='4';a[4]='5';a[5]='6';a[6]='7';a[7]='8';a[8]='9';
            k=0;end=1;
            goto label;

        }
        printf("\n\a Game over\a");
        getch();
        }


