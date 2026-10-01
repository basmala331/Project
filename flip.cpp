#define _CRT_SECURE_NO_WARNINGS
#include"Image_Class.h"
#include <iostream>
using namespace std;
void flipImage(Image& image) {
    int ans;
    cout << "Enter the image's flip way:  ";
    cout << " 1 : Horizontally    2 : Vertically";
    cin >> ans;
    if (ans == 1) {
        for (int i = 0; i < image.width; i++) {
            if (image.width - i - 1 < i) {
                break;
            }
            for (int j = 0; j < image.height; j++) {
                for (int k = 0; k < image.channels; k++) {
                    swap(image(i, j, k), image(image.width - i - 1, j, k));
                }
            }
        }
    }
    else {
        for (int i = 0; i < image.width; i++) {
            for (int j = 0; j < image.height; j++) {
                if (image.height - j - 1 < j) {
                    for (int k = 0; k < image.channels; k++) {
                        swap(image(i, j, k), image(i, image.height - j - 1, k));
                    }
                }
            }
        }
    }
}