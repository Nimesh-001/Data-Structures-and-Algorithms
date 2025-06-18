#include <stdio.h>

int main(){
	int i,j,k,n,temp,arr[25];
	
	printf("no of element: ");
	scanf("%d",&n);
	
	printf("enter the value: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(k=1;k<n;k++){
		temp=arr[k];
		j=k-1;
		
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	
	
	printf("sorted values: ");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	
	
	return 0;
}
