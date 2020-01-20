#include <bits/stdc++.h>

using namespace std;

int main()
{
 //   freopen("input.txt", "r", stdin);
  //  freopen("output.txt", "w", stdout);
    long long int n, x, tc;
    vector<int>arr;
    cin>>n>>tc;
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }
    while(tc--){
        int tmp=arr[0];
        for(int i=0; i<n-1; i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=tmp;
    }
    for(int i=0;i <n; i++)cout<<arr[i]<<' ';
    return 0;
}
