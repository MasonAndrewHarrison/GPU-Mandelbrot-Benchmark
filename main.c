

#include "raylib.h"


int main(void)
{

    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Raylib");

    Camera2D camera = { 0 };
    camera.offset = (Vector2){ screenHeight/2.0f, screenWidth/2.0f };
    Vector2 ballPosition = {screenHeight/2.0f, screenHeight/2.0f};
    camera.zoom = 1.0f;


    SetTargetFPS(60);       

    while (!WindowShouldClose())   
    {

        if (IsKeyDown(KEY_D)) camera.offset.x += 2.0f;
        if (IsKeyDown(KEY_A)) camera.offset.x -= 2.0f;
        if (IsKeyDown(KEY_W)) camera.offset.y -= 2.0f;
        if (IsKeyDown(KEY_S)) camera.offset.y += 2.0f;

        ballPosition = GetMousePosition();

        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawCircleV(ballPosition, 50, MAROON);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}