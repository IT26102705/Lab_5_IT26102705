#include <stdio.h>

int main(void)
{
    char os;

    for (int k = 1; k <= 5; k++)
    {
        printf("Enter the order status :\n");
        scanf(" %c", &os); 

        if (os == 'V' || os == 'v')
        {
            printf("Processing order %d\n", k);
	    printf("\n");
        }
        else if (os == 'I' || os == 'i')
        {
            printf("Skipping order %d\n", k);
	    printf("\n");
            continue; // Skips to the next part of the loop
        }
        else if (os == 'S' || os == 's')
        {
            printf("Stopping at order %d\n", k);
	    printf("\n");
            break; // Exits the loop 
        }
	else 
	{
		printf("Invalid order command\n");
		printf("\n");
	}
    }

    return 0;
}
