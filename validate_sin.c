#include <stdio.h>
#include <stdlib.h>

int populate_array(int, int *);
int check_sin(int *);

int main(int argc, char **argv) {
    // TODO: Verify that command line arguments are valid.
    if (!(argc == 2)) {
        fprintf(stderr, "USAGE: validate_sin size [permissions]\n");
        return 1;
    }

    // TODO: Parse arguments and then call the two helpers in sin_helpers.c
    // to verify the SIN given as a command line argument.
    char *end;
    int sin = strtol(argv[1], &end, 10);
    int sin_array[9];
    int check_pop= populate_array(sin, sin_array);
    int check_check_cin = check_sin(sin_array);
    if (check_pop==0 && check_check_cin==0){
      printf("Valid SIN\n");
    }else{
      printf("Invalid SIN\n");
    }

    return 0;
}
