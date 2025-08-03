#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> pbds;
#define int long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pm cout<<"-1"<<endl;
#define sortf(a)  sort(a.begin(),a.end())
#define sortr(a) sort(a.rbegin(),a.rend())
#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(j,i) for(int i=j;i>=0;i--)
int power(int a,int b,int mod){int res=1;while(b>0){if(b%2==1){res=(res*a)%mod;}b=b/2;a=(a*a)%mod;} return res;}
int N = 1000005;
int M = 1e9 + 7;
vector<int>sieve(N,1);
void callsieve(){
 sieve[0]= 0;sieve[1] = 0;
 for(int i=2;i*i<=N;i++){
    if(sieve[i]){
       for(int j = i*i;j<N;j+=i){
         sieve[j] = 0;
             }
         }
        }
}
void solve(){
             int n;
             cin>>n;
             for(int i=0;i<n;i++){
                   int x;cin>>x;
                   
                   int ans = 1e10;
                   for(int j=0;j<=15;j++){
                       int y  = (x+j)%32768;
                       int cnt = j;
                       int t = 0;
                       while(y!=0 and  t<=15){
                          y = (y*2)%32768;
                          t++;
                       }
                       ans = min(ans,t + cnt);
                   }
                   cout<<ans<<" ";
                   
             }
            }
signed main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int T=1;
    //   cin>>T;
      while(T--){
         solve();
         }
      return 0;
  }
