// Merging or arrays:

// Finding Array frequency

#include <stdio.h>
void main()
{
    int a[100], b[100], n1, n2, i, j,temp=0;

    printf("Enter the array One Size\n");
    scanf("%d", &n1);

    printf("Enter the array One Element\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter the array Two Size\n");
    scanf("%d", &n2);

    printf("Enter the array Two Element\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for (i = n1, j = 0; j < n2; i++, j++)
        a[i] = b[j];

    for(i=0;i<n1+n2;i++)
    {
        for(j=0;j<n1+n2;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(i=0;i<n1+n2;i++) printf("%4d ",a[i]);
}