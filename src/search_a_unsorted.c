#include "search_a_unsorted.h"

unsigned char search_a_unsorted(uintptr_t low, uintptr_t high, int *haystack,
                                int needle, uintptr_t *position) {
  if (needle == haystack[high]) {
    *position = high;
    return 1;
  }

  high = (high | 1) ^ 1;

  while (low < high) {
    if (needle == haystack[high]) {
      *position = high;
      return 1;
    }

    if (needle == haystack[high - 1]) {
      *position = high - 1;
      return 1;
    }

    high -= 2;
  }

  if (needle == haystack[low]) {
    *position = low;
    return 1;
  }

  return 0;
}
