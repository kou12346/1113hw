#include<iostream> 
#include<cstring>
using namespace std;
	
template<typename T>
void count(T& target,T arr[],int& all){
		int top=0;
		int bottom=all-1;
	while(top<=bottom){
		int mid=top+(bottom-top)/2;
		if(arr[mid]==target){
			cout<<mid<<endl;
			return;
		}
		else if(arr[mid]>target){
			bottom=mid-1;
		}
		else{
			top=mid+1;
		}
	}
	cout<<-1<<endl;
}

int main(){
	char n; //型態 
	int sum,all,target; //數量 組數 
	int arr[30];
	string arr2[30],target1;
	while(cin>>n>>sum>>all){
	
	if(n=='i'){
		for(int i=0;i<sum;i++)
			cin>>arr[i];
		for(int i=0;i<all;i++){
			cin>>target;
			count(target,arr,sum);
		}
			
	}
	else{
		for(int i=0;i<sum;i++)
			cin>>arr2[i];
		for(int i=0;i<all;i++){
			cin>>target1;
			count(target1,arr2,sum);
		}
	}
	
	
	
	

	
}
	return 0;
}
