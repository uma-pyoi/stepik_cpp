#include <iostream>
using namespace std;

int strstr_custom(const char *text, const char *pattern);

void test() {
    (0 == strstr_custom("", ""))
        ? cout << "OK : 1" << " (" << 0 << " : " << (0 == strstr_custom("", "")) << " )" << endl
        : cout << "Failed : 1" << " (" << 0 << " : " << (0 == strstr_custom("", "")) << " )" << endl;
    (0 == strstr_custom("a", ""))
        ? cout << "OK : 2" << " (" << 0 << " : " << (0 == strstr_custom("a", "")) << " )" << endl
        : cout << "Failed : 2" << " (" << 0 << " : " << (0 == strstr_custom("a", "")) << " )" << endl;
    (0 == strstr_custom("a", "a"))
        ? cout << "OK : 3" << " (" << 0 << " : " << (0 == strstr_custom("a", "a")) << " )" << endl
        : cout << "Failed : 3" << " (" << 0 << " : " << (0 == strstr_custom("a", "a")) << " )" << endl;
    (-1 == strstr_custom("a", "b"))
        ? cout << "OK : 4" << " (" << -1 << " : " << (-1 == strstr_custom("a", "b")) << " )" << endl
        : cout << "Failed : 4" << " (" << -1 << " : " << (-1 == strstr_custom("a", "b")) << " )" << endl;

    (0 == strstr_custom("aa", ""))
        ? cout << "OK : 5" << " (" << 0 << " : " << (0 == strstr_custom("aa", "")) << " )" << endl
        : cout << "Failed : 5" << " (" << 0 << " : " << (0 == strstr_custom("aa", "")) << " )" << endl;
    (0 == strstr_custom("aa", "a"))
        ? cout << "OK : 6" << " (" << 0 << " : " << (0 == strstr_custom("aa", "a")) << " )" << endl
        : cout << "Failed : 6" << " (" << 0 << " : " << (0 == strstr_custom("aa", "a")) << " )" << endl;
    (0 == strstr_custom("ab", "a"))
        ? cout << "OK : 7" << " (" << 0 << " : " << (0 == strstr_custom("ab", "a")) << " )" << endl
        : cout << "Failed : 7" << " (" << 0 << " : " << (0 == strstr_custom("ab", "a")) << " )" << endl;
    (1 == strstr_custom("ba", "a"))
        ? cout << "OK : 8" << " (" << 1 << " : " << (1 == strstr_custom("ba", "a")) << " )" << endl
        : cout << "Failed : 8" << " (" << 1 << " : " << (1 == strstr_custom("ba", "a")) << " )" << endl;
    (-1 == strstr_custom("bb", "a"))
        ? cout << "OK : 9" << " (" << -1 << " : " << (-1 == strstr_custom("bb", "a")) << " )" << endl
        : cout << "Failed : 9" << " (" << -1 << " : " << (-1 == strstr_custom("bb", "a")) << " )" << endl;

    (0 == strstr_custom("aaa", ""))
        ? cout << "OK : 10" << " (" << 0 << " : " << (0 == strstr_custom("aaa", "")) << " )" << endl
        : cout << "Failed : 10" << " (" << 0 << " : " << (0 == strstr_custom("aaa", "")) << " )" << endl;
    (0 == strstr_custom("aaa", "a"))
        ? cout << "OK : 11" << " (" << 0 << " : " << (0 == strstr_custom("aaa", "a")) << " )" << endl
        : cout << "Failed : 11" << " (" << 0 << " : " << (0 == strstr_custom("aaa", "a")) << " )" << endl;
    (1 == strstr_custom("abc", "b"))
        ? cout << "OK : 12" << " (" << 1 << " : " << (1 == strstr_custom("abc", "b")) << " )" << endl
        : cout << "Failed : 12" << " (" << 1 << " : " << (1 == strstr_custom("abc", "b")) << " )" << endl;
    (2 == strstr_custom("abc", "c"))
        ? cout << "OK : 13" << " (" << 2 << " : " << (2 == strstr_custom("abc", "c")) << " )" << endl
        : cout << "Failed : 13" << " (" << 2 << " : " << (2 == strstr_custom("abc", "c")) << " )" << endl;
    (-1 == strstr_custom("abc", "d"))
        ? cout << "OK : 14" << " (" << -1 << " : " << (-1 == strstr_custom("abc", "d")) << " )" << endl
        : cout << "Failed : 14" << " (" << -1 << " : " << (-1 == strstr_custom("abc", "d")) << " )" << endl;

    (-1 == strstr_custom("a", "aa"))
        ? cout << "OK : 15" << " (" << -1 << " : " << (-1 == strstr_custom("a", "aa")) << " )" << endl
        : cout << "Failed : 15" << " (" << -1 << " : " << (-1 == strstr_custom("a", "aa")) << " )" << endl;
    (-1 == strstr_custom("a", "ba"))
        ? cout << "OK : 16" << " (" << -1 << " : " << (-1 == strstr_custom("a", "ba")) << " )" << endl
        : cout << "Failed : 16" << " (" << -1 << " : " << (-1 == strstr_custom("a", "ba")) << " )" << endl;
    (-1 == strstr_custom("a", "ab"))
        ? cout << "OK : 17" << " (" << -1 << " : " << (-1 == strstr_custom("a", "ab")) << " )" << endl
        : cout << "Failed : 17" << " (" << -1 << " : " << (-1 == strstr_custom("a", "ab")) << " )" << endl;
    (-1 == strstr_custom("a", "bb"))
        ? cout << "OK : 18" << " (" << -1 << " : " << (-1 == strstr_custom("a", "bb")) << " )" << endl
        : cout << "Failed : 18" << " (" << -1 << " : " << (-1 == strstr_custom("a", "bb")) << " )" << endl;

    (-1 == strstr_custom("a", "aaa"))
        ? cout << "OK : 19" << " (" << -1 << " : " << (-1 == strstr_custom("a", "aaa")) << " )" << endl
        : cout << "Failed : 19" << " (" << -1 << " : " << (-1 == strstr_custom("a", "aaa")) << " )" << endl;
    (-1 == strstr_custom("aa", "aaa"))
        ? cout << "OK : 20" << " (" << -1 << " : " << (-1 == strstr_custom("aa", "aaa")) << " )" << endl
        : cout << "Failed : 20" << " (" << -1 << " : " << (-1 == strstr_custom("aa", "aaa")) << " )" << endl;
    (0 == strstr_custom("aaa", "aaa"))
        ? cout << "OK : 21" << " (" << 0 << " : " << (0 == strstr_custom("aaa", "aaa")) << " )" << endl
        : cout << "Failed : 21" << " (" << 0 << " : " << (0 == strstr_custom("aaa", "aaa")) << " )" << endl;
    (0 == strstr_custom("aaab", "aaa"))
        ? cout << "OK : 22" << " (" << 0 << " : " << (0 == strstr_custom("aaab", "aaa")) << " )" << endl
        : cout << "Failed : 22" << " (" << 0 << " : " << (0 == strstr_custom("aaab", "aaa")) << " )" << endl;
    (1 == strstr_custom("baaa", "aaa"))
        ? cout << "OK : 23" << " (" << 1 << " : " << (1 == strstr_custom("baaa", "aaa")) << " )" << endl
        : cout << "Failed : 23" << " (" << 1 << " : " << (1 == strstr_custom("baaa", "aaa")) << " )" << endl;
    (1 == strstr_custom("baaaa", "aaa"))
        ? cout << "OK : 24" << " (" << 1 << " : " << (1 == strstr_custom("baaaa", "aaa")) << " )" << endl
        : cout << "Failed : 24" << " (" << 1 << " : " << (1 == strstr_custom("baaaa", "aaa")) << " )" << endl;
    (1 == strstr_custom("baaab", "aaa"))
        ? cout << "OK : 25" << " (" << 1 << " : " << (1 == strstr_custom("baaab", "aaa")) << " )" << endl
        : cout << "Failed : 25" << " (" << 1 << " : " << (1 == strstr_custom("baaab", "aaa")) << " )" << endl;
    (-1 == strstr_custom("abd", "abc"))
        ? cout << "OK : 26" << " (" << -1 << " : " << (-1 == strstr_custom("abd", "abc")) << " )" << endl
        : cout << "Failed : 26" << " (" << -1 << " : " << (-1 == strstr_custom("abd", "abc")) << " )" << endl;

    (2 == strstr_custom("ababc", "abc"))
        ? cout << "OK : 27" << " (" << 2 << " : " << strstr_custom("ababc", "abc") << " )" << endl
        : cout << "Failed : 27" << " (" << 2 << " : " << strstr_custom("ababc", "abc") << " )" << endl;
    (3 == strstr_custom("abdabc", "abc"))
        ? cout << "OK : 28" << " (" << 3 << " : " << (3 == strstr_custom("abdabc", "abc")) << " )" << endl
        : cout << "Failed : 28" << " (" << 3 << " : " << (3 == strstr_custom("abdabc", "abc")) << " )" << endl;
}


int strlength(const char *str) {
    int length{0};
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

void is_matching_action(int *pattern_entry_i, int *i, int *is_matching, int pattern_len) {
    if (*pattern_entry_i == -1) {
        *pattern_entry_i = *i;
    }
    *is_matching = *is_matching + 1;
    // std::cout << "is_matching: " << *is_matching << '\n';
}


int strstr_custom(const char *text, const char *pattern) {
    int pattern_len = strlength(pattern);
    int text_len = strlength(text);
    int is_matching{0};
    int pattern_entry_i{-1};
    // std::cout << "pattern_len: " << pattern_len << '\n';
    if (pattern_len == 0) {
        return 0;
    }

    for (int i = 0; i < text_len; ++i) {
        if (*(pattern + is_matching) != '\0') {
            if (*(text + i) == *(pattern + is_matching)) {
                is_matching_action(&pattern_entry_i, &i, &is_matching, pattern_len);
            } else {
                // std::cout << "not matching!" << '\n';
                is_matching = 0;
                pattern_entry_i = -1;
                if (*(text + i) == *(pattern + is_matching)) {
                    is_matching_action(&pattern_entry_i, &i, &is_matching, pattern_len);
                }
            }
        }
    }


    if (is_matching != pattern_len) {
        pattern_entry_i = -1;
    }
    return pattern_entry_i;
}


int main() {
    const char *text = "aa";
    const char *ptrn = "a";
    int pattern_entry = strstr_custom(text, ptrn);
    std::cout << "pattern_entry index: " << pattern_entry << '\n';

    test();
    return 0;
}
