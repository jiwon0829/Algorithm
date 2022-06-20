#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    int chk[105][105] = {0};
    
    
    for(int i=1;i<=m;i++)
        chk[1][i] = 1;
    for(int i=1;i<=n;i++)
        chk[i][1] = 1;
    
    for(int i=0;i<puddles.size();i++){
        chk[puddles[i][1]][puddles[i][0]] = -1;
    }
    

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1 && j==1)
                continue;
            
            if(chk[i][j] == -1)
                chk[i][j] = 0;
            else
                chk[i][j] = (chk[i][j-1] + chk[i-1][j])% 1000000007;
        }
    }


    return chk[n][m];
}
