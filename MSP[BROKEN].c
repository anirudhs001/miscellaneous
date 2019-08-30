#include<stdio.h>
#include<string.h>
#define N 7

void permute(int, int, int);

////////////////////////////////////
////// CREATE THE ARRAYS ///////////
////////////////////////////////////

//str contains the original string . Its contents must be sorted.
char str[] = "namaste";
int LEN_STR = N - 1;

//store the repeated characters. for multiple appearances of a character in str,
//only one is kept in all_diff. All rest in rept.
char rept[10];
int LEN_REPT = -1;//this counter remembers the index of last element in rept

//array to store the final word after permuting the characters
char arr[10];


int counter = 0;
int main()
{
    //segregate the member of str:
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                LEN_REPT++;
                rept[LEN_REPT] = str[j];
                for(; j < LEN_STR; j++)
                { 
                    str[j] = str[j + 1];
                }
                str[LEN_STR] = '\0';
                
                LEN_STR--;
            }
        }
    }
    //for debugging:
    //printf("%s, %d, %d, %s\n",str, LEN_STR, LEN_REPT, rept);
    //permute the string
    permute(0, 0, 0);
    return 0;
}

void permute(int pos, int pos_rept, int index)
{
    //check if current character is same as current character in repeated array:
    if(str[pos] == rept[pos_rept])
    {
        //add this character to arr
        arr[index] = rept[pos_rept];
        index++;
        //move to next repeated character
        pos_rept++;
    }
   
    if (pos < LEN_STR)
    {   
        //now rotate the remaing str array 1 step
        for (int i = pos; i <= LEN_STR ; i++)
        {
            //rotate the string:
            char temp = str[pos];
            for(int j = pos; j < LEN_STR; j++)
            { 
                str[j] = str[j + 1];
            }
            str[LEN_STR] = temp;

            //add the character to arr:
            arr[index] = str[pos];
            //permutate the remaining string now
            permute(pos + 1, pos_rept, index + 1);
        }
    } 
    //default case:
    if (pos == LEN_STR)
    {
        //printf("%c\n", str[LEN_STR]);
        arr[index] = str[LEN_STR];
        counter++;
        printf("%s counter:%d\n", arr, counter);
    }
}

