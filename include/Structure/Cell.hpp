// SFML Includes
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

namespace towdef {
/**
 * @brief The cell square where game-objects will be able to exist. Exists inside of level object  
 */
class Cell {
    private:

    sf::RenderWindow& m_window;

    sf::Vector2f m_position;
    float m_cell_length;

    public:

    /**
     * @brief Construct a new Cell object
     * 
     * @param render_window The window in which the cell will draw
     * @param level_length The length of the level object that the cell exists inside of
     * @param position
     */
    Cell(sf::RenderWindow& render_window, unsigned int cell_length, sf::Vector2f& position);

    /**
     * @brief Called every frame for drawing the grid.
     */
    void draw();

    // Accessors & Modifiers:
    void setPosition(const sf::Vector2f& position);
    const sf::Vector2f& getPosition();

    unsigned int getCellLength();

    sf::RenderWindow& getWindow();

}; // End of Cell
} // End of towdef