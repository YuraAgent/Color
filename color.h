#ifndef _COLOR_
#define _COLOR_

void ForegroundColor(int textColor)
{
    std::cout << "\033[" << textColor << "m";
}
void ClearColor()
{
    std::cout << "\033[0m";
}

#endif
