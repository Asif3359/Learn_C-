#include <iostream>

using namespace std;

// Function to resize the array
int *resizeArray(int *oldArray, int oldSize, int newSize)
{
    int *newArray = new int[newSize];
    for (int i = 0; i < oldSize; i++)
    {
        newArray[i] = oldArray[i];
    }
    delete[] oldArray;
    return newArray;
}

int main(int argc, char const *argv[])
{
    int size = 5;
    int *array = new int[size];

    // Initializing the array
    for (int i = 0; i < size; i++)
    {
        array[i] = i;
    }

    // Print the initial array
    cout << "Initial array: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // Resize the array to hold more elements
    int newSize = 10; // New size, larger than the initial size
    array = resizeArray(array, size, newSize);

    // Adding new elements to the resized array
    for (int i = size; i < newSize; i++)
    {
        array[i] = i * 2; // Example of adding new elements
    }

    // Print the resized array with new elements
    cout << "Resized array: ";
    for (int i = 0; i < newSize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array;
    return 0;
}
