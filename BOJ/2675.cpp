#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int r;
        string s, result;
        cin>>r>>s;
        int pos = 0;
        while (s[pos])
        {
            for(int j = 0;j<r;j++)
            {
                result += s[pos];
            }
            pos++;
        }
        cout<<result<<endl;
    }
}

