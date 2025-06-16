#include <stdio.h>
#include <string.h>
  
struct Player
{
    int player_id;
    char name[20];
};
  
struct Team 
{
    char team_name[20];
    char country[20];

    struct Player p[3]; 
};

void display(struct Team t)
{
    printf("Team: %s\nCounty: %s\n", t.team_name, t.country);
    for (int i = 0; i < 3; i++)
    {
        printf("Player %d, Name: %s\n", t.p[i].player_id, t.p[i].name);
    }
}
  
int main()
{
    struct Team t;
    strcpy(t.team_name, "BLUES");
    strcpy(t.country, "INDIA");

    t.p[0].player_id = 0;
    strcpy(t.p[0].name, "M. S. Dhoni");

    t.p[1].player_id = 1;
    strcpy(t.p[1].name, "Harmanpreet Kaur");

    t.p[2].player_id = 2;
    strcpy(t.p[2].name, "Smriti Mandhana");

    printf("\n\tStruct T\n");
    display(t);

    struct Team t2 = t;
    printf("\n\tStruct T2\n");
    display(t);

    return 0;
}