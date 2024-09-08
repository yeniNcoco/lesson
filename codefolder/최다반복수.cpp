#include <iostream>
using namespace std;
int main(){

int nums[] = {7, 12, 9,9,9, 15, 19,9, 32, 56, 70}; // Declaration and initialization of an integer array
    int n = sizeof(nums)/sizeof(nums[0]); // Determining the number of elements in the array

    cout << "Original array: "; // Output message indicating the original array is being displayed
    for (int i=0; i < n; i++) 
        cout << nums[i] <<" "; // Output each element of the array
      int i, first, second, third; // Declaration of integer variables

    /*third = first = second = INT_MAX; // Initializing first, second, and third as minimum integer value
    for (i = 0; i < n; i ++) // Loop to find three largest elements in the array
    {
        if (nums[i] < first) // Checking if current element is larger than the first largest element
        {
            third = second; // Updating third largest element
            second = first; // Updating second largest element
            first =nums[i]; // Updating first largest element
        }
        else if (nums[i] < second) // Checking if current element is larger than the second largest element
        {
            third = second; // Updating third largest element
            second = nums[i]; // Updating second largest element
        }
        else if (nums[i] < third) // Checking if current element is larger than the third largest element
        {
            third = nums[i]; // Updating third largest element
        }
    }

    cout << "\nThree smallest elements are: " << first << ", " << second << ", " << third; */

    int max_count = 0; // Variable to track the maximum occurrence count
    cout << "\nMost occurred number: "; // Output message to indicate displaying the most occurred number(s)

    // Loop to count occurrences and find the maximum occurrence count
    for (int i = 0; i < n; i++)
    {
        int count = 1; // Counter to track the occurrence of each number
        for (int j = i + 1; j < n; j++)
            if (nums[i] == nums[j]) // Checking if the element at index 'i' is equal to the element at index 'j'
                count++; // Incrementing the counter for the same elements

        if (count > max_count) // Checking if the current count is greater than the maximum count
            max_count = count; // Updating the maximum count with the new higher count
    }

    // Loop to output the number(s) with the maximum occurrence count
    for (int i = 0; i <n; i++)
    {
        int count = 1; // Counter to track the occurrence of each number
        for (int j = i + 1; j < n; j++)
            if (nums[i] == nums[j]) // Checking if the element at index 'i' is equal to the element at index 'j'
                count++; // Incrementing the counter for the same elements

        if (count == max_count) // Checking if the current count is equal to the maximum count
            cout << nums[i] << endl; // Output the number(s) with the maximum occurrence count
    }
    }