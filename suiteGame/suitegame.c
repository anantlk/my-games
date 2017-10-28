#include<stdio.h>
#include<stdlib.h>
#include"game1.c"
#include"game2.c"

void main()
{
   char ch;
   while(1)
   {
      system("cls");
   int n;
   printf("================================================================================");
   printf("\n\t\t\t         My Games\n");
   printf("\n================================================================================\n\n\n");
   printf("\n\n\t\t\t\t1.15 Puzzle\n\t\t\t\t2.7 Up/Down\n\t\t\t\t3.Exit\n\n");
   printf("\n\nEnter the choice:");
   scanf("%d",&n);
   if(n==1)
      puzzle();
   if (n==2)
     up();
   if(n==3)
      exit(0);
   }
   ch=getch();
}
