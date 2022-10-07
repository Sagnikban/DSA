#include <bits/stdc++.h>
using namespace std;

int n;
// vector<int>arr(n);
void generate(int level, int a, int b, int c, int d, vector<int>&arr){
	if(level==n){
		if(a==b && b==c && c==d && a==d){
			// return true; //square
		}
	}

	generate(level+1, a+arr[level], b,c,d, arr);

	generate(level+1, a, b+arr[level],c,d, arr);

	generate(level+1, a, b,c+arr[level],d, arr);

	generate(level+1, a, b,c,d+arr[level], arr);

}

void shiv() {  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1; cin >> t;
    while (t--) {
        shiv();
    }
    return 0;
}