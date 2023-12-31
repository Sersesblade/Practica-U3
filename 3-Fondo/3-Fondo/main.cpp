#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

Texture textura;
Sprite sprite;

int main() {
	//Tamaño de la pantalla.
	float x, y;

	//Tamaño fondo
	float fondo_x, fondo_y;
	float escala_x, escala_y;

	sf::RenderWindow ventana(sf::VideoMode(800, 600, 32), "Fondo");

	textura.loadFromFile("assets/fondo.jpg");
	sprite.setTexture(textura);

	textura.setSmooth(true);

	x = ventana.getSize().x;
	y = ventana.getSize().y;
	fondo_x = textura.getSize().x;
	fondo_y = textura.getSize().y;

	escala_x = x / fondo_x;
	escala_y = y / fondo_y;

	sprite.setScale(escala_x, escala_y);

	while (ventana.isOpen())
	{

		ventana.clear();
		ventana.draw(sprite);
		ventana.display();
	}
	return 0;
}