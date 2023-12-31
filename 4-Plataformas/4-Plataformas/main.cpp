#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

Texture textura;
Sprite sprite[8];

int main() {

	int x = 0;
	float tamaño_y = 0;

	sf::RenderWindow ventana(sf::VideoMode(800, 600, 32), "Plataformas");

	textura.loadFromFile("assets/plataforma.jpg");
	for (int i = 0; i < 8; i++) { sprite[i].setTexture(textura); }
	
	
	for (int i = 0; i < 8; i++) {
		sprite[i].setPosition(50 + x, 600);
		x += 70;
	}
	
	for (int i = 0; i < 7; i++) {
		sprite[i].scale((float)0.15, (float) -0.20 - tamaño_y);
		tamaño_y += 0.20;
	}

	sprite[7].setPosition(525, 241);
	sprite[7].scale((float)0.98, (float)0.10);

	while (ventana.isOpen())
	{
		ventana.clear();
		for (int i = 0; i < 8; i++) { ventana.draw(sprite[i]); }
		ventana.display();
	}
	return 0;
}