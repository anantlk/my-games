int r_shift(int a[4],int *sum)
{
   int b[4],d[4],c=0,j=0,k=0,i,f=0,q[4];
   for(i=0;i<4;i++)
   {
      q[i]=a[i];
   }
   for(i=0;i<4;i++)
   {
      if(a[i]!=0)
      {
         b[c]=a[i];
         d[c]=a[i];
         c++;
      }
   }
   i=c-1;
   while(i>0)
   {
      if(b[i]==b[i-1])
      {
         d[i]=d[i]*2;
         *sum=*sum+d[i];
         d[i-1]=0;
         i=i-2;
      }
      else
         i=i-1;
   }
   for(i=0;i<c;i++)
   {
      if(d[i]!=0)
         b[j++]=d[i];
   }
   k=0;
   for(i=0;i<4;i++)
   {
      if(i<(4-j))
         a[i]=0;
      else
         a[i]=b[k++];
   }
   for(i=0;i<4;i++)
   {
      if(q[i]!=a[i])
      {
         f=1;
         break;
      }
   }
   return f;
}
