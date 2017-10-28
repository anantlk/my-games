void design()
{
   int i;
   system("cls");
   char ch;
   while(1)
   {
      printf("\t\t   ------------------------------------------------\n");
      for(i=0;i<1;i++)
         printf("\t\t  |                                                |\n");
      printf("\t\t  |\t\t      2048\t\t           |\n");
      for(i=0;i<1;i++)
         printf("\t\t  |\t\t\t\t\t\t   |\n");
      printf("\t\t   ------------------------------------------------");
      printf("\n\n\n\n\n\n  \t\t\t\t  >>PLAY GAME");
      printf("\n\n\t\t\t\t    EXIT\n\n\n\n");
      ch=getch();
      system("cls");
      if(ch==13)
         playgame();
      else if(ch==80)
      {
        printf("\t\t   ------------------------------------------------\n");
      for(i=0;i<1;i++)
         printf("\t\t  |                                                |\n");
      printf("\t\t  |\t\t      2048\t\t           |\n");
      for(i=0;i<1;i++)
         printf("\t\t  |\t\t\t\t\t\t   |\n");
      printf("\t\t   ------------------------------------------------");
      printf("\n\n\n\n\n\n  \t\t\t\t    PLAY GAME");
      printf("\n\n\t\t\t\t  >>EXIT\n\n\n\n");
         ch=getch();
         if(ch==13)
            exit(0);
      }
         if(ch==72)
         {
            printf("\t\t   ------------------------------------------------\n");
      for(i=0;i<1;i++)
         printf("\t\t  |                                                |\n");
      printf("\t\t  |\t\t      2048\t\t           |\n");
      for(i=0;i<1;i++)
         printf("\t\t  |\t\t\t\t\t\t   |\n");
      printf("\t\t   ------------------------------------------------");
      printf("\n\n\n\n\n\n  \t\t\t\t  >>PLAY GAME");
      printf("\n\n\t\t\t\t    EXIT\n\n\n\n");
            ch=getch();
            system("cls");
            if(ch==13)
               playgame();
         }
   }
}
