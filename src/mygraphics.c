#include "raylib.h"

int main(void)
{
    InitWindow(800, 600, "moyookoshko");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        // основной цикл рисуется каждые 60 раз в секунду

        ClearBackground(RAYWHITE);
        DrawText("Zdraste", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();
}
