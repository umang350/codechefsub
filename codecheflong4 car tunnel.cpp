#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int p;
    cin>>p;
    for(int t=0;t<p;t++)
    {
        long int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            long int x;
            cin>>x;
            v.push_back(x);
        }
        long int c,d,s;
        cin>>c>>d>>s;
        sort(v.begin(),v.end());
        long int max= v[v.size()-1];
        cout<<(c-1)*max<<"\n";
    }
    return 0;
}
