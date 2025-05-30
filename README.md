# Search A Unsorted

A fast, non-interpolated unsorted-list searching algorithm.

`search_a_unsorted()` is the searching function that searches for an element in a list of elements that are unsorted.

It accepts the following 5 arguments in left-to-right order.

1. `low` is the lowest index bound to search in `haystack`.
2. `high` is the highest index bound to search in `haystack` and must be greater than or equal to `low`.
3. `haystack` is the array of elements to search.
4. `needle` is the element to search for in `haystack`.
5. `position` is the pointer containing the index of the searched element.

When the return value is `1`, `position` contains the index of the found `needle`.

When the return value is `0`, a new index value isn't assigned to `position`.

It's in the same class as Linear Search.

Search A Unsorted is close to a lossless optimization with faster speed than Linear Search in all distributed instances that were tested.

It doesn't rely on specifically-distributed `haystack` values for heuristic, input-based calculations and it's substantially-faster than the worst instances of Linear Search.

It's the fastest unsorted-list search algorithm compared to unsorted-list searching algorithms that don't require input-based calculations across a wide range of data types and data, both randomized and uniform.

I welcome submissions of algorithms in the same class that challenge the aforementioned claim.

`if (needle == haystack[high])` ensures `needle` isn't contained within `haystack` at the `high` bound before decrementing the `high` bound.

`high = (high | 1) ^ 1` either decrements the `high` bound if it's an odd number or remains unchanged if it's an even number.

The aforementioned decrement aligns `high` and `low` to allow decrementing by `2` instead of `1`, resulting in a drastic reduction of both `low < high` comparisons and `high` bound assignments without the risk of `high -= 2` underflowing.

The `while (low < high)` loop is never infinite as the `high` bound must be greater than or equal to the `low` bound.

`if (needle == haystack[low])` ensures the final `low` bound is verified to accommodate for common instances of when `while (low < high)` evaluates to `0` before the `low` bound is verified.
