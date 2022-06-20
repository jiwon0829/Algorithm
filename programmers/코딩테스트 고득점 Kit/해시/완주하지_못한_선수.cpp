#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());


    answer = participant.back();

    for(int i=0;i<completion.size();i++){

        if((participant.at(i).compare(completion.at(i))) < 0){
            answer = participant.at(i);
            break;
        }
    }
    return answer;
}
