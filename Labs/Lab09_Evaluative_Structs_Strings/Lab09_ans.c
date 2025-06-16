#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
Definition of Struct student 
*/
struct student
{
  char name[20];
  int rollno;
  int marks[2];
  int total;
};

/*
Display the names of the students starting from index 0 to (len-1).
*/
void display_names(struct student s[], int len)
{
  for(int i = 0; i < len; i++)
    printf("%s ", s[i].name);
  printf("\n");
}

/*
Display the roll numbers of the students starting from index 0 to (len-1).
*/
void display_rollno(struct student s[], int len)
{
  for(int i = 0; i < len; i++)
    printf("%d ", s[i].rollno);
  printf("\n");
}

/*
Display all information of all the students.
*/
void display(struct student s[], int len)
{
  for(int i = 0; i < len; i++)
  {
    printf("\nStudent %d\n", i+1);
    printf("Name: %s\n", s[i].name);
    printf("Roll no: %d\n", s[i].rollno);
    printf("Marks of Subject 1: %d\n", s[i].marks[0]);
    printf("Marks of Subject 2: %d\n", s[i].marks[1]);
    printf("Total: %d\n", s[i].total);
  }
}

/**
 * @brief Returns the number of names that start with a given character (key).
 * The comparison should be performed by ignoring the case of the key.
 * (That is, lower case 'a' and upper case 'A' should be treated the same)
 * 
 * Requires: The student names have no spaces. Can contain uppercase, lowercase characters and digits.
 * Names will start with either uppercase or lowercase characters.
 *
 * Example 1:
 *    Structure: {{"ABC", 1, {70, 80}, 150}, 
 *                {"ACD", 2, {50, 60}, 110}, 
 *                {"XYZ", 3, {75, 85}, 160}};
 *    key = 'A'
 *    Returns 2
 * 
 * Example 2:
 *    Structure: {{"ABC", 1, {70, 80}, 150}, 
 *                {"aCD", 2, {50, 60}, 110}, 
 *                {"XYZ", 3, {75, 85}, 160}};
 *    key = 'A'
 *    Returns 2
 * 
 * Example 3:
 *    Structure: {{"ABC", 1, {70, 80}, 150}, 
 *                {"aCD", 2, {50, 60}, 110}, 
 *                {"XYZ", 3, {75, 85}, 160}};
 *    key = 'Y'
 *    Returns 0
 */
int num_names(struct student s[], int len, char key)
{
  int count = 0;

  for(int i = 0; i < len; i++)
  {
    if(tolower(s[i].name[0]) == tolower(key))
      count++;
  }

  return count;
}

/**
 * @brief Arranges the students in the descending order of the total marks.
 * Needs to use Insertion Sort algorithm as described in the README.
 * Needs to call display_rollno(s, len) after every iteration.
 * 
 * Requires: The total marks for each student is different.
 *
 * Example 1:
 *    Structure: {{"ABC", 1, {70, 80}, 150}, 
 *                {"ACD", 2, {50, 60}, 110}, 
 *                {"XYZ", 3, {75, 85}, 160}};
 *    After 1st Iteration: 
 *          Structure: {{"ABC", 1, {70, 80}, 150}, 
 *                      {"ACD", 2, {50, 60}, 110}, 
 *                      {"XYZ", 3, {75, 85}, 160}};
 *    After 2nd Iteration: 
 *          Structure: {{"XYZ", 3, {75, 85}, 160},
 *                      {"ABC", 1, {70, 80}, 150}, 
 *                      {"ACD", 2, {50, 60}, 110}};
 * 
 * Example 2:
 *    Structure: {{"ABC", 1, {50, 60}, 110}, 
 *                {"aCD", 2, {70, 80}, 150}, 
 *                {"XYZ", 3, {75, 85}, 160}};
 *    After 1st Iteration: 
 *          Structure: {{"aCD", 2, {70, 80}, 150}, 
 *                      {"ABC", 1, {50, 60}, 110}, 
 *                      {"XYZ", 3, {75, 85}, 160}};
 *    After 2nd Iteration: 
 *          Structure: {{"XYZ", 3, {75, 85}, 160}, 
 *                      {"aCD", 2, {70, 80}, 150}, 
 *                      {"ABC", 1, {50, 60}, 110}};
 *    
 * Example 3:
 *    Structure: {{"XYZ", 1, {75, 85}, 160},
 *                {"ABC", 2, {70, 80}, 150}, 
 *                {"aCD", 3, {50, 60}, 110}};
 *    After 1st Iteration: 
 *          Structure: {{"XYZ", 1, {75, 85}, 160},
 *                      {"ABC", 2, {70, 80}, 150}, 
 *                      {"aCD", 3, {50, 60}, 110}};
 *    After 2nd Iteration: 
 *          Structure: {{"XYZ", 1, {75, 85}, 160},
 *                      {"ABC", 2, {70, 80}, 150}, 
 *                      {"aCD", 3, {50, 60}, 110}};
 */

void sort_descending(struct student s[], int len)
{
  for (int i = 1; i < len; i++) 
  {
    char key_name[20];
    int key_total = s[i].total;
    int key_rollno = s[i].rollno;
    int key_marks0 = s[i].marks[0];
    int key_marks1 = s[i].marks[1];
    strcpy(key_name, s[i].name);
    int j = i - 1;

    while (j >= 0 && s[j].total < key_total) 
    {
      s[j+1].total = s[j].total;
      strcpy(s[j+1].name, s[j].name);
      s[j+1].rollno = s[j].rollno;
      s[j+1].marks[0] = s[j].marks[0];
      s[j+1].marks[1] = s[j].marks[1];
      j--;
    }
    s[j+1].total = key_total;
    strcpy(s[j+1].name, key_name);
    s[j+1].rollno = key_rollno;
    s[j+1].marks[0] = key_marks0;
    s[j+1].marks[1] = key_marks1;
    display_rollno(s, len);
  }
}

/**
 * @brief Populates the given array of students with the user's input and returns the number of students.
 * 
 * TODO: Calculate the total marks for the student correctly.
 */

int get_input(struct student s[])
{
  int num;
  printf("Enter the number of students: ");
  scanf("%d", &num);

  for(int i = 0; i < num; i++)
  {
    printf("Student %d\n", i+1);
    printf("Enter Student Name, Roll no, Marks of Subject 1, and Marks of Subject 2:\n");
    scanf("%s", s[i].name);
    scanf("%d", &s[i].rollno);
    scanf("%d", &s[i].marks[0]);
    scanf("%d", &s[i].marks[1]);
    s[i].total = s[i].marks[0] + s[i]. marks[1];
  }

  return num;
}

int main()
{
  const int MAX_STUDENTS = 50;
  struct student s[MAX_STUDENTS];

  int num_students = get_input(s);

  //display(s, num_students);

  printf("This program supports TWO operations:\n");
  printf("\t1. Count the number of names starting with a given character,\n");
  printf("\t2. Sort the students based on descending order of total marks.\n\n");
  printf("Choose an operation (1 or 2): ");
  int operation = 0;
  scanf("%d", &operation);

  if(operation == 1)
  {
    char key;
    printf("Enter a character: ");
    scanf(" %c", &key);
    int count = num_names(s, num_students, key);
    printf("The number of names starting with character %c: %d\n", key, count);
  }

  else if(operation == 2)
  {
    sort_descending(s, num_students);
    display_names(s, num_students);
    printf("The highest marks: %d\n", s[0].total);
  }

  return 0;
}