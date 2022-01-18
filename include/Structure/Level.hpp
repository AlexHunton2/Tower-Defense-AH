// Standard Includes:
#include <vector>

// SFML Includes
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

#define DEFAULT_LEVEL_SCALE .9f
#define DEFAULT_LEVEL_X_POS 0
#define DEFAULT_LEVEL_Y_POS 0
#define DEFAULT_LEVEL_X_OFFSET 0
#define DEFAULT_LEVEL_Y_OFFSET 0

namespace towdef {
/**
 * @brief Level Class: this where main part of the game will be. A tiled space with a path for enemies and room for
 * defenses to be placed.
 */
class Level {
    private:

    sf::RenderWindow& m_window;

    sf::Vector2f m_position;
    sf::Vector2f m_offset;
    unsigned int m_grid_length;
    float m_scale;

    std::vector< std::vector<int> > m_grid;

    public:
    
    /**
     * @brief Construct a new Level object
     * 
     * @param render_window the window in which the level will be drawn
     * @param grid_length the square edge of the level
     * @param scale scaling value for size of the level on the screen, 1 will make level take up full screen
     */
    Level(sf::RenderWindow& render_window, unsigned int grid_length, float scale);

    /**
     * @brief Called every frame for drawing the level
     * 
     * @param renderWindow The window in which the window will be drawn
     */
    void draw();

    // Accessors & Modifiers:
    void setPosition(const sf::Vector2f& position);
    const sf::Vector2f& getPosition();
    
    void setOffset(const sf::Vector2f& offset);
    const sf::Vector2f& getOffset();

    unsigned int getGridLength();

    float getScale();

    void setGrid(const std::vector< std::vector<int> >& grid);
    const std::vector< std::vector<int> >& getGrid();

    sf::RenderWindow& getWindow();
}; // End of Level
} // End of towdef