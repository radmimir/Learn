#include <iostream>
using namespace std;


int strstr1(const char* text, const char* pattern)
{
    const char* begin_pattern = pattern;
    const char* begin_text = text;
    int pos = 0;
    do
    {
        if (*pattern == '\0') return pos;
        if (*text == '\0') return -1;
        if (*text == *pattern)
        {
            if (pattern == begin_pattern) pos = text - begin_text;
            pattern++;
        }
        else
        {
            pattern = begin_pattern;
            pos = text - begin_text;
        }
        text++;
    } while (true);
    return -1;
}

void test()
{
    (0 == strstr1("", "")) ? cout << "OK : 1" << " (" << 0 << " : " << (0 == strstr1("", "")) << " )" << endl : cout << "Failed : 1" << " (" << 0 << " : " << (0 == strstr1("", "")) << " )" << endl;
    (0 == strstr1("a", "")) ? cout << "OK : 2" << " (" << 0 << " : " << (0 == strstr1("a", "")) << " )" << endl : cout << "Failed : 2" << " (" << 0 << " : " << (0 == strstr1("a", "")) << " )" << endl;
    (0 == strstr1("a", "a")) ? cout << "OK : 3" << " (" << 0 << " : " << (0 == strstr1("a", "a")) << " )" << endl : cout << "Failed : 3" << " (" << 0 << " : " << (strstr1("a", "a")) << " )" << endl;
    (-1 == strstr1("a", "b")) ? cout << "OK : 4" << " (" << -1 << " : " << (-1 == strstr1("a", "b")) << " )" << endl : cout << "Failed : 4" << " (" << -1 << " : " << (-1 == strstr1("a", "b")) << " )" << endl;

    (0 == strstr1("aa", "")) ? cout << "OK : 5" << " (" << 0 << " : " << (0 == strstr1("aa", "")) << " )" << endl : cout << "Failed : 5" << " (" << 0 << " : " << (0 == strstr1("aa", "")) << " )" << endl;
    (0 == strstr1("aa", "a")) ? cout << "OK : 6" << " (" << 0 << " : " << (0 == strstr1("aa", "a")) << " )" << endl : cout << "Failed : 6" << " (" << 0 << " : " << (0 == strstr1("aa", "a")) << " )" << endl;
    (0 == strstr1("ab", "a")) ? cout << "OK : 7" << " (" << 0 << " : " << (0 == strstr1("ab", "a")) << " )" << endl : cout << "Failed : 7" << " (" << 0 << " : " << (0 == strstr1("ab", "a")) << " )" << endl;
    (1 == strstr1("ba", "a")) ? cout << "OK : 8" << " (" << 1 << " : " << (1 == strstr1("ba", "a")) << " )" << endl : cout << "Failed : 8" << " (" << 1 << " : " << (1 == strstr1("ba", "a")) << " )" << endl;
    (-1 == strstr1("bb", "a")) ? cout << "OK : 9" << " (" << -1 << " : " << (-1 == strstr1("bb", "a")) << " )" << endl : cout << "Failed : 9" << " (" << -1 << " : " << (-1 == strstr1("bb", "a")) << " )" << endl;

    (0 == strstr1("aaa", "")) ? cout << "OK : 10" << " (" << 0 << " : " << (0 == strstr1("aaa", "")) << " )" << endl : cout << "Failed : 10" << " (" << 0 << " : " << (0 == strstr1("aaa", "")) << " )" << endl;
    (0 == strstr1("aaa", "a")) ? cout << "OK : 11" << " (" << 0 << " : " << (0 == strstr1("aaa", "a")) << " )" << endl : cout << "Failed : 11" << " (" << 0 << " : " << (0 == strstr1("aaa", "a")) << " )" << endl;
    (1 == strstr1("abc", "b")) ? cout << "OK : 12" << " (" << 1 << " : " << (1 == strstr1("abc", "b")) << " )" << endl : cout << "Failed : 12" << " (" << 1 << " : " << (1 == strstr1("abc", "b")) << " )" << endl;
    (2 == strstr1("abc", "c")) ? cout << "OK : 13" << " (" << 2 << " : " << (2 == strstr1("abc", "c")) << " )" << endl : cout << "Failed : 13" << " (" << 2 << " : " << (2 == strstr1("abc", "c")) << " )" << endl;
    (-1 == strstr1("abc", "d")) ? cout << "OK : 14" << " (" << -1 << " : " << (-1 == strstr1("abc", "d")) << " )" << endl : cout << "Failed : 14" << " (" << -1 << " : " << (-1 == strstr1("abc", "d")) << " )" << endl;

    (-1 == strstr1("a", "aa")) ? cout << "OK : 15" << " (" << -1 << " : " << (-1 == strstr1("a", "aa")) << " )" << endl : cout << "Failed : 15" << " (" << -1 << " : " << (-1 == strstr1("a", "aa")) << " )" << endl;
    (-1 == strstr1("a", "ba")) ? cout << "OK : 16" << " (" << -1 << " : " << (-1 == strstr1("a", "ba")) << " )" << endl : cout << "Failed : 16" << " (" << -1 << " : " << (-1 == strstr1("a", "ba")) << " )" << endl;
    (-1 == strstr1("a", "ab")) ? cout << "OK : 17" << " (" << -1 << " : " << (-1 == strstr1("a", "ab")) << " )" << endl : cout << "Failed : 17" << " (" << -1 << " : " << (-1 == strstr1("a", "ab")) << " )" << endl;
    (-1 == strstr1("a", "bb")) ? cout << "OK : 18" << " (" << -1 << " : " << (-1 == strstr1("a", "bb")) << " )" << endl : cout << "Failed : 18" << " (" << -1 << " : " << (-1 == strstr1("a", "bb")) << " )" << endl;

    (-1 == strstr1("a", "aaa")) ? cout << "OK : 19" << " (" << -1 << " : " << (-1 == strstr1("a", "aaa")) << " )" << endl : cout << "Failed : 19" << " (" << -1 << " : " << (-1 == strstr1("a", "aaa")) << " )" << endl;
    (-1 == strstr1("aa", "aaa")) ? cout << "OK : 20" << " (" << -1 << " : " << (-1 == strstr1("aa", "aaa")) << " )" << endl : cout << "Failed : 20" << " (" << -1 << " : " << (-1 == strstr1("aa", "aaa")) << " )" << endl;
    (0 == strstr1("aaa", "aaa")) ? cout << "OK : 21" << " (" << 0 << " : " << (0 == strstr1("aaa", "aaa")) << " )" << endl : cout << "Failed : 21" << " (" << 0 << " : " << (0 == strstr1("aaa", "aaa")) << " )" << endl;
    (0 == strstr1("aaab", "aaa")) ? cout << "OK : 22" << " (" << 0 << " : " << (0 == strstr1("aaab", "aaa")) << " )" << endl : cout << "Failed : 22" << " (" << 0 << " : " << (0 == strstr1("aaab", "aaa")) << " )" << endl;
    (1 == strstr1("baaa", "aaa")) ? cout << "OK : 23" << " (" << 1 << " : " << (1 == strstr1("baaa", "aaa")) << " )" << endl : cout << "Failed : 23" << " (" << 1 << " : " << (1 == strstr1("baaa", "aaa")) << " )" << endl;
    (1 == strstr1("baaaa", "aaa")) ? cout << "OK : 24" << " (" << 1 << " : " << (1 == strstr1("baaaa", "aaa")) << " )" << endl : cout << "Failed : 24" << " (" << 1 << " : " << (1 == strstr1("baaaa", "aaa")) << " )" << endl;
    (1 == strstr1("baaab", "aaa")) ? cout << "OK : 25" << " (" << 1 << " : " << (1 == strstr1("baaab", "aaa")) << " )" << endl : cout << "Failed : 25" << " (" << 1 << " : " << (1 == strstr1("baaab", "aaa")) << " )" << endl;
    (-1 == strstr1("abd", "abc")) ? cout << "OK : 26" << " (" << -1 << " : " << (-1 == strstr1("abd", "abc")) << " )" << endl : cout << "Failed : 26" << " (" << -1 << " : " << (-1 == strstr1("abd", "abc")) << " )" << endl;

    (2 == strstr1("ababc", "abc")) ? cout << "OK : 27" << " (" << 2 << " : " << (2 == strstr1("ababc", "abc")) << " )" << endl : cout << "Failed : 27" << " (" << 2 << " : " << (2 == strstr1("ababc", "abc")) << " )" << endl;
    (3 == strstr1("abdabc", "abc")) ? cout << "OK : 28" << " (" << 3 << " : " << (3 == strstr1("abdabc", "abc")) << " )" << endl : cout << "Failed : 28" << " (" << 3 << " : " << (3 == strstr1("abdabc", "abc")) << " )" << endl;

}

int main()
{
    test();
    return 0;
}