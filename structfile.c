// File Handling Using Structure
#include<stdio.h>
struct book {
    char title[100];
    char author[100];
    int price;
};

int main() {
    int i, n;
    FILE *fp;

    fp = fopen("Test1.txt", "w");

    if (fp == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    printf("Enter number of books: ");
    scanf("%d", &n);

    struct book s[n]; // Declare an array of books

    for (i = 0; i < n; i++) {
        printf("Enter title: ");
        scanf("%s", s[i].title);
        printf("Enter author: ");
        scanf("%s", s[i].author);
        printf("Enter cost: ");
        scanf("%d", &s[i].price);

        // Write the book details to the file
        fprintf(fp, "%s\n%s\n%d\n", s[i].title, s[i].author, s[i].price);
    }

    fclose(fp); // Closes the file

    // Open the file in read mode
    fp = fopen("Test1.txt", "r");

    if (fp == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    printf("\nBooks in the file:\n");

    // Read and print the book details from the file
    while (fscanf(fp, "%s\n%s\n%d\n", s[i].title, s[i].author, &s[i].price) != EOF) {
        printf("Title: %s\nAuthor: %s\nPrice: %d\n\n", s[i].title, s[i].author, s[i].price);
    }

    fclose(fp); // Closes the file

    return 0;
}