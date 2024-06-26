// Finding nth occurrence of array element:

#include <stdio.h>
void main()
{
    int a[100], n, sum = 0, i,elm,c=1,occ,found;
    float avg;

    printf("Enter the array Size\n");
    scanf("%d", &n);

    printf("Enter the array Element\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the  Element to search and occurrence \n");
    scanf("%d%d",&elm,&occ);
    for(i=0;i<n;i++)
    {
        if(a[i]==elm)found++;
        if(found==occ){printf("%d in %d cell %d time\n",elm,i+1,occ);break;}
    }
    if(found==0)printf("%d not found",elm);
    else if(found!=occ)printf("%d not found %d time ",elm,occ);


}