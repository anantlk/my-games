#include<stdio.h>
#include"design.c"
#include<time.h>

int play()
{
   while(1)
   {
      void main();
      system("cls");
   printf("\n*******************************************************************************\n\n");
   printf("                                  15 PUZZLE GAME\n\n");
   printf("*******************************************************************************\n\n\n\n\n");
   printf("\t\t\t\t>> PLAY GAME\n\n");
   printf("\t\t\t\t  EXIT\n\n");
   char ch;
   ch=getch();
   if(ch==13)
      return 1;
   ch=getch();

   if(ch==80)
   {
      system("cls");
   printf("\n\n*******************************************************************************\n\n");
   printf("                                  15 PUZZLE GAME\n\n");
   printf("*******************************************************************************\n\n\n\n\n");
   printf("\t\t\t\t PLAY GAME\n\n");
   printf("\t\t\t\t>> EXIT\n\n");
   ch=getch();
   if(ch==13)
      exit(0);
   ch=getch();
   if(ch==72)
      {
       continue;
      }
   }
   }
}

int check(int a[4][4])
{
   int b[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
   int i,j;
   for(i=0;i<4;i++)
   {
      for(j=0;j<4;j++)
      {
         if(a[i][j]!=b[i][j])
            return 0;
      }
   }
   return 1;
}
void main()
{
   int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}},i,j,t,r,c;
   char ch;
   t=play();
   srand(time(NULL));
   for(i=0;i<4;i++)
   {
      for(j=0;j<4;j++)
      {
         t=a[i][j];
         int row=rand()%4;
         int col=rand()%4;
         a[i][j]=a[row][col];
         a[row][col]=t;
      }
   }
   for(i=0;i<4;i++)
   {
      for(j=0;j<4;j++)
      {
         if(a[i][j]==0)
         {
            r=i;
            c=j;
         }
      }
   }
   design(a);
  while(1)
   {
      ch=getch();
      if((ch==80 || ch=='s' || ch=='S') && r!=0)             //move  down
      {
         t=a[r-1][c];
         a[r-1][c]=a[r][c];
         a[r][c]=t;
         r--;
         }
      else if((ch==72 || ch=='w' || ch=='W') && r!=3)                      //move up
      {
         t=a[r+1][c];
         a[r+1][c]=a[r][c];
         a[r][c]=t;
         r++;
      }
      else if((ch==77 || ch=='d' || ch=='D') && c!=0)                //move right
      {
         t=a[r][c-1];
         a[r][c-1]=a[r][c];
         a[r][c]=t;
         c--;
      }
      else if(((ch=='a' || ch=='A') || ch==75) && c!=3)   //move left
      {
         t=a[r][c+1];
         a[r][c+1]=a[r][c];
         a[r][c]=t;
         c++;
      }
      else if(ch=='\033')
         break;
      else
         continue;
      system("cls");
     design(a);
     if(check(a)==1)
     {
        printf("\n\n\t\t\t\t    Win!!\n");
        break;
     }
   }
   ch=getch();
}

