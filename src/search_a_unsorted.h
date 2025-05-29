#ifndef SEARCH_A_UNSORTED_H
#define SEARCH_A_UNSORTED_H

#include <stdint.h>

unsigned char search_a_unsorted(uintptr_t low, uintptr_t high, int *haystack,
                                int needle, uintptr_t *position);

#endif
