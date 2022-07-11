#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin>>N;

	int cnt5 = N / 5;
	int cnt3;
	while (1)
	{
		if (cnt5 < 0)
		{
			cout<<"-1\n";
			return (0);
		}
		if ((N - (cnt5 * 5)) % 3 == 0)
		{
			cnt3 = (N - (cnt5 * 5)) / 3;
			break;
		}
		--cnt5;
	}
	cout<<cnt5 + cnt3<<endl;
}
