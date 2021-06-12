#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> sieve;

bool check_prime(ll x){
    for (ll i = 2; i <= sqrt(x); i++){
        if (x % i == 0){
            return false;
        }
    }
    return true;
}

ll getIndex(vector<ll> v, ll K){
    auto it = find(v.begin(), v.end(), K);
    if (it != v.end()){
        int index = it - v.begin();
        return index;
    }else {
        return -1;
    }
}

int main(){
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++){
        ll Z;
        cin >> Z;
        ll i = 0;
        ll ret = 0;
        while (true){
            if (check_prime(i)){
                if (sieve.size() == 0 or i > sieve[sieve.size() - 1]){
                    sieve.push_back(i);
                }
                if (sieve.size() > 1){
                    ll index = getIndex(sieve, i);
                    if (i * sieve[index - 1] > Z){
                        ret = sieve[index - 2] * sieve[index - 1];
                        break;
                    }
                }
            }
            i++;
        }
        cout << "Case #" << t << ": " << ret << endl;
    }
}