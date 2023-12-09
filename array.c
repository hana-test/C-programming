#include <stdio.h>

/*count of array element*/

int main() {
    int arr[] = {45, 98, 3, 55, 9};
    int n;
    n = sizeof(arr)/sizeof(int);
    printf("%d\n", n);     /* \n for print */
    return(0);
}