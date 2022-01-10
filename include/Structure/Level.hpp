// SFML Includes
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

#define DEFAULT_LEVEL_SCALE 1;

namespace towdef {

/**
 * @brief Level Class: this where main part of the game will be. A tiled space with a path for enemies and room for
 * defenses can be placed.
 */
class Level {
    private:

    public:
    
    /**
     * @brief Construct a new Level object
     * 
     * @param screen_width the entire width of the screen
     * @param screen_height the entire height of the screen
     * @param grid_length the square edge of the level
     * @param scale scaling value for size of the level on the screen, default: 1
     */
    Level(unsigned int screen_width, unsigned int screen_height, unsigned int grid_length, float scale);

    /**
     * @brief Called every frame for drawing the level
     * 
     * @param renderWindow 
     */
    void draw(sf::RenderWindow& renderWindow);


};
}