#include <stdio.h>

void selectionsort(int arr[],int n){
	int i,j,temp,min;
	
	for(i=0;i<n-1;i++){
		min=i;
		
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		
		if(min != i){
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
	
	
}

int main(){
	int i,j,n,temp,arr[25];
	
	printf("no of element: ");
	scanf("%d",&n);
	
	printf("enter the values: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
    selectionsort(arr,n);
	
	printf("sorted values: ");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	
	
	
	return 0;
}

