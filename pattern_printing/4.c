#include <stdio.h>
#include <stdlib.h>
int main()
{   
    int n=5;
    int k=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<n;j++){
            printf(" ");
            if(j>=n-1-i){
               printf("%d",k);
               k++;
            }
        }
        printf("\n");
        k=1;
    }
    return 0;
}