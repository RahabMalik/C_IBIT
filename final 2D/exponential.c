#include <stdio.h>
#include <math.h>

int main()
{
    double A[2][2] = {{2, 2}, {2, 2}};
    double result[2][2] = {{1, 0}, {0, 1}}; // Initialize result as the identity matrix
    int terms = 10;                         // Number of terms in the series, increase for better accuracy

    double term[2][2];
    double factor;

    for (int i = 1; i <= terms; i++)
    {
        // Calculate the i-th term
        factor = 1.0;
        for (int j = 1; j <= i; j++)
        {
            factor *= j;
        }

        // Calculate A^i and store it in 'term'
        term[0][0] = A[0][0];
        term[0][1] = A[0][1];
        term[1][0] = A[1][0];
        term[1][1] = A[1][1];

        for (int j = 2; j <= i; j++)
        {
            double temp[2][2];
            temp[0][0] = A[0][0] * term[0][0] + A[0][1] * term[1][0];
            temp[0][1] = A[0][0] * term[0][1] + A[0][1] * term[1][1];
            temp[1][0] = A[1][0] * term[0][0] + A[1][1] * term[1][0];
            temp[1][1] = A[1][0] * term[0][1] + A[1][1] * term[1][1];
            term[0][0] = temp[0][0];
            term[0][1] = temp[0][1];
            term[1][0] = temp[1][0];
            term[1][1] = temp[1][1];
        }

        // Add the term to the result matrix
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                result[j][k] += (factor / term[j][k]);
            }
        }
    }

    printf("Exponential Matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%lf ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
