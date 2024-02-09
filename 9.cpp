#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c;
        //cin>>a>>b>>c;
        double x;
        //cin>>x;
        cin>>a;
        x=sqrt(a);
        b=ceil(x);
        c=floor(x);
        if(b==c){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
