/* 
We will use divide and conquer Method to solve Binary Search problem.
*/
#include<stdio.h>
int BinarySearch(int arr[],int l,int h,int key){
	if(l==h){
		if(arr[l]==key){
			return l;
		}
		else{
			return -1;
		}
	}
	else{
		int mid=(l+h)/2;
		if(arr[mid]==key){
			return mid;
		}
		else{
			if(arr[mid]>key){
				return BinarySearch(arr,l,mid-1,key);
			}
			else{
				return BinarySearch(arr,mid+1,h,key);
			}
		}
	}
	
}
int main(){
	int a[10],key,i,n,B;
	printf("How many elements you want:");
	scanf("%d",&n);
	printf("Enter %d no of elements in sorted order:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Please Enter the element you want to Search from the array:");
	scanf("%d",&key);
	B=BinarySearch(a,0,n-1,key);
	if(B>=0)
		printf("Your Element is Found and the position is %d ",B+1);
	else
		printf("Your Element is not Found in the Array");
}
