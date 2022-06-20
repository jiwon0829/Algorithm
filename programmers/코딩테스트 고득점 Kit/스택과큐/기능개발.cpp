#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days;
    
    for(int i=0;i<progresses.size();i++){
        if((100-progresses[i])%speeds[i])
            days.push_back((100 - progresses[i]) / speeds[i] + 1);
        else
            days.push_back((100 - progresses[i]) /speeds[i]);
    }

    
    int big_day = days[0];
    int works = 0;
    for(int i=0;i<days.size();i++){
        if(big_day >= days[i])
            works++;
        else{
            answer.push_back(works);
            works = 1;
            big_day = days[i];
        }
    }
    answer.push_back(works);
    
    return answer;
}
