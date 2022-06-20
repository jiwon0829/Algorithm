#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>

using namespace std;
bool IsPrime(int N){
    if(N <= 1)
        return false;
    for(int i=2;i<=sqrt(N);i++){
        if( N % i == 0)
            return false;
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    vector<int> num;

    sort(numbers.begin(), numbers.end());
    do{
        for(int i=0;i<=numbers.size();i++){
            int tmp = 0;
            for(int j=0;j< i;j++){
                tmp = (tmp *10) + (numbers.at(j) - '0');
                num.push_back(tmp);
            }
        }
    }while(next_permutation(numbers.begin(),numbers.end() ));

    sort(num.begin(), num.end());
    num.erase(unique(num.begin(), num.end()), num.end());
    for(int i=0;i<num.size();i++){
        if((IsPrime(num.at(i))))
            answer++;
    }
    return answer;
}
