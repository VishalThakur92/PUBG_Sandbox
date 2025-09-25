#include "GameModeBase_PUBG.h"
#include "Character_PUBG.h"
#include "PlayerController_PUBG.h"
#include "GameState_PUBG.h"
#include "PlayerState_PUBG.h"
#include "HUD_PUBG.h"

AGameModeBase_PUBG::AGameModeBase_PUBG()
{
    DefaultPawnClass = ACharacter_PUBG::StaticClass();
    PlayerControllerClass = APlayerController_PUBG::StaticClass();
    GameStateClass = AGameState_PUBG::StaticClass();
    PlayerStateClass = APlayerState_PUBG::StaticClass();
    HUDClass = AHUD_PUBG::StaticClass();
}