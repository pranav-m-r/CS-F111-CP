/*
Print all vowels with positions in a character array.

Input = {'A', 'R', 'N', 'A', 'B'}
Output: A found in positions: 1, 4

Input = {'A', 'R', 'I', 'A', 'E', 'S'}
Output: A found in positions: 1, 4
        E found in positions: 5
        I found in positions: 3

Input = {'R', 'N', 'B'}
Output: No vowels found
*/

#include<stdio.h>

void vowel(char a[], int l)
{
    char v[5] = {'A', 'E', 'I', 'O', 'U'};
    int flag = 0;
    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        for(int j = 0; j < l; j++)
        {
            if(v[i] == a[j])
            {
                ++count;
                if(count == 1)
                    printf("\n%c found in positions: %d", v[i], j+1);
                else if(count > 1)
                    printf(", %d", j+1);
                flag = 1;
            }
        }
    }   
    if(flag == 0)
        printf("\nNo vowels found\n");
}

int main()
{

	int len;

	printf("Enter length of the array: ");
	scanf("%d",&len);

	char arr[len];

	for(int i = 0; i < len; i++)
	{
		printf("Enter capital character %i: ", i);
		scanf(" %c", &arr[i]);
	}

	for(int i = 0; i<len; i++)
	{
		printf("%c ", arr[i]);
	}

    vowel(arr,len);

    printf("\n");

	return 0;
}