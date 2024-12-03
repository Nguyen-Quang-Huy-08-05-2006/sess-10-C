#include <stdio.h>

int main(){
	int arr[100][100],i,j,t,row,col,save;
	printf("vui long nhap vao so hang: ");
	scanf("%d",&row);
	printf("vui long nhap vao so cot: ");
	scanf("%d",&col);
	if(row!=col){
		printf("so hang khong bang so cot");
		return 0;
	}
	i=0;
	while(i<row){
		j=0;
		while(j<col){
			printf("vui long nhap vi tri [%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
			j++;
		}
		i++;
	}
	i=0;
	while(i<col-1){
		j=0;
		while(j<col-i-1){
			if(arr[j][col-j-1]>arr[j+1][col-j-2]){
				save=arr[j][col-j-1];
				arr[j][col-j-1]=arr[j+1][col-j-2];
				arr[j+1][col-j-2]=save;
			}
			j++;
		}
		i++;
	}
	i=0;
	printf("Ma tran\n");
	while(i<row){
		j=0;
		while(j<col){
			if(i==col-j-1){
				printf("[%d] ",arr[i][j]);
			}else{
				printf("%d ",arr[i][j]);
			}
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
