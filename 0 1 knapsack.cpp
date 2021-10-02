
#include <bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n)
{

    if (n == 0 || W == 0)
        return 0;

    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);
    else
        return max(
            val[n - 1]
                + knapSack(W - wt[n],
                           wt, val, n -1),
            knapSack(W, wt, val, n - 1));
}


int main()
{


    int n;
    cin>>n;
    int wt[n];
    int val[n];
    for(int i=0;i<n;i++)
    cin>>wt[i];

    for(int i=0;i<n;i++)
    cin>>val[i];

    int W;
    cin>>W;

    int n = sizeof(val) / sizeof(val[0]);
    cout << knapSack(W, wt, val, n);
    return 0;
}
