#include<stdio.h>
int main(){
		int arr1[5]={4,5,9,2,7};
	for(int i=0;i<5;i++){
		int min=i;
		for(int j=i+1;j<5;j++){
			if(arr1[j]<arr1[min]){
				min=j;
			}
		}
		if(min!=i){
			int temp;
			temp=arr1[min];
			arr1[min]=arr1[i];
			arr1[i]=temp;
		}
	}
	for(int i=0;i<5;i++)
	printf("%d ",arr1[i]);
	
	printf("\n");
	
	return 0;
}
