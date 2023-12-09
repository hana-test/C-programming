#include <stdio.h>

int main() {
  int arr[] = {45, 98, 3, 55, 9};
  int i, n;

  n = sizeof(arr) / sizeof(int);

  printf("Number of elements: %d\n", n); // Print the number of elements

  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]); // Print each element with a space
  }

  printf("\n"); // Print a newline character at the end

  return (0);
}