## Minimum integers : 

Iterating through the Number:
Iterate through each digit of the input number.
If the current digit is smaller than the top of the stack and k is greater than 0, it means we can remove a larger digit from the stack to make the number smaller. This is done in a while loop until the stack is not empty, the current digit is smaller than the top of the stack, and k is greater than 0.
If the stack is empty and the current digit is '0', skip this digit to avoid leading zeros in the final number.
Otherwise, push the current digit onto the stack.

Removing Extra Digits:
If there are still digits to remove after the iteration (k > 0), pop elements from the stack. This step ensures that if the input number is already in ascending order, we remove the largest digits from the end.

Building the Final Answer:
The remaining elements in the stack represent the smallest number possible, but in reverse order. Pop each element and add it to the ans string.
Finally, reverse the ans string to get the smallest number in the correct order.