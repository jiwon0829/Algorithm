#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int it = 0;
    vector<int> v = priorities;
    vector<int> num;

    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());

    for(int i=0;i<priorities.size();i++){
        if(v.back() == priorities.at(i)){
            it = i;
            break;
        }
    }

    int tmp = it;
    while(v.size()){
        for(int i = it;i<priorities.size();i++){
            if(v.back() == priorities.at(i)){
                num.push_back(i);
                tmp = i;

            }
        }
        for(int i = 0;i<it;i++){
            if(v.back() == priorities.at(i)){
                num.push_back(i);
                tmp = i;
            }
        }
        v.pop_back();
        it = tmp;
        if(it>priorities.size())
            it-=priorities.size();
        it++;


    }

    for(int i=0;i<num.size();i++){
        answer++;
        if(num.at(i) == location)
            break;
    }
    return answer;
}

