/*
 * =====================================================================================
 *
 *       Filename:  
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thanks to github you know it
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author: Mahmut Erdem ÖZGEN   m.erdemozgen@gmail.com
 *   
 *
 * =====================================================================================
 */
#include <iomanip>
#include <iostream>

int main(int argc, const char *argv[]) {
    int n[10];

    for (int i = 0; i < 10; ++i) {
        n[i] = 0;
    }

    std::cout << "Element" << std::setw(13) << "Value" << std::endl;

    for (int i = 0; i < 10; ++i) {
        std::cout << std::setw(7) << i << std::setw(13) << n[i] << std::endl;
    }
    return 0;
}
