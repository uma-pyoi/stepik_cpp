// counting the length of a C style string given that
// string 1 has enough space for string 2


unsigned strlen(const char *str) {
    unsigned length{0};
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

void strcat(char *to, const char *from) {
    unsigned str1_len = strlen(to);
    unsigned str2_len = strlen(from);
    int j{0};
    for (int i = str1_len; i < (str1_len + str2_len); ++i) {
        *(to + i) = *(from + j);
        j++;
    }
    *(to + (str1_len + str2_len)) = '\0';
}




