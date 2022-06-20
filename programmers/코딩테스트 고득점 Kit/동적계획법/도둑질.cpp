#include <string>
#include <cstring>
#include <vector>
#define MAX(A, B) (A) > (B)? (A) : (B)
using namespace std;

int arr1[1000000], arr2[1000000];
int solution(vector<int> money) {
    int answer = 0;
    int cnt = money.size();
    memset(arr1, 0, cnt << 2);
    memset(arr2, 0, cnt << 2);
    for (int i = 0; i < cnt - 1; ++i)
    {
        arr1[i] = money[i] + (i - 2 >= 0 ? arr1[i - 2] : 0);
        if (i - 1 >= 0)
            arr1[i] = MAX(arr1[i], arr1[i - 1]);
    }
    for (int i = 1; i < cnt; ++i)
    {
        arr2[i] = money[i] + (i - 2 >= 1 ? arr2[i - 2] : 0);
        if (i - 1 >= 1)
            arr2[i] = MAX(arr2[i], arr2[i - 1]);
    }
    answer = MAX(arr1[cnt - 2], arr2[cnt - 1]);
    return answer;
}
