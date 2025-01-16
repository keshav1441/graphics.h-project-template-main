#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a"; // Path to graphics library

    // Initialize graphics mode
    initgraph(&gd, &gm, data);

    // Get the center of the screen
    int midx = getmaxx() / 2;
    int midy = getmaxy() / 2;

    // Draw the face (circle)
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(midx, midy, 100);
    floodfill(midx, midy, YELLOW);

    // Draw eyes
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    circle(midx - 40, midy - 40, 10); // Left eye
    floodfill(midx - 40, midy - 40, BLACK);
    circle(midx + 40, midy - 40, 10); // Right eye
    floodfill(midx + 40, midy - 40, BLACK);

    // Draw the mouth
    arc(midx, midy + 20, 200, 340, 50);

    // Wait for user input and close graphics
    getch();
    closegraph();

    return 0;
}
