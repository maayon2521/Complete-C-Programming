/*In this program we will be seeing about Memory Managemet in C Program*/

/*In C Program memory can be managed easy by using dynamic memory allocation */

/*In this program lets see a malloc() used in C Programming*/

/*And lets see how to allocate memory in dynamic manner*/

/*Synatx to define a malloc() in c programming

void *malloc(int num)

*/

/*including preprocessor in the program*/

#include <stdio.h>

#include<stdlib.h>

#include <string.h>

int main()

{

char name[100];

/* allocate memory dynamically */

char *work = malloc( 200 * sizeof(char) );

strcpy(name, "Mayyon");

if( work == NULL )

{

fprintf(stderr, "Error - unable to allocate required memory\n");

}

else

{

strcpy( work, "Maayon is a poet");

}

printf("\nName = %s\n", name );

printf("\nWork : %s\n", work );

}