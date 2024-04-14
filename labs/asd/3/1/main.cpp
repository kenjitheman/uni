#include <iostream>

struct Rectangle {
    int width;
    int height;

    Rectangle() : width(0), height(0) {}

    Rectangle(int w, int h) : width(w), height(h) {}

    void display() {
        std::cout << "rectangle: width = " << width << ", height = " << height
            << std::endl;
    }

    int area() { return width * height; }
};
