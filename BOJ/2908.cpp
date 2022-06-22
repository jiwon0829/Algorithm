#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string num1, num2;
    cin>>num1>>num2;
    
    int inum1=0, inum2=0;
    for(int i=2;i>=0;i--){
        inum1 = inum1 * 10 + (num1[i] - '0');
        inum2 = inum2 * 10 + (num2[i] - '0');
    }
    cout<<max(inum1, inum2)<<endl;
}
