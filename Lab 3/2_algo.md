## Largest number : 
LargestNumber function takes a vector of integers inputs as input.
It creates a new vector nums to store the string representations of the numbers in inputs, using to_string(inputs[i]) for each element.
The function sorts the nums vector using a custom comparison function.
This custom function ([](string a, string b) { ... }) compares two strings a and b to determine their order in the sorted list.
The comparison logic prioritizes strings that would create a larger number when concatenated. It compares (a+b) with (b+a).
If (a+b) > (b+a), then a should come before b in the sorted list, because concatenating a and b creates a larger number.
By using this custom sorting, the function ensures numbers that would contribute to a larger overall number appear earlier in the sorted list.
After sorting, the function iterates through the nums vector and appends each string (representing a number) to a result string (result).
The final result string contains the numbers from the input arranged to form the largest possible number based on the custom sorting logic.