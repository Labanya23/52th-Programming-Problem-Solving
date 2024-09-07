#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){
            /*
            int a[4];
        cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    cout<<a[0]+a[4]<<endl;
    */
    int a;
    cin>>a;
    int b=a%10;
    int c=a/10000;
    cout<<"Sum = "<<b+c<<endl;
    }
    return 0;
}
