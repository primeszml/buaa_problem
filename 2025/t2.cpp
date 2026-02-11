//
// Created by 35395 on 2026/2/11.
//
#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int ans = 0;
    int num[100], cnt = 0;
    if(x == 0){
        printf("0^3 = 0");
        return 0;
    }
    while(x){
        num[cnt++] = x % 10;
        x /= 10;
    }
    for(int i=cnt-1;i>=0;i--){
        ans = ans + num[i] * num[i] * num[i];
        printf("%d^3",num[i]);
        if(i != 0){
            printf(" + ");
        }
        else printf(" = %d", ans);
    }
}