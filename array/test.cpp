#include <iostream>
using namespace std;
void scores(int arr[],int n) {
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n-1; j++) {
			if(arr[i]==arr[j]) {
				arr[j]=0;
			}
		}
	}

	for(int i=1; i<=3; i++) {
		int max=0,value=0;
		for(int j=0; j<n; j++) {
			if(max<arr[j]) {
				max=arr[j];
				value=j;
			}
		}
		cout<<"\n"<<max<<" ";
 		arr[value]=0;

	}
}
int main() {
	int arr[10];
	scores(arr,10);

	return 0;
}