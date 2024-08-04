#include<stdio.h>
int main()
{
 int tm,om,n,i;
 printf("Enter total memory size,memory for OS and # of processes:\n");
 scanf("%d%d%d",&tm,&om,&n);
 int process[n];
 for (i = 0; i < n; ++i)
 {
  printf("Enter process %d size :\n",i);
  scanf("%d",&process[i]);
 }
 tm = tm - om;
 for (i = 0; i < n; ++i)
 {
  if(tm >= process[i]){
   printf("Allocated memory to process :%d\n",i+1);
   tm = tm - process[i];
  }else{
   printf("Process %d is blocked\n",i+1);
  }
 }
 printf("External fragmentation is %d.\n",tm);
 return 0;
}
