#include<iostream>
#include<string>
using namespace std;

int main()
{
    int x, m;
    string inp;
    string done="";
    cin >> m;
    getchar();
    for(int n=0; n<m; n++)
    {
        getline(cin, inp);
        done = done + inp;
    }
    for(int i = 97; i < 123; i++)
    {
    x = 0;
        for(int k = 0; k < done.length(); k++)
        {
            if(done[k] == char(i))
            {
                x++;
            }
        }
        if(x != 0)
        {
            cout << char(i) << " " << x << endl;
        }
    }
    
    
    for(int i = 65; i < 91; i++)
    {
    x = 0;
        for(int k = 0; k < done.length(); k++)
        {
            if(done[k] == char(i))
            {
                x++;
            }
        }
        if(x != 0)
        {
            cout << char(i) << " " << x << endl;
        }
    }
}
