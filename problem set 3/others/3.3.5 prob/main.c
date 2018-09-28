#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[7], m = 'a', M = 'A';
    //int a = 2;

    gets(ch);

    for (int i=0; i<7; i++) {
        if (i == 2) printf("-");
        for (int j=2; j <= 6; j++) {
            if (ch[i] == m || M || m+1 || M+1 || M+2 || m+2) {printf("j%d", j);
            break;
            }

            m+=3;
            M+=3;
            }
        }


    return 0;
}
/**5. To make telephone numbers easier to remember, some companies use letters to
show their telephone number. For example, using letters, the telephone number
438-5626 can be shown as GET LOAN. In some cases, to make a telephone number
meaningful, companies might use more than seven letters. For example, 225-5466
can be displayed as CALL HOME, which uses eight letters. Write a program that
prompts the user to enter a telephone number expressed in letters and outputs
the corresponding telephone number in digits. If the user enters more than seven
letters, then process only the rst seven letters. Also output the (hyphen) after
the third digit. Allow the user to use both uppercase and lowercase letters as
well as spaces between words. Moreover, your program should process as many
telephone numbers as the user wants.*/
