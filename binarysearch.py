

def binary_search(arr, search):
    low = 0
    high = len(arr) - 1
    while high >= low:            
        mid = (high + low) // 2
        if arr[mid] < search:     
            low = mid + 1
        elif arr[mid] > search:   
            high = mid - 1
        else:
            return mid           
    return -1 
 
n = int(input("Enter no of items: "))
arr = []
for i in range(0, n):
    ele = int(input("Items:"))
    arr.append(ele)
    arr.sort()
print("The sorted items are as following: ",arr)

search = int(input("Enter the item to be searched: "))

checking = binary_search(arr, search)
if(checking == -1):

    print("Item is not present in the given array")
else:  
    print("item is present at index", checking)