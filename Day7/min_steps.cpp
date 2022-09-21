//"cerner_2^5_2022" "cerner_2tothe5th_2022"

//Minimum number of moves required to reach position Y from postion X when
//two kind of moves allowed from the current position k:
//1. k+2
//2. k-1

#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int x,y;
    cin>>x>>y;
    if(x==y)
        cout<<0<<"\n";
    else if(x>y)
        cout<<(x-y)<<"\n";
    else{
        ll curr_pos=x,ans=0;
        while(curr_pos<y){
            ans++;
            curr_pos+=2;
        }
        ans+=(curr_pos-y);
        cout<<ans<<"\n";
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_cases;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++)
        solve();
    return 0;
}

