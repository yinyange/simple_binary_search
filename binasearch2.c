/* binsearch: find x in v[0] <= v[1] <= ... <= v[n1]
*/
#include <stdio.h>

int binarySearch(int x, int v[], int length)
{
    int low = 0; //g++中可以直接写 int low(0)
    
    int high = length - 1;
    int middle = (low+high)/2;
    while (low <= high && x != v[middle]) 
    {
        if (x < v[middle])
        {
            high = middle - 1;
        }
        else
        {
            low = middle + 1;
        }
        middle = (low + high)/2;
    }
    if (x == v[middle])
    {
        return middle;  /* found match */
    }
    else
    {
        return -1;   /* no match */
    }
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int c = getchar();
    int x = c - '0';
    int result = binarySearch(x, numbers, 10);
    printf("%3d\n", result);
    return 0;
}
    
    
