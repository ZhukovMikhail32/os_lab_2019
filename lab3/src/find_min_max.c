#include "find_min_max.h"

#include <limits.h>

struct MinMax GetMinMax(int *array, unsigned int begin, unsigned int end) {
  int min = INT_MAX;
  int max = INT_MIN;

  struct MinMax min_max;
   
  for(int i = begin; i < end; i++) { 
    if(array[i] < min_max.min) 
      min_max.min = array[i];
    if(array[i] > min_max.max)
      min_max.max = array[i];
  }
  return min_max;
}