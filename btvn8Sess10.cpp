#include <stdio.h>

int main(){
	int arr[100][100],i,j,t,n,m,save;
	printf("nhap vao so hang: ");
	scanf("%d",&n);
	printf("nhap vao so cot: ");
	scanf("%d",&m);
	i=0;
	while(i<n){
		j=0;
		while(j<m){
			printf("nhap vi tri [%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
			j++;
		}
		i++;
	}
	i=0;
	while(i<n){
		t=0;
		while(t<m-1){
			j=0;
			while(j<m-t-1){
				if(arr[i][j]>arr[i][j+1]){
					save=arr[i][j];
					arr[i][j]=arr[i][j+1];
					arr[i][j+1]=save;
				}
				j++;
			}
			t++;
		}
		i++;
	}
	i=0;
	printf("Ma tran\n");
	while(i<n){
		j=0;
		while(j<m){
			printf("%d ",arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
