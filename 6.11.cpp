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
	cout<<"��J�ݤ�����ƶq:"; 
	cin>>n;
	vector<int> a(n);
	cout<<endl<<"�ƤJ�������:";
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
	
	cout<<endl<<"�ƧǹL��(�Ѥj��p):"<<endl; 
	for(i=0;i<n;i++) cout<<a[i]<<" "; 

	return 0;
} 


