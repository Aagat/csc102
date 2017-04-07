#include <stdio.h>

void main() {
    int m, n;

    printf("Enter the size of matrix you want to transpose. Rows x Columns: ");
    scanf(" %d %d", &n, &m);

    int a[n][m], at[m][n];

    for(int i=0; i<n; i++) {
        // Loops through each column
        for(int j=0; j<m; j++ ) {
            // Loops through each row
            printf("Enter element at %d x %d: ", i+1, j+1);
            scanf(" %d", &a[i][j]);
        }
    }

    // Transpose the matrix
    for(int i=0; i<m; i++) {
        // Loops through each row
        for(int j=0; j<n; j++) {
            // Loops through each column
            at[i][j] = a[j][i];
        }
    }

    // Print the matrix
    printf("\nThe original matrix is:\n");
    for(int i=0; i<n; i++) {
        // Loops through each column
        for(int j=0; j<m; j++ ) {
            // Loops through each row
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Print the transpose of the matrix
    printf("\nThe transpose of the matrix is:\n");
    for(int i=0; i<m; i++) {
        // Loops through each row
        for(int j=0; j<n; j++) {
            // Loops through each column
            printf("%d\t", at[i][j]);
        }
        printf("\n");
    }


}
