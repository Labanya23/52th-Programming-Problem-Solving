#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x1,x2,y1,y2,r,a,b,p;
        cin>>x1>>y1;
        cin>>r;
        cin>>x2>>y2;
        a=(x2-x1)*(x2-x1);
        b=(y2-y1)*(y2-y1);
        p=sqrt(a+b);

        if(p>r){
            cout<<"The point is not inside the circle"<<endl;
        }
        else{
            cout<<"The point is inside the circle"<<endl;
        }

    }
    return 0;
}
