#include<stdio.h>
int main(){
	//bubble sort
	int arr[5]={3,8,7,4,1};
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5-i-1;j++){
			if(arr[j]>arr[j+1]){
				int o; //tao bien de doi vi tri, luu a vao c, luu b vao a, luu c vao b
				o=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=o;
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
