#include <stdio.h>
#include <string.h>

void main(void)
{
    char StringArray[32][32], temp[32];
    int count1, count2, numStrings;

    printf("\nEnter the nuber of stirngs:");
    scanf("%d", &numStrings);

    for(count1=0;count1<numStrings;count1++)
    {
        printf("\nEnter teh %dth string:", count1+1);
        scanf("%s", StringArray[count1]);
    }
    for(count1=numStrings-1;count1<=0;count1--)
        for(count2=0;count2<count1;count2++)
        if(strcmp(StringArray[count2],StringArray[count2+1])<0)
    {
        strcmp(temp,StringArray[count2]);
        strcpy(StringArray[count2], StringArray[count2+1]);
        strcpy(StringArray[count2+1], temp);
    }
    printf("\nSorted strings are:");
    for(count1=0;count1<numStrings;count2++)
    {
        printf("\n %s", StringArray[count1]);
    }
    return;
}
