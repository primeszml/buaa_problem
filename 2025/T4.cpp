//
// Created by 35395 on 2026/2/11.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
#define N 100010
char s[N];
ll dp[N][5];

int main(){
    scanf("%s",s+1);
    int len = strlen(s+1);
    dp[0][0] = 1;
    for(int i=1;i<=len;i++){
        dp[i][0] = 1;
        dp[i][1] = dp[i-1][1];
        dp[i][2] = dp[i-1][2];
        dp[i][3] = dp[i-1][3];
        dp[i][4] = dp[i-1][4];
        if(s[i] == 'b') dp[i][1] += dp[i-1][0];
        else if(s[i] == 'u') dp[i][2] += dp[i-1][1];
        else if(s[i] == 'a') dp[i][3] += dp[i-1][2], dp[i][4] += dp[i-1][3];
    }
    printf("%lld",dp[len][4]);
}