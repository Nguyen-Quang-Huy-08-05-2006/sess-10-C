#include<stdio.h>
int main(){
	int arr[8]={1,2,5,7,8,2,6,9},arr1[8],count=0;
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		printf("%d ",arr[i]);
	}
	int item;
	printf("\nnhap gia tri can tim: ");
	scanf("%d",&item);
	int flag=-1;
	
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		if(arr[i]==item){
		arr1[count]=i;
		count++;
		}
	}
	if(count){
		int i=0;
		printf("so %d co vi tri: ",item);
		while(i<count){
			printf("%d ",arr1[i]);
			i++;
		}
		return 0;
	}
	printf("so khong ton tai trong mang");
	return 0;
}
