// MouseClicker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

const DWORD delay = 5;



int main()
{

    POINT pos;

    while (1) {


        std::cout << "Click Ctrl + F10 to Start!\n";


        while (1) {
            if (GetAsyncKeyState(VK_CONTROL) && GetAsyncKeyState(VK_F10))
                break;
        }

        // start running

        GetCursorPos(&pos);
        
        std::cout << "Mouse pos is at x: " << pos.x << ", y: " << pos.y << '\n';
        std::cout << "Click Ctrl + F11 to Stop!\n";

        Sleep(delay);

        while (1) {
            if (GetAsyncKeyState(VK_CONTROL) && GetAsyncKeyState(VK_F11))
                break;
            Sleep(delay);
            mouse_event(MOUSEEVENTF_LEFTDOWN, pos.x, pos.y, 0, 0);
            Sleep(delay);
            mouse_event(MOUSEEVENTF_LEFTUP, pos.x, pos.y, 0, 0);
        }

        // stop running
    }




    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
