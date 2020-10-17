#include <stdio.h>

int main()

{

    int array[100], ch,n, c, d, position, t,swap,flag=0;

    printf("Enter number of elements: ");

    scanf("%d", &n);

    printf("Enter %d integers: ", n);

    for (c = 0; c < n; c++)

        scanf("%d", &array[c]);

    printf("Choose the type of sorting method to use:\n");

    printf("1.Bubble Sort\n");

    printf("2.Insertion Sort\n");

    printf("3.Selection Sort\n");

    printf("Enter your choice: ");

    scanf("%d",&ch);

    switch(ch)

    {

    case 1:

        for (c = 0; c < (n - 1); c++) // finding minimum element (n-1) times

        {

            position = c;

            for (d = c + 1; d < n; d++)

            {

                if (array[position] > array[d])

                    position = d;

            }

            if (position != c)

            {

                t = array[c];

                array[c] = array[position];

                array[position] = t;

            }

        }

        printf("Sorted list in ascending order:\n");

        for (c = 0; c < n; c++)

            printf("%d\n", array[c]);

        break;

    case 2:

        for (c = 1 ; c <= n - 1; c++) {

            t = array[c];

            for (d = c - 1 ; d >= 0; d--) {

                if (array[d] > t) {

                    array[d+1] = array[d];

                    flag = 1;

                }

                else

                    break;

            }

            if (flag)

                array[d+1] = t;

        }

        printf("Sorted list in ascending order:\n");

        for (c = 0; c <= n - 1; c++) {

            printf("%d\n", array[c]);

        }

        break;

    case 3:

        for (c = 0 ; c < n - 1; c++)

        {

            for (d = 0 ; d < n - c - 1; d++)

            {

                if (array[d] > array[d+1])

                {

                    swap       = array[d];

                    array[d]   = array[d+1];

                    array[d+1] = swap;

                }

            }

        }

        printf("Sorted list in ascending order:\n");

        for (c = 0; c < n; c++)

            printf("%d\n", array[c]);

        break;

    default:

        printf("Invalid Choice");

    }

    return 0;

}

