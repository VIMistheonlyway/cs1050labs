/*****************************************************************************
 * Lab 11
 * CS1050
 * Spring 2023
 * Ethan Anderson
 * ecary6
 * 4/21/23
 *****************************************************************************/
#include <stdio.h>
#include <string.h>

struct _Team
{
    char city[256];
    char name[256];
};
typedef struct _Team Team;

struct _Player
{
	char firstName[256];
    char lastName[256];
    long salary;
    Team team;
};
typedef struct _Player Player;

void bubblesort();//function prototype
void printArray();
void lsort();
void ssort();
void tsort();

void bubblesort(Player players[], int s)//the initial bubble sort will sort first names and the ones after will sort a multitude of different things
{
    int i, j;
    Player temp;

    for(i=0; i<s-1; i++)
    {
        for(j=0; j<s-1-i; j++)
        {
            if(strcmp(players[j].firstName,players[j+1].firstName)>0)
            {
                temp = players[j];
            	players[j]=players[j+1];
                players[j+1]=temp;
                j--;
            }
        }
    }
}

void lsort(Player players[], int s)
{
	int i, j;
    Player temp;

    for(i=0; i<s-1; i++)
    {
        for(j=0; j<s-1-i; j++)
        {
            if(strcmp(players[j].lastName,players[j+1].lastName)>0)//string comp will compare two strings
            {
                temp = players[j];
            	players[j]=players[j+1];
                players[j+1]=temp;
                j--;
            }
        }
    }
}

// void tsort(Player players[], int s)
// {
// 	int i, j;
//     Player temp;

//     for(i=0; i<s-1; i++)
//     {
//         for(j=0; j<s-1-i; j++)
//         {
//             if(strcmp(players[j].team.city,players[j+1].team.city)>0)
//             {
//                 temp = players[j];
//             	players[j]=players[j+1];
//                 players[j+1]=temp;
//                 j++;
//             }
//         }
//     }
// }
// extra function i did not need

void ssort(Player players[], int s) 
{
	int i, j;
    Player temp;

    for(i=0; i<s-1; i++)
    {
        for(j=0; j<s-1-i; j++)
        {
            if(players[j].salary > players[j+1].salary)//only one that uses int values to sort form lowest to highest
            {
                temp = players[j];
            	players[j]=players[j+1];
                players[j+1]=temp;
                j--;//must be decrement not increment
            }
        }
    }
}

void printArray(Player players[], int s)
{
    int i;
    printf("%s\t %s\t %s\t %s\t %s\n", "First Name", "Last Name", "Salary", "Team City", "Team Name");
    for (i = 0; i < s; i++)
    {
        printf("%-10s\t %-10s\t %ld %-10s\t %s\n", players[i].firstName, players[i].lastName, players[i].salary, players[i].team.city, players[i].team.name);
    } //spacing hurts
}

 int main(void)
 {
	Player players[] = 
    {
		{"Corey","Seager",32500000,{"Texas","Rangers"}},
		{"Stephen","Strasburg",35000000,{"Washington","Nationals"}},
		{"Gerrit","Cole",36000000, {"New York","Yankees"}},
		{"Mike","Trout",35500000, {"Los Angeles","Angels"}},
		{"Carlos","Correa",35100000,{"Minnesota","Twins"}},
		{"Anthony","Rendon",35000000,{"Los Angeles","Angels"}},
		{"Francisco","Lindor",34100000,{"New York","Mets"}},
		{"Trevor","Bauer",34000000,{"Los Angeles","Dodgers"}},
		{"Nolan","Arenado",32500000,{"St. Louis","Cardinals"}},
		{"Max","Scherzer",43300000,{"New York","Mets"}},
    };
	
	int s = sizeof(players)/sizeof(Player);
	
	printf("\nPlayers:\n");
    printArray(players, s);//need printarray for all functions!!!
	
	bubblesort(players, s);
	printf("\nPlayers by first name:\n");
    printArray(players, s);
	
	printf("\nPlayers by last name:\n");
	lsort(players, s);
	printArray(players, s);
	
	printf("\nPlayers by salary:\n");
	ssort(players, s);
	printArray(players, s);

	// printf("\nPlayers by Team:\n");
	// tsort(players, s);
	// printArray(players, s);
 }
