#include <iostream>
#include <vector>
#include <queue>
#include <sstream>

using namespace std;

int n;
vector<queue<string>> vq;

void Input()
{
	cin>>n;
	vq.resize(n+1);
	string tmp;
	getline(cin, tmp);
	for(int i=0;i<n+1;++i)
	{
		getline(cin,tmp);
		istringstream ss(tmp);
		string stringBuffer;
		while(getline(ss, stringBuffer, ' '))
			vq[i].push(stringBuffer);
	}
}

int Solution()
{
	bool chk = false;
	int size = vq[n].size();
	for(int i=0;i<size;++i)
	{
		string word = vq[n].front();
		for(int j=0;j<n;j++)
		{
			if(!vq[j].empty() && vq[j].front() == word)
			{
				vq[j].pop();
				vq[n].pop();
				chk = true;
				break;
			}
		}
		if(!chk)
		{
			cout<<"Impossible\n";
			return 0;
		}
		else
			chk = false;
	}
	for(int i=0;i<n;++i)
	{
		if(!vq[i].empty())
		{
			cout<<"Impossible\n";
			return 0;
		}
	}
	return 1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Input();
	if(Solution())
		cout<<"Possible\n";
}
