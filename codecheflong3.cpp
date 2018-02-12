#include <bits/stdc++.h>
#include <string>

using namespace std;

int permut(string s)
{
    int n = s.length();
    int ans[n];
    for(int i=0;i<n;i++)
        ans[i]=i+1;
    if(n%2!=0)
    {
        int j=0;
        while(j!=n/2)
        {
            for(int k=j+1;k<n;k++)
            {
                if(s[k]==s[j])
                {
                    int temp=s[n-j-1];
                    s[n-j-1]=s[k];
                    s[k]=temp;
                    temp=ans[n-j-1];
                    ans[n-j-1]=ans[k];
                    ans[k]=temp;
                }
                else if(k==n-1)
                {
                    int temp=s[j];
                    s[j]=s[n/2];
                    s[n/2]=temp;
                    temp = ans[j];
                    ans[j]=ans[n/2];
                    ans[n/2]=temp;
                }

            }
            j++;
        }
    }
    else{
        int j=0;
        while(j!=n/2)
        {
            for(int k=j+1;k<n;k++)
            {
                if(s[k]==s[j])
                {
                    int temp=s[n-j-1];
                    s[n-j-1]=s[k];
                    s[k]=temp;
                    temp=ans[n-j-1];
                    ans[n-j-1]=ans[k];
                    ans[k]=temp;
                }
            }
            j++;
        }
    }
    for(int p=0;p<n;p++)
        cout<<ans[p]<<" ";
    return 0;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        permut(s);
        cout<<"\n";
    }
    return 0;
}
