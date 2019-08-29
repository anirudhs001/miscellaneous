#include<stdio.h>
#define N 7

void permute(int);
char str[] = "anirudh";

int main()
{
    permute(0);
    return 0;
}
void permute(int pos)
{
    if (pos == N - 1)
    {
        printf("%s\n", str);
    }
    else
    {
        for (int i = 0; i < N - pos; i++)
        {
            char temp = str[pos];
            for(int j = pos ; j < N - 1 ; j++)
            {
                str[j] = str[j + 1];
            }
            str[N - 1] = temp;
            permute(pos + 1);
        }
    } 
}
