 STRING COMPRESSION:
 Consecutive repeating characters are replaced by:
1. The character itself
2. Followed by the count of repetitions (only if the count > 1)
3.The function returns the new length of the compressed array.

# Approach
i → scans through the original character array
idx → keeps track of the position where compressed characters are written
Steps:
1.Traverse the array using index i.
2.For each character:
Count how many times it appears consecutively.
3.Write the character to chars[idx].
4.If the count is greater than 1:
   Convert the count to a string.
   Write each digit of the count individually into the array.
5.Move to the next group of characters.
6.Resize the array to the final compressed length.

EXAMPLE
Input
chars = ["a","a","b","b","c","c","c"]

Output
["a","2","b","2","c","3"]

Return Value
6
