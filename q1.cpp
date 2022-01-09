#include <iostream>
using namespace std;



int sol(int n, int a[]){
	int total = ((n)*(n+1))/2;
	for (int i = 0; i < n; i++){
		total -= a[i];
	}
	return total;
}

int main(){
	int n; cin>>n;
	int a[n];
	for(int i = 0; i <n; i++){
 		cin>>a[i];
	}

 	cout<<sol(n, a);

}