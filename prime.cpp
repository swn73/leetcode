#include<stdio.h>

bool checkIsPrime(int x){
    for(int i=2;i<x;++i){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    while(scanf("%d",&n) != EOF){
        do{
            for(int i=2;i<n;++i){
                if(checkIsPrime(i) && n%i==0){
                    printf("%d\t",i);
                    n=n/i;
                    break;
                }
            }            
        }while(!checkIsPrime(n));
        printf("%d\n",n);
    }
    return 0;
}