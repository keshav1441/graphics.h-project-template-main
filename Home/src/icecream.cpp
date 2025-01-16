#include <graphics.h>
#include <stdio.h>
#include <conio.h>

#define PINK RGB(255, 192, 203)

int main() {
    int gd = DETECT, gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a"; // Path to graphics library

    // Initialize graphics mode
    initgraph(&gd, &gm, data);

    // Get the center of the screen
    int midx = getmaxx() / 2;
    int midy = getmaxy() / 2;

    // Draw the cone (triangle)
    setcolor(BROWN);
    setfillstyle(SOLID_FILL, BROWN);
    line(midx - 50, midy + 100, midx + 50, midy + 100); // Base of cone
    line(midx - 50, midy + 100, midx, midy + 200);       // Left side of cone
    line(midx + 50, midy + 100, midx, midy + 200);       // Right side of cone
    floodfill(midx, midy + 150, BROWN);

    // Draw the ice cream scoops
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, LIGHTBLUE); // Scoop 1
    circle(midx, midy + 50, 40);
    floodfill(midx, midy + 50, WHITE);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL, LIGHTGREEN); // Scoop 2
    circle(midx, midy, 35);
    floodfill(midx, midy, WHITE);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL, PINK); // Scoop 3 (top)
    circle(midx, midy - 50, 30);
    floodfill(midx, midy - 50, WHITE);

    // Draw sprinkles
    setcolor(RED);
    putpixel(midx - 10, midy - 60, RED);
    putpixel(midx + 10, midy - 40, GREEN);
    putpixel(midx, midy - 70, BLUE);

    // Wait for user input and close graphics
    getch();
    closegraph();

    return 0;
}
