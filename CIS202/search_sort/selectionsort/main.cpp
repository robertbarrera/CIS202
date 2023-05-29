#include <iostream>

using namespace std;

// TODO: Write a void function SelectionSortDescendTrace() that takes
//       an integer array and the number of elements in the array as arguments,
//       and sorts the array into descending order.

void PrintArray (int numbers[], int numElements){
    for (int i = 0; i < numElements; ++i){
        cout << numbers[i] << " ";
        if (i == numElements - 1){
            cout << endl;
        }
    }
}

void SelectionSortDescendTrace(int numbers [], int numElements) {
    int i, j, max, temp;
    for (i = 0; i < numElements - 1; ++i) {
        max = i;
        for (j = i + 1; j < numElements; ++j) {
            if (numbers[j] > numbers[max]) {
                max = j;
            }
        }
      
        temp = numbers[i];
        numbers[i] = numbers[max];
        numbers[max] = temp;
        PrintArray(numbers, numElements);
    }

    /*int i, j, temp;      // Temporary variable for swap
   
    for (i = 1; i < numElements; ++i) {
    //while(i < numElements){
        j = i;
        // Insert numbers[i] into sorted part
        // stopping once numbers[i] in correct position
        while (j > 0 && numbers[j] > numbers[j - 1]) {
         
         // Swap numbers[j] and numbers[j - 1]
            temp = numbers[j];
            numbers[j] = numbers[j - 1];
            numbers[j - 1] = temp;
            --j;
        }
        PrintArray(numbers, numElements);
    }*/

}


int main() {
    int input, i = 0;
    int numElements = 0;
    int numbers[10];
   
   // TODO: Read in a list of up to 10 positive integers; stop when
   //       -1 is read. Then call SelectionSortDescendTrace() function.
    while (numElements < 10){
        cin >> input;
        if(input == -1){
            break;
        }
        numbers[i] = input;
        ++i;
        ++numElements;
    }

    SelectionSortDescendTrace(numbers, numElements);

    return 0;
}