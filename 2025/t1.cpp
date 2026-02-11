//
// Created by 35395 on 2026/2/11.
//
#include<stdio.h>

void solve() {
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = 0;
    for(int i=1;i<=10;i++) {
        if(i % a >= b) ans ++;
    }
    printf("%d\n",ans);
}

signed main() {
    solve();
    return 0;
}