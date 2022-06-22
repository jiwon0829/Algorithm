#include <iostream>

using namespace std;

int main()
{
    int cnt[26];
    string str;
    cin>>str;
    for(int i=0;i<26;i++)
        cnt[i] = -1;
    int pos = 0;
    while (str[pos])
    {
        if (cnt[str[pos] - 'a'] == -1)
            cnt[str[pos] - 'a'] = pos;
        pos++;
    }
    for(int i=0;i<26;i++)
        cout<<cnt[i]<<" ";
    cout<<endl;
}

