#include <iostream>
#include <vector>

using namespace std;

void swap(int &x,int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}

int main(){
	int i,j,n,check;
	cout<<"輸入需比較的數量:"; 
	cin>>n;
	vector<int> a(n);
	cout<<endl<<"數入比較的數:";
	for(i=0;i<n;i++) cin>>a[i];	
	bool swapped;
	
	for(i=0;i<n;i++){	
		swapped=false;
		for(j=n-1;j>i;j--){
			
			if(a[j]>a[j-1]){
				swap(a[j],a[j-1]);
				swapped=true;
			}
			
		}
		if(swapped==false) break;	
	}
	
	cout<<endl<<"排序過後(由大到小):"<<endl; 
	for(i=0;i<n;i++) cout<<a[i]<<" "; 

	return 0;
} 


