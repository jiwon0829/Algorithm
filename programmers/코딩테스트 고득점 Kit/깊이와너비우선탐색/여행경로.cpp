#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool visit[10001];
vector<string> answer;

void DFS(vector<vector<string>>tickets, string start, int cnt, vector<string> tmp){
    tmp.push_back(start);
    if(cnt == tickets.size()){
        answer = tmp;
        return;
    }
    
    for(int i=0;i<tickets.size();i++){
        if(tickets[i][0] == start && !visit[i]){
            visit[i] = true;
            DFS(tickets,tickets[i][1], cnt+1,tmp);
            visit[i] = false;
        }
    }
    tmp.pop_back();
}


vector<string> solution(vector<vector<string>> tickets) {
    vector<string> tmp;
    
    sort(tickets.begin(),tickets.end(),greater<vector<string>>());
    DFS(tickets,"ICN",0,tmp);
    return answer;
}
