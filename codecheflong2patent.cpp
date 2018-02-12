#include <bits/stdc++.h>
#include <string>

using namespace std;

int patent(int n,int m,int x,int k,int e,int o)
{
    int flag=0;
    // int ex = x;
    // int ox = x;
    int months=0;
    int total =0;
    while(total<n && (e != 0 || o != 0) && months<=m)
    {
        if(months%2 ==0)
        {
            if(x<=o)
            {
                total+=x;
                months++;
                o = o-x;
            }
            else
            {
                total+=o;
                o =0;
                months++;
            }
        }
        else{
            if(x<=e)
            {
                total+=x;
                months++;
                e = e-x;
            }
            else
            {
                total+=e;
                e =0;
                months++;
            }
        }
    }
    if(total >= n && months <= m)
    {
        flag = 1;
    }
    return flag;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n,m,k,x;
        string s;
        cin >>n>>m>>x>>k;
        cin>>s;
        int e=0;
        int o=0;
        for(int i=0;i<k ;i++)
        {
            if(s[i]=='E')
                e++;
            else
                o++;
        }
        int flag = patent(n,m,x,k,e,o);
        if(flag==1)
            cout<<"yes";
        else
            cout<<"no";
        cout<<"\n";
    }
    return 0;
}
