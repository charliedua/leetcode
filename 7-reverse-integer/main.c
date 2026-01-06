int reverse(int x){
    signed int temp;
    
    if (x == INT_MIN) {
        temp = INT_MAX;
    }
    else if (x < 0) {
        temp = -1 * x;
    }
    else {
        temp = x;
    }
    
    signed int rev = 0;
    int last;
    while (temp > 0) {
        last = temp % 10;
        temp/=10;

        if (__builtin_mul_overflow(rev, 10, &rev)) {
            return 0;
        }
        
        if (__builtin_add_overflow(rev, last, &rev)) {
            return 0;
        }
    }

    if (x < 0) {
        rev *= -1;
    }

    return rev;
}
