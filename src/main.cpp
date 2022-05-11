#include <flecs.h>
#include <iostream>

enum class TileStatus {
    Free,
    Occupied
};

int main(int, char* [])
{
    flecs::world ecs;

    ecs.component<TileStatus>();
    auto tile = ecs.entity().add(TileStatus::Free); // Also assert;
    std::cout << "Tile : " << tile << "\n";
}
