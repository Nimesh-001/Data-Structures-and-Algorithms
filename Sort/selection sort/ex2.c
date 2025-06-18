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
