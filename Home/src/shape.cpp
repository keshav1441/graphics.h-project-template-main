#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gd = DETECT, gm;

    char data[] = "C:\\MinGW\\lib\\libbgi.a"; // Static BGI library path
    initgraph(&gd, &gm, data);

    cleardevice();

    // Draw a triangle
    int points[] = {300, 300, 250, 400, 350, 400, 300, 300}; // Vertices of the triangle
    setcolor(15); // White color
    setfillstyle(1, 6); // Solid fill with brown
    fillpoly(4, points); // Draw and fill the triangle (4 points include the closing vertex)

    // Draw a circle
    setcolor(15); // White color
    setfillstyle(1, 4); // Solid fill with red
    circle(300, 275, 50); // Circle center at (300, 275), radius = 50
    floodfill(300, 275, 15); // Fill the circle with red color

    getch();
    closegraph();

    return 0;
}