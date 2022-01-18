// Tower Defense Includes
#include "Structure/Cell.hpp"

namespace towdef {

Cell::Cell(sf::RenderWindow& render_window, unsigned int cell_length, sf::Vector2f& position) : m_window(render_window) {
    m_position = position;
    m_cell_length = cell_length;
}

void Cell::draw() {}

void Cell::setPosition(const sf::Vector2f& position) {
    m_position = position;
}
const sf::Vector2f& Cell::getPosition() {
    return m_position;
}

unsigned int Cell::getCellLength() {
    return m_cell_length;
}

sf::RenderWindow& Cell::getWindow() {
    return m_window;
}


} // End of towdef