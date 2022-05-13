#include <flecs.h>
#include <iostream>

enum class TileStatus : uint32_t {
    Free,
    Occupied
};

int main(int, char* [])
{
    flecs::world ecs;

    ecs.component<TileStatus>();
    auto tile = ecs.entity().add(TileStatus::Free); // Also assert;
    std::cout << "Tile : " << tile.has<TileStatus>() << "\n";
}
