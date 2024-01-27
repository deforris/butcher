//Entrypoint

#include <stdio.h>

int main( int argc, char **argv)
{
   if (argc != 2) {
        printf("Usage: %s <input_text>\n", argv[0]);
        return 1;
    }

    printf("You entered: %s\n", argv[1]);

    return 0; 
}
