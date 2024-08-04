#include<stdio.h>
int main()
{
 int m,p,s,p1;
 int m1[4],i,f,fra1,fra2,s1,pos,s2;
 int f1=0,f2=0;
 printf("enter the size of memory:");
 scanf("%d",&m);
 printf("enter the number of partitions:");
 scanf("%d",&p);
 s=m/p;
 printf("each patrn size is %d",s);
 printf("\nenter the number of process:");
 scanf("%d",&p1);
 pos=m;
 for(i=0;i<p1;i++)
 {
  if(pos<s)
  {
   printf("\nthere is no further memory for process %d",i+1);
   m1[i]=0;
   break;
  }
  else
  {
   printf("\nenter the memory req for process %d:",i+1);
   scanf("%d",&m1[i]);
   if(m1[i]<=s)
   {
    printf("\nprocess is allocated in partition %d",i+1);
    fra1=s-m1[i];
    printf("\nInternal fragmentation for process is %d",fra1);
    f1==f1+fra1;
    pos=pos-s;
   }
   else
   {
    printf("\nprocess not allocated in partition %d",i+1);
    s1=m1[i];
    while(s1>s)
    {
     s1=s1-s;
     pos=pos-s;
    }
     pos=pos-s;
     fra2=s-s1;
     f2=f2+fra2;
     printf("\nExternal Fragmentation for this process is %d",fra2);
    }
   }
  }
  printf("\nprocess\tallocated memory");
  for(i=0;i<p1;i++)
  printf("\n%5d\t%5d",i+1,m1[i]);
  f=f1+f2;
  printf("\nthe total no. of fragmentation is %d",f);
  return 0;
 }
