def BinarySearch(arr,l,h,key):
    if(l==h):
        if(arr[l] == key) : 
            return l
        else:
            return -1 
        
    else:
        mid = (l + h ) // 2
        # Check if key is present at the middle
        if arr[mid] == key: 
            return mid
        # If key is smaller than mid
        elif arr[mid] > key:
            return BinarySearch(arr, l, mid-1, key)
  
        # Else the key can only
        # be present in right subarray
        else:
            return BinarySearch(arr, mid+1, h, key)
# Testing code
# Test array 
arr = [2,3,4,10,40]  
key = 10 
low = 0
high = len(arr)-1
print("Index of",key,"is",BinarySearch(arr,low,high,key)+1) 
    