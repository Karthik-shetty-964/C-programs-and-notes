#include<stdio.h>
int odd_sum(int);

int main(){
    int n,res;
    printf("enter the number\n");
    scanf("%d",&n);
     res=odd_sum(n);
    printf("%d",res);
    return 0;
}
int odd_sum(int n){
    if(n==0|| n==1){
        return 0;
    }else if(n%2==0){
        return n+odd_sum(n-2);
    }else if(n%2!=0){
        return (n-1)+odd_sum(n-3);
    }

}