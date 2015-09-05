# StringPermutations
Algorithm to check if a string is a permutation of another string.

Will run in O(n) time where n is the number of characters in both strings.

I had debated using an array of boolean values to store each characters count,
but decided that keeping the time complexity down was more important that using 512 bytes.

This algorithm will only work on systems using 8-bit characters.

It will not work on strings over the size of 65536 characters (the unsigned short counters may overflow).
