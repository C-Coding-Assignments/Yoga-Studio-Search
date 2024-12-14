
#include <stdio.h>

//macro definitions for the maximum length of names, emails, and maximum number of members
#define MAX__LENGTH 100
#define MAX_MEMBERS 200

//struct definition for Customer
struct Customer
{
    //members representing the customer's email, number of lessons attended, and name
    char email[MAX__LENGTH];
    int numLessons;
    char name[MAX__LENGTH];
} members[MAX_MEMBERS], results[MAX_MEMBERS];

//function definition for binary search algorithm to find customers with at least x lessons
int search(struct Customer[], int, int, struct Customer[]);

int main()
{
    //opening the input file, output file, and initializing variables
    FILE *fp1 = fopen("customers.csv", "r");
    FILE *fp2 = fopen("result.csv", "w");
    int userInput, numCustomers = 0, numValidCustomers;

    //checking if the input file was successfully opened
    if (fp1 == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    //reading the user input for x and storing it in userInput
    scanf("%d", &userInput);
    
    //reading the data from the input file and storing it in the members array
    while (!feof(fp1))
    {
        fscanf(fp1, "%[^,],%d,%[^\n]\n", members[numCustomers].email, &members[numCustomers].numLessons, members[numCustomers].name);
        numCustomers++;
    }

    //sorting the members array in ascending order based on the number of lessons attended
    numValidCustomers = search(members, numCustomers, userInput, results);

    //writing the results to the output file
    for (int i = 1; i < numValidCustomers; i++)
        fprintf(fp2, "%s, %d, %s\n", results[i].email, results[i].numLessons, results[i].name);

    //closing the input and output files
    fclose(fp1);
    fclose(fp2);

    return 0;
}


//binary search algorithm to find customers with at least x lessons
int search(struct Customer list[], int n, int num_lessons, struct Customer result[])
{
    //variable declaration and initialization
    int number = 0;

    //for loop which iterates over each customer
    for (int i = 0; i < n; i++)
        //selection statement which checks if customer y has attended more than x lessons, if so, store that customer in result
        if (list[i].numLessons > num_lessons)
            result[number++] = list[i];

    return number;
}
