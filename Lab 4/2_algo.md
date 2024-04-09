# Patching array :

Iterate Through nums Vector:
The algorithm iterates through the nums vector.
It keeps track of the range [1, sum] which is currently covered, initialized with [1, 0].

Updating Range and Answer:
For each number in the sequence:
If the next number in the sequence is present in nums, it extends the range by updating the sum.
If not, it patches the sequence by adding the next number to the sum (which is sum+1) and increments the answer.

Efficiently Covering All Numbers:
The algorithm ensures that all numbers from 1 to n are covered efficiently using the numbers in the nums vector.
This approach leverages the fact that nums is sorted and avoids redundant additions.
This algorithm efficiently determines the minimum number of patches required to cover all numbers from 1 to n using the given sequence nums. It avoids redundant additions by leveraging the sorted nature of nums.