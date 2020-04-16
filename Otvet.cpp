#include <iostream>

int string_len(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return i;
}

int main()
{
    char s[1000];

    std::cin.getline(s, 999);
    std::cout << string_len(s) << std::endl;

    return 0;
}
