// below is the program to get length of wide char array string
#include <iostream>
//to use function or wide character we have to include header file cwchar
#include <cwchar>


int main()
{
    wchar_t name[] = L"Lakshit ";

    std::wcout <<L"Length of " << name , std::wcout <<L"is " << wcslen(name);
    return 0;
}
