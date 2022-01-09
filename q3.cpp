#include <iostream>
#include <vector>
using namespace std;

// solved in O(n) time complexity, where n is the size of the array

int sol(vector<int> &v){
	int n = v.size();
	if(n == 1)
		return v[0];
	vector<int> dp(v);

	dp[1] = max(v[0], v[1]);
	for(int i = 2; i < n; i++)
        dp[i] = max(dp[i-1], v[i] + dp[i-2]);

    return dp.back();
}

int main(){
	int n; cin>>n;
	std::vector<int> v;
	for(int i = 0; i <n; i++){
		int temp; cin>>temp;
		v.push_back(temp);
	}

 	cout<<sol(v);

}