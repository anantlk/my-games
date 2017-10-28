void design(int a[4][4])
{
   int i,j;
   system("cls");
   printf("\n*******************************************************************************\n");
   printf("\t\t\t\t  15 PUZZLE\n");
   printf("*******************************************************************************");
    printf("\n\n\n\n\n");
    for(i=0;i<4;i++)
    {
       printf("\t\t\t\t");
        for(j=0;j<4;j++)
        {
            printf(" --");
        }
        printf("\n");
        printf("\t\t\t\t");
        for(j=0;j<4;j++)
        {
           if(a[i][j]>0 && a[i][j]<=9)
            printf("|%d ",a[i][j]);
           else if(a[i][j]==0)
            printf("|  ");
           else
            printf("|%d",a[i][j]);
        }
        printf("|");
        printf("\n");
    }
    printf("\t\t\t\t");
    for(i=0;i<4;i++)
    {
        printf(" --");
    }
    printf("\n");
}

