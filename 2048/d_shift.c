int d_shift(int a[4][4],int *sum)
{
   int b[4],d[4],k=0,j,i,c=0,s=0,q[4][4],f=0;
   for(i=0;i<4;i++)
   {
      for(j=0;j<4;j++)
      {
         q[i][j]=a[i][j];
      }
   }
   for(i=0;i<4;i++)
   {
      c=0;
      s=0;
      k=0;
      for(j=0;j<4;j++)
      {
         if(a[j][i]!=0)
         {
            b[c]=a[j][i];
            d[c]=a[j][i];
            c++;
         }
      }
      j=c-1;
      while(j>0)
      {
         if(b[j]==b[j-1])
         {
            d[j]=d[j]*2;
            *sum=*sum+d[j];
            d[j-1]=0;
            j=j-2;
         }
         else
            j=j-1;
      }
      for(j=0;j<c;j++)
      {
         if(d[j]!=0)
            b[s++]=d[j];
      }
      for(j=0;j<4;j++)
      {
         if(j<(4-s))
            a[j][i]=0;
         else
            a[j][i]=b[k++];
      }
   }
      for(i=0;i<4;i++)
   {
      for(j=0;j<4;j++)
      {
         if(q[i][j]!=a[i][j])
         {
            f=1;
            break;
         }
      }
      if(f==1)
         break;
   }
   return f;
}
