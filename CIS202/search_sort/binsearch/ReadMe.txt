Binary search can be implemented as a recursive algorithm. Each call makes a recursive call on one-half of the list the call received as an argument.

Complete the recursive function BinarySearch() with the following specifications:

Parameters:
a target integer
a vector of integers
lower and upper bounds within which the recursive call will search
Return value:
the index within the vector where the target is located
-1 if target is not found
The template provides the main program and a helper function that reads a vector from input.

The algorithm begins by choosing an index midway between the lower and upper bounds.

If target == integers.at(index) return index
If lower == upper, return -1 to indicate not found
Otherwise call the function recursively on half the vector parameter:
If integers.at(index) < target, search the vector from index + 1 to upper
If integers.at(index) > target, search the vector from lower to index - 1
The vector must be ordered, but duplicates are allowed.

Once the search algorithm works correctly, add the following to BinarySearch():

Count the number of calls to BinarySearch().
Count the number of times when the target is compared to an element of the vector. Note: lower == upper should not be counted.
Hint: Use a global variable to count calls and comparisons.

The input of the program consists of:

the number of integers in the vector
the integers in the vector
the target to be located
Ex: If the input is:

9
1 2 3 4 5 6 7 8 9
2
the output is:

index: 1, recursions: 2, comparisons: 3