#include <iostream>

using namespace std;

int main()
{
    int i;
    string num;
    cin>>i>>num;
    
    int sum = 0;
    i -=1;
    for(i;i>=0;i--){
        if (num[i] == '0')
            continue;
        sum += num[i] - '0';
    }
    cout<<sum<<endl;
}

