#include <stdio.h>
#include <stdlib.h>

int addbyone(int &);

int main(void){
	
	int x=100;
	int y=addbyone(x);
	printf("x=%d\n",x);
	system("pause");
	
	system("pause");
} 
int addbyone(int &xref){
	xref++;
	printf("xref=%d\n",xref);
	return xref;
}
