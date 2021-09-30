String to Integer
Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
Input format :
Numeric string (string, Eg. "1234")
Output format :
Corresponding integer (int, Eg. 1234)
Sample Input 1 :
1231
Sample Output 1:
1231
Sample Input 2 :
12567
Sample Output 2 :
12567


/******************************************************** SOLUTION ******************************************************************/

int length(char input[])
{
    int len = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int smallpower = power(x, n - 1);
    return smallpower * x;
}
int stringToNumber(char input[]) {

    if(length(input)==1)
        return input[0]-48;
    
    int a=stringToNumber(input+1);
    int b=input[0]-48;
    
    return b*power(10,length(input)-1)+a;
}
