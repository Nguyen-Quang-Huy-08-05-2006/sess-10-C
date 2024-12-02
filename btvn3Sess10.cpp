#include<stdio.h>
int main(){
	int num[5]={1,7,3,6,9};
	int length=sizeof(num)/sizeof(int);
	for(int i=0;i<length;i++){
		printf("%d ",num[i]);
	}
	for(int i=1;i<length;i++){
		int key=num[i];
		int j=i-1;
		while(j>=0 && key<num[j]){
			num[j+1]=num[j];
			j--;
		}
		num[j+1]=key;
	}
	printf("\n");
	printf("mang sau khi sap xep: ");
	for(int i=0;i<length;i++){
		printf("%d ",num[i]);
	}
	return 0;
}
