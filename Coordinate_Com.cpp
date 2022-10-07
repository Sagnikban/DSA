#include <bits/stdc++.h>
using namespace std;
#define lli long long
#define vi vector<int>
#define mod 1000000007

struct Coordinate_Compress{
    map<lli,lli>compVal;
    vi rev;
    int cnt;
    void add(lli x){
        compVal[x];
    }
    void build(){
        cnt=0;
        for(auto &v: compVal){
            rev.emplace_back(v.first);
            v.second= cnt++;
        }
    }
    inline lli getComp(lli x){
        return compVal[x];
    }
    inline lli getOrig(lli x){
        return rev[x];
    }
    lli getPrev(lli x){
        auto it = compVal.upper_bound(x);
        it--;
        return it->second;
    }
    lli getPrev(lli x){
        auto it = compVal.lower_bound(x);
        return it->second;
    }
    
};


void shiv_prime94(){
    
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    lli test=1;
    cin>>test;
    while(test--)
    {
        shiv_prime94();
    }
    return 0;
}
