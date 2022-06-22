#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cnt[26]={0,};
    string str;
    cin>>str;
    int i = 0;
    while (str[i]){
        if (str[i] >='a' && str[i] <= 'z')
            ++cnt[str[i] - 'a'];
        else
            ++cnt[str[i] - 'A'];
        ++i;
    }
    
    int max = -1;
    char result = '?';
    for(i=0;i<26;i++)
    {
        if(cnt[i] > max)
        {
            result = 'A' + i; 
            max = cnt[i];
        }
        else if(cnt[i] == max)
            result = '?';
    }
    cout<<result<<endl;
}
