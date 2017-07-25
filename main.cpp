#include <iostream>
using namespace std;
void solution(){
    int n;
    cin>>n;
    if(n==0) return;
    cout<<n/2<<endl;
    solution();
}
int main() {
    solution();
    return 0;
}