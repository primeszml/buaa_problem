//
// Created by 35395 on 2026/2/13.
//
#include<stdio.h>
typedef long long ll;
#define N 1010
ll inf = 1e18;

int n,s,t;
int cost[N][N];
ll d[N];
bool st[N];


int main(){
    scanf("%d",&n);
    scanf("%d %d",&s,&t);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&cost[i][j]);
        }
    }
    for(int i=1;i<=n;i++) d[i] = inf;
    d[s] = 0;
    for(int i=1;i<=n;i++){
        int id = -1;
        ll dis = inf;
        for(int j=1;j<=n;j++){
            if(st[j]) continue;
            if(dis > d[j]) id = j, dis = d[j];
        }
        if(id == -1) break;
        st[id] = 1;
        for(int j=1;j<=n;j++){
            if(d[j] > d[id] + cost[id][j]){
                d[j] = d[id] + cost[id][j];
            }
        }
    }
    if(d[t] == inf) d[t] = -1;
    printf("%lld",d[t]);
}