#include <PikoEngine/Piko.h>
#define PIKO_VSYNC_ENABLED

Game OnGameStart()
{
    Game windowExample = InitPiko("Hello World", 400, 400);
    return windowExample;
}


void OnGameUpdate(Game app)
{
    ClearScreen();
}

int main(int argc, char** argv)
{
    EngineEvent event = pkEngineEvent();
    Game example = StartGame(event);
    UpdateGame(event, example);
    return 0;
}