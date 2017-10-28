#include<stdio.h>
#include<math.h>
#include<time.h>
#include"r_shift.c"
#include"l_shift.c"
#include"up_shift.c"
#include"d_shift.c"
#include"design.c"

int sum=0;
static int flag=0,milestone=0;
void shuffle(int a[4][4])
{
   int r,c,i,j,t;
   for(i=0;i<4;i++)
   {
      for(j=0;j<4;j++)
      {
      r=rand()%3;
      c=rand()%3;
      t=a[i][j];
      a[i][j]=a[r][c];
      a[r][c]=t;
      }
   }
}
void generate(int a[4][4])
{
   srand(time(NULL));
   int random[16][2],r=0,k,n,c=0,d[2]={2,4},i,j;
   for(i=0;i<4;i++)
   {
      for(j=0;j<4;j++)
      {
         c=0;
         if(a[i][j]==0)
         {
            random[r][c]=i;
            random[r][c+1]=j;
            r++;
         }
      }
   }
   if(r==1)
      k=r-1;
   else
      k=rand()%(r-1);
   n=rand()%2;
   a[random[k][c]][random[k][c+1]]=d[n];
}
void print(int a[4][4])
{
   system("cls");
   int i,j,f=0;
   for(i=0;i<4;i++)
   {
      for(j=0;j<4;j++)
      {
         if(a[i][j]==2048)
            {
               flag=1;
               milestone=2048;
            }
         else if(a[i][j]==4096)
         {
            flag=2;
            milestone=4096;
         }
         else if(a[i][j]==8192)
            {
               flag=3;
               milestone=8192;
            }
         else
            continue;
      }
   }
   printf("\n\n\t\t\t\t        SCORE=%d",sum);
   printf("\n\n\n");
   for(i=0;i<4;i++)
   {
      printf("\t\t\t\t");
      for(j=0;j<4;j++)
      {
         printf("----- ");
      }
      printf("\n\t\t\t       ");
      for(j=0;j<4;j++)
      {
         if(a[i][j]==0)
         {
            f=1;
            printf("|     ");
         }
         else
         {
            if(a[i][j]<10)
               printf("|  %d  ",a[i][j]);
            else if(a[i][j]>=10 && a[i][j]<100)
               printf("| %d  ",a[i][j]);
            else if(a[i][j]>=100 && a[i][j]<1000)
               printf("| %d ",a[i][j]);
            else if(a[i][j]>=1000 && a[i][j]<10000)
               printf("|%d ",a[i][j]);
            else if(a[i][j]>=10000 && a[i][j]<100000)
               printf("|%d",a[i][j]);
         }
      }
      printf("|");
      printf("\n");
   }
   printf("\t\t\t\t----- ----- ----- -----\n\n\n");
   if(flag==1|| flag==2 || flag==3)
      {
         printf("\t\t\t   YOU HAVE REACHED THE MILESTONE %d: %d\n\n",flag,milestone);
      }
   else
         printf("\n");
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
         if(a[i][j]==a[i][j+1] || a[i][j]==a[i+1][j])
         {
            f=1;
            break;
         }
      }
      if(f==1)
         break;
   }
   for(j=0;j<3;j++)
   {
      if(a[3][j]==a[3][j+1])
      {
         f=1;
         break;
      }
   }
   char ch;
   if(f==0)
   {
      printf("\t\t\t\t       GAME OVER!!!\n");
      ch=getch();
      system("cls");
      if(ch==13 || ch!=13)
      printf("\n\n\n\n\n\n\n\t\t\t\t    SCORE=%d\n\n\n\n\n\n\n",sum);
      getch();
      getch();
      design();
   }
}
void playgame()
{
   system("cls");
   int k=0,f=0,a[4][4]={{2,0,0,0},{0,0,0,0},{0,0,0,0},{0,2,0,0}},i,j;
   char ch;
   sum=0;
   srand(time(NULL));
   shuffle(a);
   print(a);
   while(1)
   {
      k=0;
   ch=getch();
   if(ch==77|| ch=='d' || ch=='D')
   {
      system("cls");
      for(i=0;i<4;i++)
      {
      f=r_shift(a[i],&sum);
      if(f==1)
        k=1;
      }
      if(k==1)
      generate(a);
      print(a);
   }
   else if(ch==75 || ch=='a' || ch=='A')
   {
      system("cls");
      for(i=0;i<4;i++)
      {
         f=l_shift(a[i],&sum);
         if(f==1)
            k=1;
      }
      if(k==1)
      generate(a);
      print(a);
   }
   else if(ch==80 || ch=='s' || ch=='S')
   {
      system("cls");
      f=d_shift(a,&sum);
      if(f==1)
      generate(a);
      print(a);
   }
   else if(ch==72 || ch=='w' || ch=='W')
   {
      system("cls");
      f=up_shift(a,&sum);
      if(f==1)
      generate(a);
      print(a);
   }
   else
      continue;
   }
}
void main()
{
   design();
   playgame();
}
