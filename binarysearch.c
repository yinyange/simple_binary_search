/* binsearch: find x in v[0] <= v[1] <= ... <= v[n1]
*/
#include <stdio.h>

int binarySearch(int x, int v[], int n)
{
	int low(0);
    int high = n - 1;
    int mid;
    
	while (low <= high) 
    {
		mid = (low+high)/2;
        if (x < v[mid])
		{    
            high = mid - 1;
        }
		else if (x > v[mid])
        {
            low = mid + 1;
        }
		else /* found match */
		{
            return mid;
        }
	}
	return -1;
	/* no match */
}

int main()
{
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    
    int c = getchar();
    int x = c - '0';
    int result = binarySearch(x, numbers, 10);
    printf("%3d\n", result);
    return 0;
}


