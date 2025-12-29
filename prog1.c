// develop an calendar of an array of 7 elements a dynamically created array to represent 
// 7 days a week . each element of the array is a structure having three fields . The first 
// field is the name of the day(a dynamically allocated string),the second field is the date of 
// the day ( an integer) the third field is the description of the activity for a particular day 
// . write fn create , read , display to create the calendar to read the data from the keyword and 
// print weeks activity details report on screen


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct day{
    char *name;
    int date;
    char *activity;

};

int n;
struct day *cal;

void create(){
    cal = (struct day*)malloc(n * sizeof(struct day));
    for(int i=0;i<n;i++){
        cal[i].name = (char *)malloc(20 * sizeof(char));
        cal[i].activity = (char *)malloc(100 * sizeof(char));
    }
}



void read(){
    for(int i=0;i<n;i++){
        printf("Enter name of day: ");
        scanf("%s", cal[i].name);
        printf("Enter date: ");
        scanf("%d", &cal[i].date);
        printf("Enter activity: ");
        scanf("%s", cal[i].activity);
            }
                        }


    void display(){
        printf("Weekly Activity Report:\n");
        for(int i=0;i<n;i++){
            printf("Day: %s, Date: %d, Activity: %s\n", cal[i].name, cal[i].date, cal[i].activity);
        }
    }


int main(){
    printf("Enter number of days in the week (7): ");
    scanf("%d", &n);        
    create();
    read();
    display();
for(int i=0;i<n;i++){
    free(cal[i].name);
    free(cal[i].activity);
}
    free(cal);
    return 0;
}






// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define DAYS 7

// struct Day {
//     char *name;
//     int date;
//     char *work;
// };

// struct Day* create() {
//     struct Day *w = malloc(DAYS * sizeof(struct Day));
//     for (int i = 0; i < DAYS; i++) {
//         w[i].name = malloc(20);
//         w[i].work = malloc(100);
//     }
//     return w;
// }

// void read(struct Day *w) {
//     for (int i = 0; i < DAYS; i++) {
//         printf("\nDay %d\n", i + 1);
//         printf("Name: ");
//         scanf("%s", w[i].name);
//         printf("Date: ");
//         scanf("%d", &w[i].date);
//         printf("Activity: ");
//         getchar();
//         fgets(w[i].work, 100, stdin);
//         w[i].work[strcspn(w[i].work, "\n")] = '\0';
//     }
// }

// void display(struct Day *w) {
//     printf("\n--- Weekly Activity Report ---\n");
//     for (int i = 0; i < DAYS; i++)
//         printf("\n%s (%d): %s", w[i].name, w[i].date, w[i].work);
// }

// int main() {
//     struct Day *week = create();
//     read(week);
//     display(week);

//     for (int i = 0; i < DAYS; i++) {
//         free(week[i].name);
//         free(week[i].work);
//     }
//     free(week);
//     return 0;
// }
