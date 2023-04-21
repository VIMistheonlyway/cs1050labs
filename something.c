 /*****************************************************************************
  2  * Prelab 11
  3  * CS1050
  4  * Spring 2023
  5  * Start Code by Jim Ries
  * Functions by Corbin Shanks
  *****************************************************************************/
 #include <stdio.h>
 #include <string.h>
 
 struct _Movie
 {
     char title[256];
     long gross;
     int year;
 };
 typedef struct _Movie Movie;
 
 void bubbleSort();
 void printArray();
 
 void bubbleSort(Movie movies[], int s)
 {
     char temp[100];
     for (int i = 0; i < s; i++)
     {
         for (int j = i + 1; j < s; j++)
         {
            if (strcmp(movies[i].title, movies[j].title) > 0) {
                 strcpy(temp, movies[i].title);
                 strcpy(movies[i].title, movies[j].title);
                 strcpy(movies[j].title, temp);
             }
         }
     }
 }
 
 void printArray(Movie movies[], int s)
 {
     printf("%28s%32s%32s\n", "Title", "Gross", "Year");
     for (int i = 0; i < s; i++)
     {
         printf("%28s\t%28ld\t28%d\n", movies[i].title, movies[i].gross, movies[i].year);
     }
 }
 
 int main(void)
 {
    Movie movies[] =
    {
         {"Gone_with_the_Wind", 3713000000, 1939},
         {"Avatar", 3263000000, 2009},
         {"Titanic", 3087000000, 1997},
         {"Star_Wars", 3049000000, 1977},
         {"Avengers:_Endgame", 2798000000, 2019},
         {"The_Sound_of_Music", 2554000000, 1965},
       {"E.T._the_Extra-Terrestrial", 2493000000, 1982},
         {"The_Ten_Commandments", 2361000000, 1956},
         {"Doctor_Zhivago", 2238000000, 1965},
         {"Star_Wars:_The_Force_Awakens", 2206000000, 2015},
         {"Snow_White", 2150000000, 1937},
         {"Jurassic_Park", 2100000000, 1993},
         {"Jaws", 2100000000, 1975},
         {"Avengers:_Infinity_War", 2050000000, 2018},
         {"The_Exorcist", 2000000000, 1973},
     };
  
      int size = sizeof(movies)/sizeof(movies[0]);
      printArray(movies, size);
      bubbleSort(movies, size);
      printf("\n\nMovies in Alphabetical order:\n");
      printArray(movies, size);
  }