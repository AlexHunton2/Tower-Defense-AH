// Standard Library
#include <iostream>
#include <vector>

// SFML Includes:
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

// Tower Defense Includes:
#include "Structure/Level.hpp"


int main() {
    const int WIDTH = 1280;
    const int HEIGHT = 1048;

    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "Tower Defense", sf::Style::Close | sf::Style::Titlebar);

    towdef::Level level(window, 10, DEFAULT_LEVEL_SCALE);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event)) {
            switch (event.type) {
                // window closed
                case sf::Event::Closed:
                    window.close();
                    break;
                // key pressed
                case sf::Event::KeyPressed:
                    break;
                default:
                    break;
            }
        }

        window.clear(sf::Color::White);

        level.draw();

        window.display();
    }

    return 0;
}