/*****************************************************************************
 * Starter Code for Lab 12
 * Spring 2023
 * by Jim Ries
 *****************************************************************************/

// Include files - do you need others?
#include <stdio.h>
#include "fight.h"
#include <stdlib.h> //for using malloc and getting string sizes
#include <string.h> //for comparing strings

// Main
int main(int argc, char * argv[])
{
	// Uncomment the following line if you want random (different every time) fights
	//SetSeed(0);


	// *********************************************************************************
	// Remove or comment out the following 3 lines for your real program
	// These lines just show a sample fight without reading any data form the file
	// This is only for testing
	// Combatant JimR={"JimR",21,900,10,"5d6+5","5d12+5"};
    // Combatant Lar={"Dr. Lawrence D. Ries",5,100,5,"1d6","N/A"};
	// Fight(JimR,Lar);
	// *********************************************************************************

	// printf("%d\n", argc);			testing
	// for(int i= 0; i<argc; i++)
	// {
	// 	printf("%s\n", argv[i]);
	// }								testing ended
	FILE * fp = fopen(argv[1], "r");//r for reading files

	//printf("argv[1] = %s\n", argv[1]); more testing

	// If you use fscanf() to read data from the file, this formate string might be helpful:
	// " %[^,], %d, %d, %d, %[^,], %s"
	// char* name=malloc(sizeof(char)*256);
	char name[256];
	int ac,hp,hitbonus;
	char attack1damage[256];
	char attack2damage[256];

	fgets(name, 100, fp);
	Combatant comb1;
	Combatant comb2;
	comb1.ac = 0;
	comb2.ac = 0;	
	printf("%d%d\n\n", comb1.ac, comb2.ac);

	while(!feof(fp))
	{
		fscanf(fp,"%[^,], %d, %d, %d, %[^,], %s", name, &ac, &hp, &hitbonus, attack1damage, attack2damage);

		while((int)name[0]< 65){
			for (int i = 1; i < 256; ++i)
  				name[i-1] = name[i];
		}; //A is 65
		if(strcmp(name, argv[2]) == 0)
		{
			comb1.ac = ac;
			comb1.hp = hp;
			comb1.hitbonus = hitbonus;
			strcpy(comb1.attack1damage, attack1damage);
			strcpy(comb1.attack2damage, attack2damage);
			strcpy(comb1.name, name);
			break;
		}
	}
	while(!feof(fp))
	{
		fscanf(fp,"%[^,], %d, %d, %d, %[^,], %s", name, &ac, &hp, &hitbonus, attack1damage, attack2damage);

		while((int)name[0]< 65){
			for (int i = 1; i < 256; ++i)
  				name[i-1] = name[i];
		};  //A is 65
		if(strcmp(name, argv[3]) == 0)
		{
			comb2.ac = ac;
			comb2.hp = hp;
			comb2.hitbonus = hitbonus;
			strcpy(comb2.attack1damage, attack1damage);
			strcpy(comb2.attack2damage, attack2damage);
			strcpy(comb2.name, name);
			// comb2.attack1damage = attack1damage;
			// comb2.attack2damage = attack2damage;
			// comb2.name= name;
			break;
		}
	}
	Fight(comb1, comb2);
}