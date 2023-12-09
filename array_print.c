#include <stdio.h>

int main () {
    int arr[] = {22, 3, 88, 66, 0};
    int i,n;
    n = sizeof(arr)/sizeof(int);
    for (i = 0;i<n; i++)
        {
        printf("%d ", arr[i]);         // Add a space after each element
        }
    printf("\n");                      // Print a newline character at the end
    return(0);
}