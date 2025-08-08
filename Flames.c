#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0, n, m;
    char name1[50], name2[50];
    char max[50] = {0};

    printf("Enter first name: ");
    scanf("%s", name1);

    printf("Enter second name: ");
    scanf("%s", name2);

    n = strlen(name1);
    m = strlen(name2);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (name1[i] == name2[j] && max[j] == 0)
            {
                count++;
                max[j] = 1;
                break;
            }
        }
    }

    int v = n + m - 2 * count;
    char box[] = "FLAMES";
    char original[] = "FLAMES";
    int x = strlen(box);
    int index = 0;

    while (x > 1)
    {
        index = (v + index - 1) % x;
        printf("Character %c is deleted\n", box[index]);
        for (int i = index; i < x - 1; i++)
        {
            box[i] = box[i + 1];
        }
        box[x - 1] = '\0';
        x--;
    }

    for (int i = 0; i < 6; i++)
    {
        if (original[i] == box[0])
        {
            switch (i)
            {
                case 0:
                    printf("Friends\n");
                    break;

                case 1:
                    printf("Lovers\n");
                    break;

                case 2:
                    printf("Affection (Crush)\n");
                    break;

                case 3:
                    printf("Marriage\n");
                    break;

                case 4:
                    printf("Enemy\n");
                    break;

                case 5:
                    printf("Siblings\n");
                    break;
            }
            break;
        }
    }

    return 0;
}
