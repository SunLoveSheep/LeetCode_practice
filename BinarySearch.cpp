/*
2016.3.2 practice of binary search function
the int BinarySearch will read the sorted array, length of the array and the target to find and do the binary search
Testing cases:
1. All positive numbers array;
2. All negative numbers array;
3. Positive and negative array;
4. Array with length of even and odd;
5. Array with length of 2, 1, and 0;
6. Target locates at the first, last, and middle of the array.
*/

#include <iostream>

using namespace std;

//binary search function, SortedArr is the sorted array, len is the length, tar is the target
int BinarySearch(int *SortedArr, int len, int tar)
{
	//first, check if the array is empty. If so, return a message and -1
	if (len == 0)
	{
		cout<<"Sorted Array is empty!"<<endl;
		return -1;
	}
	
	//initiate left and right end and the middle position.
	int left = 0, right = len;
	int mid = (int)((right+left)/2);
  
  //start search.
	while (left < right)
	{
		//update left, right position, and middle position accordingly.
		if (tar < SortedArr[mid])
			right = mid;
		else if (tar > SortedArr[mid])
			left = mid;
		else
			return mid;// when target equal to SortedArr[mid], return middle position.
		mid = (int)((right+left)/2);
	}
  
  //After the loop, left and right position converge to the final position, which means the target is not found other than this final position.
  //Need to check if this final position contains the target of not.
	if (SortedArr[mid] != tar)
	{
		cout<<"Target does not exist in the sorted array."<<endl;
		return -1;
	}
	else
		return mid;
}

int main()
{
	int arr[7] = {-10,-8,-5,-3,-2,-1,0};
	//int arr[9] = {1,2,4,5,7,8,9,10,11};
	//int arr[2] = {6,8};
	//int *arr = new int[0];
	int Target = -10;
	int Mid = 0;
	Mid = BinarySearch(arr,7,Target);

	cout<<"Result Mid: "<<Mid<<endl;
	if (Mid != -1)
		cout<<"Target: "<<arr[Mid]<<endl;

	getchar();
	return 0;
}
