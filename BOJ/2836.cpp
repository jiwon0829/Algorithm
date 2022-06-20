#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
vector<pair<int, int>> boat;

void Input()
{
    cin>> N>>M;
    int start, end;
    for(int i=0;i<N;i++){
        cin>>start>>end;
        
        if(start > end)
            boat.push_back({end,start});
    }
    sort(boat.begin(), boat.end());
}

void Solve()
{
    long long answer = M;
    int left = -1;
    int right = -1;
    for(auto x:boat) {
        if(right < x.first) {
            answer += (2*(right - left));
            right = x.second;
            left = x.first;
        }
        else 
            right = max(right, x.second);
    }
    
    answer += (2*(right - left));
    cout<<answer<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    Input();
    Solve();
}
