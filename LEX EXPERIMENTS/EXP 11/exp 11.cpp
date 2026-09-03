#include <stdio.h>
#include <string.h>

struct Symbol
{
    char name[20];
    char type[20];
    int address;
};

int main()
{
    struct Symbol table[50];
    int n = 0, choice, i, found;
    char key[20];

    while (1)
    {
        printf("\n----- SYMBOL TABLE -----\n");
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Search\n");
        printf("4. Delete\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Symbol Name: ");
                scanf("%s", table[n].name);

                printf("Enter Symbol Type: ");
                scanf("%s", table[n].type);

                printf("Enter Address: ");
                scanf("%d", &table[n].address);

                n++;

                printf("Symbol Inserted Successfully.\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("Symbol Table is Empty.\n");
                }
                else
                {
                    printf("\nSymbol\tType\tAddress\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("%s\t%s\t%d\n",
                               table[i].name,
                               table[i].type,
                               table[i].address);
                    }
                }
                break;

            case 3:
                printf("Enter Symbol to Search: ");
                scanf("%s", key);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (strcmp(table[i].name, key) == 0)
                    {
                        printf("Symbol Found.\n");
                        printf("Name: %s\n", table[i].name);
                        printf("Type: %s\n", table[i].type);
                        printf("Address: %d\n", table[i].address);

                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                    printf("Symbol Not Found.\n");

                break;

            case 4:
                printf("Enter Symbol to Delete: ");
                scanf("%s", key);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (strcmp(table[i].name, key) == 0)
                    {
                        int j;

                        for (j = i; j < n - 1; j++)
                        {
                            table[j] = table[j + 1];
                        }

                        n--;
                        found = 1;

                        printf("Symbol Deleted Successfully.\n");
                        break;
                    }
                }

                if (found == 0)
                    printf("Symbol Not Found.\n");

                break;

            case 5:
                return 0;

            default:
                printf("Invalid Choice.\n");
        }
    }

    return 0;
}