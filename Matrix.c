// // Matrix
 #include<stdio.h>
 int main(){
    int m,n,i,j;
    int a[100][100],b[100][100];

    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);
    
    printf("\nTaking Matrix from User\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter matrix A[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\n");
        for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter matrix B[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nMatrix A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B:\n");
        for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",b[i][j]);
        }
         printf("\n");
    }
}




// Transpose
 #include<stdio.h>
 int main(){
    int m,n,i,j;
    int a[100][100],b[100][100];

   printf("Enter the order of matrix: ");
    scanf("%d%d", &m, &n);
    
    printf("\nTaking Matrix from User\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter matrix A[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    int trans[100][100];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            trans[j][i]=a[i][j];
        }
    }
    printf("\nTranpose Matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",trans[i][j]);
        }
        printf("\n");
    }
 }



// Sum of Matrix
 #include<stdio.h>
 int main(){
    int m,n,i,j;
    int a[100][100],b[100][100];

    printf("Enter the order of matrix: ");
    scanf("%d%d", &m, &n);
    
    printf("\nTaking Matrix from User\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter matrix A[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
        for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter matrix B[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    int c[100][100];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
        printf("\nThe sum of the two matrices is:\n");

        for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",c[i][j]);
        }
         printf("\n");
    }
}


// //Multiplication of  Matrix
 #include<stdio.h>
 int main(){
    int m,n,i,j,k;
    int a[100][100],b[100][100];

    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);
    
    printf("\nTaking Matrix from User\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter matrix A[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\n");
        for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter matrix B[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nMatrix A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B:\n");
        for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",b[i][j]);
        }
         printf("\n");
    }

    int c[100][100];
    for(i=0;i<m;i++){

        for(j=0;j<n;j++){
            c[i][j]=0;
            for(k=0;k<n;k++)
            c[i][j]+=a[i][k]*b[k][j];
        }
    }
    printf("\nMultiplication:\n");
        for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",c[i][j]);
        }
         printf("\n");
    }
}


// Multiplication
#include<stdio.h>
int main() {
    int m, n, p, q, i, j, k;
    int a[100][100], b[10][100], c[100][100];

    printf("Enter the order of first matrix: ");
    scanf("%d%d", & m, & n);
    printf("Enter the order of second matrix: ");
    scanf("%d%d", & p, & q);

    if (n != p) {
        printf("Matrix is incompatible for multiplication\n");
    } else {
    printf("\nTaking Matrix from User\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter matrix A[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\n");
        for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("Enter matrix B[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
               c[i][j] = 0;
                for (k = 0; k < p; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("\nThe product of the two matrices is:\n");

        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
