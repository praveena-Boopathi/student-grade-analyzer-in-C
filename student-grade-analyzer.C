#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of students");
    scanf("%d",&n);
    int avg=0,count=0;
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
      for(int i=0;i<=n;i++){
       avg=avg+a[i];
    }
    avg=avg/n;
    printf("Average = %d",avg);
      for(int i=0;i<=n;i++){
                if(a[i]>avg){
                    count++; 
                    }
    }
    printf("Above average %d",count);
    return 0;
}
