#include<stdio.h>

struct bowler
{
    char name[20];
    char country_code[4];
    int wickets;
    int num_5wkts;
};

void print_info(struct bowler list[], int l)
{
    for (int i = 0; i < l; ++i) 
    {
        //struct bowler b = list[i];
        printf("Bowler %d: \n", i+1);
        printf("Name: %s\nCountry: %s\n", list[i].name, list[i].country_code);
        printf("Wickets: %d\nNum 5 Wickets: %d\n\n", list[i].wickets, list[i].num_5wkts);
    }
}

int main()
{
    const int LENGTH = 2;
    struct bowler b[LENGTH];

    for(int i = 0; i < LENGTH; i++)
    {
        printf("Enter player's data: ");
        scanf("%s %s %d %d", b[i].name, b[i].country_code, &b[i].wickets, &b[i].num_5wkts);
    }
    print_info(b, LENGTH);
    return 0;
}