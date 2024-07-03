// Finding Array frequency

#include <stdio.h>
void main()
{
    int a[100], b[100], n, i, j, c = 0;

    printf("Enter the array Size\n");
    scanf("%d", &n);

    printf("Enter the array Element\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (b[i] != -1)
        {
            for (c = 1, j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    c++;
                    b[j] = -1;
                }
            }
            b[i]=c;
        }
    }

    for(i=0;i<n;i++)
    {
        if(b[i]!=-1)
        {
            printf("%d  found %d Times \n",a[i],b[i]);
        }
    }
}