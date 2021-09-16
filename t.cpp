#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
#define MOD 1000000007
#define rep(i,n)  for(lli i = 0; i < n; i++)
#define trav(itr, iteratble) for(auto& itr : iteratble)

// helper functions
template <typename T>
void coutArray(T arr[], int n, string s=""){
    if(s!="")
        cout<<s<<": ";
    rep(i, n){
        cout<<arr[i]<<" ";
    }    
    cout<<endl;
}

template <typename T>
void coutVector(vector<T> v, string s=""){
    if(s!="")
        cout<<s<<": ";
   trav(x, v)
        cout<<x<<" ";
    cout<<endl;
}

template <typename T>
void cinArray(T arr[], lli n){
    rep(i, n){
        cin>>arr[i];
   }    
}

template <typename T>
void cinVector(vector<T>& v, lli n){
    T temp;
    rep(i, n){
        cin>>temp;
        v.push_back(temp);
    }    
}

string intToString(lli n){
    ostringstream s;
    s<<n;
    return s.str();
}

int stringToInt(string s){
    stringstream str(s);
    int x;
    str >> x;
    return x;
}

long long int stringToLLI(string s){
    stringstream str(s);
    long long int x;
    str >> x;
    return x;
}


int charToInt(char c){
    string s{c};
    return stringToInt(s);
}


// Coding Area Begin

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int ans = INT_MIN, sum = 0;
        for (int e: arr) {
            sum += e;
            ans = max(ans, sum);

            if (sum < 0) sum = 0;
        }
        return ans;
    }
};

// Coding Area End


void solve() {
    int target, n;
    cin>>target>>n;
    vector<int> arr;
    cinVector(arr, n);

}


void test(){
    cout<<"**testing**\n\n";
    ////////////
    vector<int> v;
    int n, tar;
    cin>>n>>tar;
    cinVector(v, n);
    coutVector(v);
}

void testCase(){
    int t = 1;
    cin>>t;
    while(--t){
       solve();
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
        test();
        // testCase();
        // solve();
}