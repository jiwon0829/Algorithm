#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	int arr[500001], result[500001];
	stack<pair<int,int>> s;

	cin>>N;
	for(int i=0;i<N;++i)
	{
		cin>>arr[i];
	}

	for(int i=N-1;i>=0;--i)
	{
		while(!s.empty() && (s.top().first < arr[i]))
		{
			result[s.top().second] = i + 1;
			s.pop();
		}
		s.push(make_pair(arr[i], i));
	}
	
	for(int i=0;i<N;++i)
		cout<<result[i]<<" ";
}
