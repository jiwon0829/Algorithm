#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string text, word;
	cin>>text>>word;
	
	char result[1000001];
	int len = word.length();
	int index = 0;
	for(int i=0;i<text.length();++i)
	{
		result[index++] = text[i];
		if(result[index - 1] == word[len - 1])
		{
            if(index - len < 0)
                continue;
			bool find = true;
			for(int j=0;j<len;++j)
			{
				if(result[index - j - 1] != word[len - j - 1])
				{
					find = false;
					break;
				}
			}
            if(find)
			    index -= len;
		}
	}
	if(!index)
		cout<<"FRULA\n";
	else
	{
		for(int i=0;i<index;++i)
			cout<<result[i];
	}
}

