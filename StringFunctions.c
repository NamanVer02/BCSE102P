# include <stdio.h>
# include <string.h>

int main(){
    char str[10] = "Happy";
    char str2[10] = "Birthday";
    
    printf("The strings we have are %s and %s \n", str, str2);
    printf("The length of the string is %d charecters \n", strlen(str));

    strcat(str2, str);
    printf("We copy and paste string 1 into string 2 and the result is %s \n", str2);

    strlwr(str2);
    printf("We convert all charecters in string 1 into lowercase and get %s \n", str2);

    strupr(str2);
    printf("We convert all charecter in string 2 into uppercase and get %s \n", str2);

    strrev(str2);
    printf("We reverse string 1 and get %s \n", str2);

    return 0;
}
