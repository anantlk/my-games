void up()
{
   char ch;
   system("cls");
   char name[20];
   int s=0;
   int i,amt,n;
   printf("================================================================================\n");
   printf("\t\t\t\t7 Up/Down\n\n");
   printf("================================================================================\n");
   printf("\t\t\t\tMANUAL\n\n\n\t1.YOU GET DOUBLE AMOUNT OF THE BET FOR WINNING BELOW 7 BET\n\t");
   printf("2.YOU GET TRIPLE AMOUNT OF THE BET FOR WINNING ABOVE 7 BET\n\t");
   printf("3.YOU GET FOUR TIMES THE AMOUNT OF THE BET FOR WINNING AT 7 BET\n\t");
   getch();
   system("cls");
   printf("\n\n\n\n\n\n\n\n\n\t\t\t\tENTER YOUR NAME:");
   scanf("%s",name);
   getch();
   while(1)
   {
   system("cls");
   printf("================================================================================\n");
   printf("\t\t\t\t7 Up/Down\n\n");
   printf("================================================================================\n\n\n");
   printf("\n\t\t\t\tENTER THE NUMBER: ");
   scanf("%d",&n);
   if(n>=2 && n<=13)
   {
   printf("\n\t\t\t\tENTER THE BET:");
   scanf("%d",&amt);
   srand(time(NULL));
   i=rand()%12+2;
   printf("\n\t\t\t\tTHE NUMBER IS:%d\n",i);
   if((i>7 && n<7) ||(i==7 && n!=7) ||(i<7 && n>7) || (n==7 && i!=7))
     {
        printf("\n\t\t\t\tLOSS of %d\n",amt);
        s=s-amt;
     }
   else if(i==7 && n==7)
   {
      amt=amt*4;
      printf("\n\t\t\t\tYOU GOT: %d\n",amt);
      s=s+amt;
   }
   else if(i<7 && n<7)
   {
      amt=amt*2;
      printf("\n\t\t\t\tYOU GOT :%d\n",amt);
      s=s+amt;
   }
   else
   {
      amt=amt*3;
      printf("\n\t\t\t\tYOU GOT :%d\n",amt);
      s=s+amt;
   }
   }
   else
      printf("\n\n\t\t\t\tINVALID NUMBER\n\n\n\n\n");
   printf("\n\n\nWANT TO BET AGAIN(y/n)??\n");
   ch=getch();
   if(ch=='y')
      continue;
   else
   {
      system("cls");
         printf("\n\n\n\n\n\n\n\n\n\t\t\t\t%s,you have :%d bucks\n\n\n\n\t\t\t\t\tThank You",name,s);
         getch();
         break;
   }
   }
}
