#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a;
    cin>>n;
    vector<pair<int, int>> m;
    pair<int, int> p;
    for(int i=1; i<=n; i++){
        cin>>a;
        p.first = a;
        p.second = i;
        m.push_back(p);
    }
    vector<pair<int, int>> ::iterator it;
    sort(m.begin(), m.end());
    it=m.begin();
    int temp=it->second;
    long long sum=0;
    it++;
    for(; it!=m.end(); it++){
        sum+=min(fabs(temp - it->second), n - fabs(temp - it->second));
        temp=it->second;
    }
    cout<<sum<<endl;
}