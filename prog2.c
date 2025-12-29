// 2. Develop a program in c for tge follwing operations on strings , a read a mian string (str)

// a. Pattern string (pat) and a replace string (rep)
// b.Perform patten matching operation. Find and replace all occurences of pat in str with rep
// id pat exist in str.repoert suitable messange in case of pat not found in str.supprt
// the progarm with suitable functions for each operation.don;t use build in fn.


#include<stdio.h>

char str[50], pat[20], rep[20], res[50];
int c = 0, m = 0, i = 0, j = 0, k, flag = 0;
void stringmatch()
{
    while (str[c] != '\0')
    {
        if (str[m] == pat[i])
        {
            i++;
            m++;
            if (pat[i] == '\0')
            {
                flag = 1;
                for (k = 0; rep[k] != '\0'; k++, j++)
                {
                    res[j] = rep[k];
                }
                i = 0;
                c = m;
            }
        }
        else
        {
            res[j] = str[c];
            j++;
            c++;
            m = c;
            i = 0;
        }
    }
    res[j] = '\0';
}
void main()
{
    printf("Enter the main string:");
    gets(str);
    printf("\nEnter the pat string:");
    gets(pat);
    printf("\nEnter the replace string:");
    gets(rep);
    printf("\nThe string before pattern match is:\n %s", str);
    stringmatch();
    if (flag == 1)
        printf("\nThe string after pattern match and replace is: \n %s ", res);
    else
        printf("\nPattern string is not found");
}