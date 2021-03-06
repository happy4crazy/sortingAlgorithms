#include "vector.h"
#include "utils.h"
#include "bubblesort.h"

Vector* bubbleSort(Vector *vector) {
  int sorted;
  int i;
  do {
    sorted = 1;
    for (i = 0; i < vector->length-1; ++i) {
      if (vector->numbers[i] > vector->numbers[i+1]) {
        swap(&vector->numbers[i], &vector->numbers[i+1]);
        sorted = 0;
      }
    }
  } while (!sorted);
  return vector;
}
