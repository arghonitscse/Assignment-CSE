#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pass(char a[])
{

srand(time(0));


a[0] = 'a' + rand() % 26;


a[1] = 'A' + rand() % 26;


a[2] = '!' + rand() % 15;


a[3] = '0' + rand() % 10;


for (int i = 4; i < 8; i++) {
    a[i] = '!' + rand() % 36;
}


a[8] = '\0';


printf("Random password: %s\n", a);

}

void main()
{
    char password[9];
    pass(password);
}
