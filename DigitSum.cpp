#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int D;
int len;
string L, R;
int dp[1010][2][2][100];
int rec(int level, int tlo, int thi, int sumD){
    if(level==len){
        if(sumD==0) return 1;
        else return 0;
    }

    if(dp[level][tlo][thi][sumD]!= -1){
        return dp[level][tlo][thi][sumD];
    }

    int ans =0;
    int lo=0;
    if(tlo==1){
        lo = L[level]-'0';
    }
    int hi=9;
    if(thi==1){
        hi = R[level]-'0';
    }

    for(int i=lo;i<=hi;i++){
        int ntlo= tlo;
        if(i!=L[level]-'0') ntlo=0;
        int nthi=thi;
        if(i!=R[level]-'0') nthi=0;

        ans += rec(level+1, ntlo, nthi, (sumD+i) %D);
        ans =ans%mod;
    }

    return dp[level][tlo][thi][sumD]=ans;
}
void shiv_prime94(){
    cin>>L>>R;
    cin>>D;
    int cnt = R.length()- L.length();
    string temp="";
    while(cnt--){
        temp+='0';
    }
    L= temp+L;
    memset(dp, -1, sizeof(dp));
    len= R.length();
    rec(0,1,1,0);
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
    {
        shiv_prime94();
    }
    return 0;
}
