#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	int arr[1000001], result[1000001];
	stack<int> s;
	
	cin>>N;
	for(int i=0;i<N;++i)
		cin>>arr[i];

	for(int i=N-1;i>=0;--i)
	{
		while(!s.empty() && (s.top() <= arr[i]))
			s.pop();
		if(s.empty())
			result[i] = -1;
		else
			result[i] = s.top();
		s.push(arr[i]);
	}

	for(int i=0;i<N;++i)
		cout<<result[i]<<" ";
	cout<<'\n';
}

