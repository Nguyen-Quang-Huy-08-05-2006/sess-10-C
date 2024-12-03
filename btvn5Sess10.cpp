#include<stdio.h>
int main(){
	int n,item,flag,o;
	printf("nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	int arr[n];
	int length=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		printf("moi ban nhap vao so thu %d: ",1+i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<length;i++){
		for(int j=0;j<length-i-1;j++){
			if(arr[j]>arr[j+1]){
				int o; 
				o=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=o;
			}
		}
	}
	
	printf("mang sau khi dc sap xep: ");
	for(int i=0;i<length;i++){
	printf("%d ",arr[i]);
	}
	
	printf("\nnhap vao so can tim: ");
	scanf("%d",&item);
	int start=0;
	int end = length-1;
	int mid;
	flag=-1;
	
	while(start<=end){
		mid=(start+end)/2;
		if(arr[mid]>item){
			end=mid-1;
			flag++;
		}else if(arr[mid]<item){
			start=mid+1;
			flag++;
		}else{
			printf("phan tu %d co vi tri %d",item,mid);
			break;
		}
	}
	if(flag==-1){
	printf("khong co phan tu trong mang");
	}
	
	return 0;
}
