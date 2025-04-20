#include <stdio.h>
#include<string.h>
#include <ctype.h>

int main() {
    char s,a[100];
    printf("Enter the string\n");
    scanf("%[^\n]s",a);
    int len=strlen(a),i;
    int vowel=0,con=0;
    for(i=0;i<len;i++)
    {
        s=a[i];
        tolower(s);
        if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u' )
            vowel++;
        else
            con++;
    }
    printf("Number of vowels=%d\n",vowel);
    printf("Number of consonants=%d\n",con);

}