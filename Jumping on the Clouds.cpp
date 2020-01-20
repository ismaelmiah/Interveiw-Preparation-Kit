#include <bits/stdc++.h>

using namespace std;

int main()
{
   // freopen("input.txt", "r", stdin);
  //  freopen("output.txt", "w", stdout);
    long long int n, x, cnt=-1;
    vector<int>arr;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }
    for(int i=0; i<n; i++, cnt++){
        if(i<n-2 && arr[i+2]==0)i++;
    }
    cout<<cnt<<endl;
    return 0;
}
