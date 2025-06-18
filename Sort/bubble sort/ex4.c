#include <stdio.h>

int main(){
	int i,j,n,temp,arr[25];
	
	printf("no of element: ");
	scanf("%d",&n);
	
	printf("enter the value: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	
	printf("sorted values: ");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	
	
	
	return 0;
}
