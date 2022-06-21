#include <iostream>

using namespace std;

int main()
{
    int arr[1001];
    int start, end, result, num;
    
    result = 0;
    num = 1;
    cin>>start>>end;
    for(int i=1;i<=1000;i++)
    {
        for(int j = 1; j<= i;j++)
        {
            if(num >= start && num <= end)
                result += i;
            num++;
        }
    }
    cout<<result<<endl;
}
