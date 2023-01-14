#include<bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1034/A

const int inf=1.5e7+10,INF = 3e5+10;
int s1[inf],s2[inf],sn[INF],n,gkd;
int main()
{
    int n;scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",sn+i),gkd=__gcd(sn[i],gkd);
    for(int i=1;i<=n;i++)s1[sn[i]/gkd]++;
    int t=0;
    for(int i=2;i<inf;i++){
        if(!s2[i]){
            int h=0;
            for(int j=i;j<inf;j+=i)
                h+=s1[j],s2[j]=1;
            t=max(t,h);
        }
    }
    printf("%d\n",t?n-t:-1);
}