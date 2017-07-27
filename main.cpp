#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*abcdeffabcde
abcdefabcdedabcdeffabc
     */
    string s1, s2;
    int m, n, maxlen = 0, len, temp1 = 0, temp2 = 0, tj;
    //cin>>s1>>s2;
    s1 = "abcdeffabcde";
    s2 = "abcdefabcdedabcdeffabc";
    m = s1.size();
    n = s2.size();
    for( int i = 0; i < m; i++) {
        len = 0;
        for( int j = 0; j < n; j++) {
            temp1 = i;
            temp2 = j;
            len = 0;
            while (s1[temp1++]==s2[temp2++]) len++;
            maxlen = max(maxlen, len);

        }
    }
    cout << maxlen << endl;
    return 0;
}