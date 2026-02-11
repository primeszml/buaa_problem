//
// Created by 35395 on 2026/2/11.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 11
char s[10];
int a[11];

int cmp(const void * x,const void * y){
    int xx = *(int *)x, yy = *(int *)y;
    if(x < y) return -1;
    else if(x == y) return 0;
    else return 1;
}

int main(){
    for(int i=1;i<=11;i++){
        scanf("%s",s);
        int hh = (s[0] - '0') * 10 + (s[1] - '0');
        int mm = (s[3] - '0') * 10 + (s[4] - '0');
        int ss = (s[6] - '0') * 10 + (s[7] - '0');
        a[i-1] = hh * 3600 + mm * 60 + ss;
    }
    qsort(s,11,sizeof (int),cmp);
    for(int i=1;i<=10;i++){
        int d = a[i] - a[i-1];
        printf("%d\"%d'\n",d/60,d%60);
    }
}