#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ans = max (b,a+c);
        cout<<ans<<endl;
    }
	return 0;
}