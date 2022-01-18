// Tower Defense Includes
#include "Structure/Level.hpp"

namespace towdef {

Level::Level(sf::RenderWindow& render_window, unsigned int grid_length, float scale) : m_window(render_window) {
    //m_window = render_window;
    m_grid_length = grid_length;
    m_scale = scale;

    this->setPosition(sf::Vector2f(DEFAULT_LEVEL_X_POS, DEFAULT_LEVEL_Y_POS));
    this->setOffset(sf::Vector2f(DEFAULT_LEVEL_X_OFFSET, DEFAULT_LEVEL_Y_OFFSET));
}

void Level::draw() {
    sf::RectangleShape border(sf::Vector2f(0, 0));
    border.setPosition(this->getPosition());

    float width = this->getWindow().getSize().x * this->getScale();
    float height = this->getWindow().getSize().y * this->getScale();
    border.setSize(sf::Vector2f(width, height));

    border.setFillColor(sf::Color(150, 150, 150));

    this->getWindow().draw(border);

}

void Level::setPosition(const sf::Vector2f& position) {
    m_position = position;
}
const sf::Vector2f& Level::getPosition() {
    return m_position;
}
    
void Level::setOffset(const sf::Vector2f& offset) {}
const sf::Vector2f& Level::getOffset() {
    return m_offset;
}

unsigned int Level::getGridLength() {
    return m_grid_length;
}

float Level::getScale() {
    return m_scale;
}

void Level::setGrid(const std::vector< std::vector<int> >& grid) {
    m_grid = grid;
}
const std::vector< std::vector<int> >& Level::getGrid() {
    return m_grid;
}

sf::RenderWindow& Level::getWindow() {
    return m_window;
}


} // End of towdef 