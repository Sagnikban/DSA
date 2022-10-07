#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

struct node{
    int maxr, sum, lazy;
    node(){
        sum=0;
        maxr=0;
        lazy=0;
    }
};

node merge(node a , node b){
    node temp;
    temp.sum= a.sum+ b.sum;
    temp.maxr= max(a.maxr,b.maxr);
    return temp;
}
node t[400400];

void push(int id, int l, int r){
   if(t[id].lazy){
       t[id].sum= t[id].lazy*(r-l+1);
       t[id].maxr= t[id].lazy;
       if(l!=r){
           t[id<<1].lazy=t[id].lazy;
           t[id<<1|1].lazy= t[id].lazy;
       }
       t[id].lazy=0;
   }
}
void update(int id, int l, int r, int lq, int rq, int v){
    push(id,l,r);
    if(lq>r || l>rq) return;
    if(lq<=l && r<=rq){
        t[id].lazy=v;
        push(id,l,r);
        return;
    }
    int mid = (l+r)>>1;
    update(id<<1,l,mid,lq,rq,v);
    update(id<<1,mid+1,r,lq,rq,v);
    t[id]= merge(t[id<<1],t[id<<1|1]);

}
node query(int id, int l, int r, int lq, int rq){
    push(id,l,r);
    if(lq>r||l>rq) return node();
    if(lq<=l || r<=rq){
        return t[id];
    }else{
    int mid = (l+r)>>1;

        return merge(query(id<<1,l,mid,lq,rq),query(id<<1|1,mid+1,r,lq,rq));
    }

}
void shiv_prime94(){
    update(1, 0, 10, 0,5,3);
    update(1,0,9,6,9,4);
    node x= query(1,0,9,3,6);
    cout<<x.sum<<" "<<x.maxr<<endl;
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
