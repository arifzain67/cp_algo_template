	#include <iostream>
	#include<bits/stdc++.h>
	#include <vector>
	#define nl '\n'
	#define sp " "
	#define vi vector<int> 
	#define vii vector<long long>
	#define ll long long
	//#define l long 
	#define pb push_back
	#define eb emplace_back
	#define all(x) x.begin(),x.end()
	#define ALL(x) x.rbegin(),x.rend()
	#define input(x) for(auto &it : x) cin>>it
	#define output(x) for(auto &it : x) cout<<it<<" "
	using namespace std;
	const int MOD = 1e9 + 7;

	void remove_all_max_elements(vector<int>& result) {
    int max_val = *max_element(all(result));
    result.erase(remove(all(result), max_val), result.end());
    }


   	ll lcm(int a,int b){
   		return 	(a/__gcd(a,b)) * b;
   	}

   	int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
    }

    int sieve(int n) {
    		int n; cin>>n;

		vector<bool> primes(n+1, true);

		primes[0] = primes[1] = false;

		for(int i=2;i*i <= n;i++){
			if(primes[i]){
				for(int j=i*i;j<=n;j+=i){
					primes[j] = false;
				}
			}
		}

		for(int i=1;i<=n;i++){
			if(primes[i]) cout<<i<<sp;
		}
    }

    long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
    }
	
	void solve(){
		
	



	}


	

	int32_t main(){

		ios::sync_with_stdio(0);
		cin.tie(0);

		//int t; cin>>t;
	//	while(t--){

			solve();
	//	}

		return 0;
	}