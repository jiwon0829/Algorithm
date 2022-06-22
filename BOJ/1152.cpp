#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    getline(cin, text);
    int len = text.length();
    int result = 1;
    
    if (len == 1 && text[0] == ' ')
    {
        cout<<"0"<<endl;
        return 0;
    }
    for(int i = 1;i<len-1;i++)
    {
        if (text[i] == ' ')
            ++result;
    }
    cout<<result<<endl;
}
