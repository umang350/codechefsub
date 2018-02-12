#include <bits/stdc++.h>
#include <string>

using namespace std;

int chef(string s){
	int total =0;
    for(int i=0;i< s.length();i++)
	{
		if(s[i]=='c')
		{
			if(s[i+1]=='h')
			{
				if(s[i+2]=='e')
				{
					if(s[i+3]=='f')
					{
						total++;
					}
				}
				else if(s[i+2]=='f')
				{
					if(s[i+3]=='e')
					{
						total++;
					}
				}
			}
			else if(s[i+1]=='e')
			{
				if(s[i+2]=='h')
				{
					if(s[i+3]=='f')
					{
						total++;
					}
				}
				else if(s[i+2]=='f')
				{
					if(s[i+3]=='h')
					{
						total++;
					}
				}
			}
			else if(s[i+1]=='f')
			{
				if(s[i+2]=='e')
				{
					if(s[i+3]=='h')
					{
						total++;
					}
				}
				else if(s[i+2]=='h')
				{
					if(s[i+3]=='e')
					{
						total++;
					}
				}
			}
		}
		else if(s[i]=='h')
		{
			if(s[i+1]=='c')
			{
				if(s[i+2]=='e')
				{
					if(s[i+3]=='f')
					{
						total++;
					}
				}
				else if(s[i+2]=='f')
				{
					if(s[i+3]=='e')
					{
						total++;
					}
				}
			}
			else if(s[i+1]=='e')
			{
				if(s[i+2]=='c')
				{
					if(s[i+3]=='f')
					{
						total++;
					}
				}
				else if(s[i+2]=='f')
				{
					if(s[i+3]=='c')
					{
						total++;
					}
				}
			}
			else if(s[i+1]=='f')
			{
				if(s[i+2]=='e')
				{
					if(s[i+3]=='c')
					{
						total++;
					}
				}
				else if(s[i+2]=='c')
				{
					if(s[i+3]=='e')
					{
						total++;
					}
				}
			}
		}
		else if(s[i]=='e')
		{
			if(s[i+1]=='c')
			{
				if(s[i+2]=='h')
				{
					if(s[i+3]=='f')
					{
						total++;
					}
				}
				else if(s[i+2]=='f')
				{
					if(s[i+3]=='h')
					{
						total++;
					}
				}
			}
			else if(s[i+1]=='h')
			{
				if(s[i+2]=='c')
				{
					if(s[i+3]=='f')
					{
						total++;
					}
				}
				else if(s[i+2]=='f')
				{
					if(s[i+3]=='c')
					{
						total++;
					}
				}
			}
			else if(s[i+1]=='f')
			{
				if(s[i+2]=='c')
				{
					if(s[i+3]=='h')
					{
						total++;
					}
				}
				else if(s[i+2]=='h')
				{
					if(s[i+3]=='c')
					{
						total++;
					}
				}
			}
		}
		else if(s[i]=='f')
		{
			if(s[i+1]=='e')
			{
				if(s[i+2]=='c')
				{
					if(s[i+3]=='h')
					{
						total++;
					}
				}
				else if(s[i+2]=='h')
				{
					if(s[i+3]=='c')
					{
						total++;
					}
				}
			}
			else if(s[i+1]=='c')
			{
				if(s[i+2]=='h')
				{
					if(s[i+3]=='e')
					{
						total++;
					}
				}
				else if(s[i+2]=='e')
				{
					if(s[i+3]=='h')
					{
						total++;
					}
				}
			}
			else if(s[i+1]=='h')
			{
				if(s[i+2]=='e')
				{
					if(s[i+3]=='c')
					{
						total++;
					}
				}
				else if(s[i+2]=='c')
				{
					if(s[i+3]=='e')
					{
						total++;
					}
				}
			}
		}
	}
	if(total==0)
        cout<<"normal";
    else
        cout<< "lovely "<<total;
	return 0;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        chef(s);
        cout<<"\n";
       // cout << result << endl;
    }
    return 0;
}
