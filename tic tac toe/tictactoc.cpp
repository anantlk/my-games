#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<stdio.h>
#include<time.h>

using namespace std;
COORD coord={0,0};

void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void MANUAL()
{
    char a;
    cout<<"\n\t\t\t   TIC TAC TOE MANUAL";
    cout<<"\n\n\n\n\n\t   1.We enter the position as we do in array\n\n\t   2.Welcome to the game\n\n\n\n\n\n\n\t\t\t\t\t\t-ANANT KAKRANIA";
    getch();
    system("cls");
}
void design()
{   gotoxy(30,0);
    cout<<"TIC TAC TOE\nO-player 1\nX-player 2";
gotoxy(30,4);
for(int i=0;i<10;i++)
    {cout<<"|"<<"\n";
    gotoxy(30,5+i);
    }
gotoxy(37,4);
for(int i=0;i<10;i++)
    {cout<<"|"<<"\n";
    gotoxy(37,5+i);
    }
gotoxy(22,7);
for(int i=0;i<26;i++)
    {cout<<"-";
    gotoxy(23+i,7);
    }
gotoxy(22,10);
for(int i=0;i<26;i++)
    {cout<<"-";
    gotoxy(23+i,10);
    }
gotoxy(0,20);
}
int draw(int a[3][3])
{
    int c=1;
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(a[i][j]==0)
                {
                    c=0;
                    break;
                }
            }
        }
return c;
}
int vertical(int a[3][3],int j)
{
    int c;
    for (int i=1;i<3;i++)
    {
        if (a[i][j]!=a[0][j])
        {
            c=0;
            break;

        }
        else
            c=a[0][j];
    }
    return c;
}
int horizontal(int a[3][3],int i)
{
    int c;
    for(int j=1;j<3;j++)
    {
        if(a[i][0]!=a[i][j])
        {
            c=0;
            break;
        }
        else
            c=a[i][0];
    }
    return c;
}
int diagonal(int a[3][3],int j)
{
    int c,d;
    d=j;
    for(int i=1;i<3;i++)
    {
        if(d==0)
            j=j+1;
        if(d==2)
        j=j-1;
        if(a[0][d]!=a[i][j])
        {
            c=0;
            break;
        }
        else
            c=a[0][d];

    }
    return c;

}
void tac(int a[3][3])
{
    int s=26,z=6,p=1;
 for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {   gotoxy(s+8*j,z);
           if(a[i][j]==1)
            cout<<"O";
           else if(a[i][j]==2)
            cout<<"X";
           else
            cout<<" ";
        }
        z=z+3;
    }
    gotoxy(0,20);
}
void tic(int a[3][3])
{       tac(a);
design();
        if (a[0][0]!=0)
        {
            if (vertical(a,0)!=0 || horizontal(a,0)!=0 || diagonal(a,0)!=0)
            {system("cls");
            gotoxy(35,10);
                cout<<"player "<<a[0][0]<<" wins!!";
                gotoxy(20,20);
                getch();
                exit(0);
            }
            else
                ;
        }
        else
            ;
        for(int i=0;i<3;i++)
        {
            if(a[i][0]!=0)
            {
                if (horizontal(a,i)!=0)
                {system("cls");
            gotoxy(35,10);
                    cout<<"player "<<a[i][0]<<" wins!!";
                    gotoxy(20,20);
                    getch();
                    exit(0);
                }
                else
                    continue;
            }
            else
                ;
        }
       for(int i=0;i<3;i++)
        {
            if (i==2)
            {
                if(diagonal(a,2)!=0 || vertical(a,2)!=0)
                {system("cls");
            gotoxy(35,10);
                    cout<<"player "<<a[0][i]<<" wins!!";
                    gotoxy(20,20);
                    getch();
                    exit(0);
                }
            }
            else{
            if(a[0][i]!=0)
            {
                if (vertical(a,i)!=0)
                {system("cls");
            gotoxy(35,10);
                    cout<<"player "<<a[0][i]<<" wins!!";
                    gotoxy(20,20);
                    getch();
                    exit(0);
                }
                else
                    continue;
            }
            else
                ;
            }
        }
}
int main()
{   system("cls");
MANUAL();
    design();
    int n,a[3][3];
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            a[i][j]=0;;
        }
    }
    int x,y;
    while(1)
    {
        cout<<"enter the position for player 1:";
        cin>>x;
        cin>>y;
        while(a[x][y]!=0)
        {system("cls");
        design();
        tac(a);
        cout<<"FILLED!! enter the position for player 1: ";
        cin>>x;
        cin>>y;
        system("cls");
        tic(a);
        }
            a[x][y]=1;
            if (draw(a)==1)
        {
            system("cls");
            gotoxy(35,10);
            cout<<"Match Draw!!";
            gotoxy(20,20);
            getch();
            exit(0);
        }
        else
            ;
            tic(a);
        system("cls");
        design();
        tac(a);
        cout<<"enter the position for player 2:";
        cin>>x;
        cin>>y;
        system("cls");
        tic(a);
        while(a[x][y]!=0)
        {
        system("cls");
        design();
        tac(a);
        cout<<"FILLED!! enter the position for player 2:";
        cin>>x;
        cin>>y;
        system("cls");
        }
        a[x][y]=2;
        if (draw(a)==1)
        {
            system("cls");
            gotoxy(35,10);
            cout<<"Match Draw!!";
            exit(0);
        }
        else
            ;
        tic(a);
    }
char choice;
choice=getch();
return 0;
}
