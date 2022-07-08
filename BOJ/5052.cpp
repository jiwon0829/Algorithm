#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin>>t;
	for(int i=0;i<t;++i)
	{
		cin>>n;
		vector<string> v(n);
		for(int j=0;j<n;++j)
			cin>>v[j];
		sort(v.begin(), v.end());
		bool chk = true;
		for(int j=0;j<n-1;++j)
		{
			chk = true;
			if(v[j].length() > v[j+1].length())
				continue;
			if(v[j] == v[j+1].substr(0, v[j].length()))
			{
				chk = false;
				break;
			}
		}
		if(chk)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
