#include<stdio.h>

struct bowler
{
    char name[20];
    char country_code[4];
    int wickets;
    int num_5wkts;
};

void more_wickets(struct bowler b1, struct bowler b2)
{
    if (b1.wickets > b2.wickets)
        printf("%s has more wickets.\n", b1.name);
    else
        printf("%s has more wickets.\n", b2.name);
}

void report_5wkts(struct bowler b)
{
    printf("%s %s than 10, 5 wicket hauls.\n", b.name, b.num_5wkts >= 10 ? "took more" : "took less");
    //Ternary operator for conditional
}

int main()
{
    struct bowler b1 = {"Kallis", "SA", 577, 7};
    struct bowler b2 = {"Bumrah", "IND", 380, 12};

    more_wickets(b1,b2);
    report_5wkts(b1);
    report_5wkts(b2);

    return 0;
}