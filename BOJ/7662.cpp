#include <iostream>
#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T, k, data;
	char command;

	cin>>T;
	for(int i=0;i<T;++i)
	{
		cin>>k;
		multiset<int> ms;
		for(int j=0;j<k;++j)
		{
			cin>>command>>data;
			if(command == 'I')
				ms.insert(data);
			else if(!ms.empty() && command == 'D')
			{
				if(data == 1)
					ms.erase(--(ms.end()));
				else
					ms.erase(ms.begin());
			}
		}
		if(ms.empty())
			cout<<"EMPTY\n";
		else
			cout<<*(--ms.end())<<" "<<*ms.begin()<<'\n';
	}
}
