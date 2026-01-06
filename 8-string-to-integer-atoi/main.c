int myAtoi(char* s) {
    bool isNegative = false;

    long long ret = 0;
    bool started = false;

    int curr = 1;
    int i = 0;
    while (curr != 0) {
        curr = s[i];
        i++;
        if (started) {
            if (curr >= 48 && curr <= 57) {
                ret = (ret * 10) + curr - 48;
                if (ret > INT_MAX) {
                    break;
                }
            }
            else {
                break;
            }
        } else {
            if (curr >= 48 && curr <= 57) {
                started = true;
                ret = (ret * 10) + curr - 48;
            }
            else if (curr == 45 && s[i] >= 48 && s[i] <= 57) {
                isNegative = true;
                started = true;
            }
            else if (curr == 43 && s[i] >= 48 && s[i] <= 57) {
                started = true;
            }
            else if (curr == 32) {
                continue;
            } else {
                break;
            }
        }
    }

    if (isNegative) {
        ret *= -1;
    }

    if (ret > INT_MAX) {
        ret = INT_MAX;
    }

    if (ret < INT_MIN) {
        ret = INT_MIN;
    }
    
    return ret;
}
