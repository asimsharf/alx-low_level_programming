#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){

    char password[84];
    int index = 0, sum = 0, n;
    srand(time(0));
    while (sum < 2772)
    {
        password[index] = 33 + rand() % 94;
	printf("********************%d\n", 33 + rand() % 94);
	
	printf("%d\n", password[index]);
        sum += password[index++];
    }
    password[index] = '\0';
    if (sum != 2772)
    {
        n = (sum - 2772) / 2;
        if ((sum - 2772) % 2 != 0)
            n++;
        for (index = 0; password[index]; index++)
        {
            if (password[index] >= (33 + n))
            {
                password[index] -= n;
                break;
            }
        }
        for (index = 0; password[index]; index++)
        {
            if (password[index] >= (33 + n))
            {
                password[index] -= n;
                break;
            }
        }
    }
    printf("%s", password);

    return 0;
}
