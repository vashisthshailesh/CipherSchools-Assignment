#include <iostream>
#include <algorithm>
using namespace std;



int sol(int n, int x,int arr[]){
	sort(arr, arr+n);
	int closestSum = (int)1e9;
	for (int i = 0; i < n - 2; i++) {
		int ptr1 = i + 1, ptr2 = n - 1;
		while (ptr1 < ptr2) {
            int sum = arr[i] + arr[ptr1] + arr[ptr2];
              if (sum == x){
              	return sum;
              }
            if (abs(x - sum) < abs(x - closestSum))
            	closestSum = sum;

            if (sum > x)
            	ptr2--;
            else
            	ptr1++;
		}
	}
	return closestSum;

}

int main(){
	int n; cin>>n;
	int a[n];
	for(int i = 0; i <n; i++){
 		cin>>a[i];
	}
	int target_integer; cin>>target_integer;

 	cout<<sol(n, target_integer,  a);

}