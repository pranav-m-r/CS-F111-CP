#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

/**
 * Returns the index at which the given `key` is found in the non-decreasing, non-empty array `nums` of size `length`. -1 if `key` is not found. It performs the search using a binary search algorithm and prints the index it is checking in each step.
 *
 * Requires: `nums` is non-decreasing, non-empty
 *          and `length` is the length of `nums`
 *
 * Examples:
 *   0 binary_search([7], 1, 7)
 *  -1 binary_search([7], 1, 6)
 *   1 binary_search([7, 9], 2, 9)
 *  -1 binary_search([7, 9], 2, 8)
 */
int binary_search(int nums[], int length, int key)
{
  // TODO implement the function
  int beg = 0, end = length-1, mid = 0;
  while (beg <= end)
  {
    mid = (beg + end) / 2;
    printf(" - Checking index %d\n", mid);
    if (nums[mid] == key)
      return mid;
    else if (nums[mid] < key)
      beg = mid + 1;
    else
      end = mid - 1;
  }
  return -1;
}

/**
 * Returns the number of vowels in the given string.
 *
 * Requires: `str` is non-empty and non-null
 *
 * Examples:
 *    1 count_vowels("RED")
 *    2 count_vowels("blue")
 *
 */
int count_vowels(char *str)
{
  int count = 0;
  char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  for (int i = 0; i < strlen(str); i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (str[i] == vowels[j])
        count++;
    }
  }
  return count; // TODO implement the function
}

/* --- DO NOT MAKE ANY CHANGES BEYOND THIS POINT --- */

/**
 * Gets the length of the array to be entered from the user.
 */
int get_arr_length()
{
  int length = 0;
  while (length <= 0)
  {
    printf("How many numbers do you want to enter (between 1 and %d)? ", MAX_LENGTH);
    scanf("%d", &length);
  }
  return length;
}

/**
 * Inputs `length` number of integers from the user into the given array.
 *
 */
void get_nums(int arr[], int length)
{
  for (int i = 0; i < length; ++i)
    scanf("%d", &arr[i]);
}

int main()
{
  printf("This program supports these operations:\n");
  printf("\t1. Search a key in a non-decreasing sequence of integers.\n\n");
  printf("\t2. Count the number of vowels in a string.\n\n");
  printf("Choose an operation: ");
  int operation = 0;
  scanf("%d", &operation);

  if (operation == 1)
  {
    int nums[MAX_LENGTH];
    int length = get_arr_length();
    printf("Enter %d integers in non-decreasing order (no duplicates): ", length);
    get_nums(nums, length);
    printf("Enter the key to search: ");
    int key;
    scanf("%d", &key);
    int index = binary_search(nums, length, key);

    printf("%d", key);
    if (index >= 0)
      printf(" found at index %d\n", index);
    else
      printf(" not found.\n");
  }
  else if (operation == 2)
  {
    printf("Enter a string: ");
    char str[MAX_LENGTH];
    scanf("%s", str);
    int ans = count_vowels(str);
    printf("%s has %d vowels\n", str, ans);
  }

  return 0;
}