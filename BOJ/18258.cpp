#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    
    int command_size,data;
    string command;
    queue<int>q;
    cin>>command_size;

    for(int i=0;i<command_size;i++){
        cin>>command;
        if (command == "push"){
            cin>>data;
            q.push(data);
        }
        else if(command == "pop")
        {
            if(q.empty())
                cout<<"-1\n";
            else
            {
                cout<<q.front()<<'\n';
                q.pop();
            }
        }
        else if (command == "size")
            cout<<q.size()<<'\n';
        else if(command == "empty")
        {
            cout<<q.empty()<<'\n';
        }
        else if (command == "front")
        {
            if(q.empty())
                cout<<"-1\n";
            else
                cout<<q.front()<<'\n';
        }
        else if (command == "back")
        {
            if(q.empty())
                cout<<"-1\n";
            else
                cout<<q.back()<<'\n';
        }
    }
}

