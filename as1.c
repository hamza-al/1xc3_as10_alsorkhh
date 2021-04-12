#include <stdio.h>

int main()
{
    float initmoney;
    float years;
    float rate;
    float yearly;
    float interest;
    do
    {
        printf("Enter initial investment amount: ");
        scanf("%f", &initmoney);
        if (initmoney < 0)
        {
            printf("initial investment must be positive\n");
        };

    } while (initmoney < 0);
    do
    {
        printf("Enter total years: ");
        scanf("%f", &years);
        if (years <= 0)
        {
            printf("initial investment must be more than zero\n");
        };

    } while (years <= 0);
    do
    {
        printf("Enter investment rate: ");
        scanf("%f", &rate);
        if (rate < 0)
        {
            printf("Rate must be positive\n");
        };

    } while (rate < 0);
    do
    {
        printf("Enter additional yearly investment: ");
        scanf("%f", &yearly);
        if (yearly < 0)
        {
            printf("Rate must be positive\n");
        };
        printf("\n");

    } while (yearly < 0);
    printf("%-10s %-20s %-20s %s", "Year", "Start Balance", "Interest", "End Balance\n");
    printf("%-75s\n", "***************************************************************************");
    for (int i = 1; i <= years; i++)
    {
        interest = (rate / 100 * initmoney);
        printf("%-10d %-20.2f %-20.2f %-20.2f\n", i, initmoney, interest, initmoney + interest);
        initmoney = initmoney + interest + yearly;
    }

    return 0;
}
