// TODO: Implement populate_array
/*
 * Convert a 9 digit int to a 9 element int array.
 */
int populate_array(int sin, int *sin_array) {
    if (sin < 100000000 || sin > 999999999){
      return 1;
    }
    for (int i = 8; i >=0; i--){
      sin_array[i] = sin%10;
      sin  = sin /10;
    }
    return 0;
}

// TODO: Implement check_sin
/*
 * Return 0 (true) iff the given sin_array is a valid SIN.
 */
int check_sin(int *sin_array) {
    int sum = 0, partial, partial_sum = 0;
    for (int i = 0; i<9; i+=2){
      sum += (sin_array[i] * 1);
    }
    for (int i = 1; i<9; i+=2){
      partial = sin_array[i] * 2;
      if (partial >= 10){
        partial_sum = partial%10;
        partial = partial / 10;
        partial_sum += partial%10;
        sum += partial_sum;
        partial_sum = 0;
      }else{
        sum += partial;
      }
    }
    return (!((sum%10)==0));
}
