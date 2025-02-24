#include<stdio.h>

void main()
{
   int incoming,outgoing,bucket_size,storage,n;
   printf("Enter the number of input,bucketsize,outgoing flow rate\n");
   scanf("%d%d%d",&n,&bucket_size,&outgoing);
   
   while(n!=0)
   {  
      printf("Enter the incoming packet size\n");
      scanf("%d",&incoming);
      printf("Incoming packet size is %d\n",incoming);
      if(incoming <= (bucket_size-storage))
      {
        storage+=incoming;
        printf("bucket size %d of %d is filled\n",storage,bucket_size);
      }
      else
      {
         printf("Droped %d packets\n",incoming-(bucket_size-storage));
         storage=bucket_size;
          printf("bucket size %d of %d is filled\n",storage,bucket_size);
      }
      
      if(storage>=outgoing)
      {
        storage=storage-outgoing;
      }
      printf("After outgoing bucketsize %d out of %d\n",storage,bucket_size);
      n--;
   }
}
