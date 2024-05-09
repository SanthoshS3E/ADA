

#include <stdio.h>
#include <time.h>
int search(int array[], int n, int x) {


  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}

int main() {
  int array[] = {2, 4, 0, 1, 9};
  int x = 1;
  int n = sizeof(array) / sizeof(array[0]);
 clock_t t;
    t = clock();
int result = search(array, n, x);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds



  (result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
  printf("\nfunction took %f seconds to execute \n", time_taken);
}
