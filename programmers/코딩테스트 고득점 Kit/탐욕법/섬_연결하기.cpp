#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(vector<int>& a, vector<int>& b) {
    return a[2] < b[2];
}

int solution(int n, vector<vector<int>> costs) {
    int answer = 0, total_connect = 1;

    int connect[n];
    for(int i=0;i<n;i++){
        connect[i] = i;
    }

    sort(costs.begin(), costs.end(),compare);

    for(int i=0;i<costs.size();i++){
        if(costs[i][2] == 0 || connect[costs[i][0]] == connect[costs[i][1]])
                continue;

        int next = connect[costs[i][1]];
        for(int j=0;j<n;j++){
            if(connect[j] == next){
                connect[j] = connect[costs[i][0]];
            }
        }

        answer += costs[i][2];
        total_connect++;

        if(total_connect == n)
            break;
    }
    return answer;
}
