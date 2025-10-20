#include<stdio.h>
#include"arraylib.h"
int main(void){
    int n,value;
    printf("enter the number of elements:");
    if(scanf("%d",&n)=1||n<=0){
        printf("invalid size\n");
        return 1;

    }
    int a[n];
    printf("enter %d elements:",n);
    for(int i=0;i<n;i++){
        if(scanf("%d",&a[i]!=1)){
            printf("invalid input!\n");
            return 1;

        }
    }
}
printf("original array:");
displayArray(a,n);
printf("max at index %d\n",findMaxIndex(a,n));
printf("min at index %d\n",findMinIndex(a,n));
printf("aversge = %.2f\n",findAverage(a,n));
reverseArray(a,n);
printf("reversed array:");
displayArray(a,n);
printf("enter a value to search");
if(scanf("%d",&value)!=1){
    printf("invalid input!\n");
    return 1;

}
  int pos=linearSearch (a,n,value);
  if(pos!=-1)
  printf(" found at index %d\n ",value,pos);
  else
  printf("not found in array %d\n",value);
  