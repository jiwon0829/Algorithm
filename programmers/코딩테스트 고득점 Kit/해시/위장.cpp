#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string,int> set;

    for(int i=0;i<clothes.size();i++)
        set[clothes.at(i).back()]++;

    for (auto m : set)
        answer *= m.second+1;

    return answer-1;
}
