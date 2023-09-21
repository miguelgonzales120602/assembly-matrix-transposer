// BASIC IMPLEMENTATION ONLY USING STDIO.H
// No dynamic memory allocation
// seperate functions for generating and displaying original and transposed matrices

#include <stdio.h>

void
display_matrix(int rows, int cols, int matrix[rows][cols])
{
        int i = 0;
        int j = 0;

        printf("\n");
        printf("ORIGINAL MATRIX");

        for(i = 0; i < rows; i++){
                for(j = 0; j < cols; j++){
                        if(j % cols == 0)
                                printf("\n");

                        printf("%d ", matrix[i][j]);
                }
        }
}

void
input_matrix(int rows, int cols, int matrix[rows][cols])
{
        int i = 0;
        int j = 0;

        for(i = 0; i < rows; i++){
                for(j = 0; j < cols; j++){
                      for(i = 0; i < rows; i++){
                                for(j = 0; j < cols; j++){
                                        printf("Enter element at row %d, column %d:", i, j);
                                        scanf("%d", &matrix[i][j]);
                                }
                        }
                }
        }
}

void
transpose_matrix(int rows, int cols, int matrix[rows][cols], int t_matrix[cols][rows])
{
        int i = 0;
        int j = 0;

        for(i = 0; i < rows; i++){
                for(j = 0; j < cols; j++){
                        t_matrix[j][i] = matrix[i][j];
                }
        }
}

void
display_t_matrix(int rows, int cols, int t_matrix[cols][rows])
{
        int i = 0;
        int j = 0;

        printf("\n");
        printf("TRANSPOSED MATRIX");

        for(i = 0; i < cols; i++){
                for(j = 0; j < rows; j++){
                        if(j % rows == 0)
                                printf("\n");

                        printf("%d ", t_matrix[i][j]);
                }
        }
}


int
main()
{
        int cols = 0;
        int rows = 0;


        printf("Enter number of rows: ");
        scanf("%d", &rows);

        printf("Enter number of columns: ");
        scanf("%d", &cols);

        int matrix[rows][cols];
        int t_matrix[cols][rows];

        input_matrix(rows, cols, matrix);

        display_matrix(rows, cols, matrix);

        transpose_matrix(rows, cols, matrix, t_matrix);

        display_t_matrix(rows, cols, t_matrix);

        printf("\n DEBUG: %d", matrix[0][0]);
        return 0;
}
