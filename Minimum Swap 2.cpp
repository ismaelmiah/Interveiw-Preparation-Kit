#include <bits/stdc++.h>

using namespace std;

bool visited[100005];

int main()
{
 //   freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    long long int n, x, cnt=0;
    cin>>n;
    pair<int, int>number[n];
    vector<int>arr;
    for(int i=1; i<=n; i++){
        cin>>x;
        arr.push_back(x);
    }

    for(int i=0;i <n; i++){
        number[i].first=arr[i];
        number[i].second=i;
    }
    sort(number, number+n);
    for(int i=0; i<n; i++){
        if(visited[i] || number[i].second==i)continue;
        x=0;
        int j=i;
        while(!visited[j]){
            visited[j]=1;
            j=number[j].second;
            x++;
        }
        cnt+=(x-1);
    }
    cout<<cnt<<endl;
    return 0;
}
