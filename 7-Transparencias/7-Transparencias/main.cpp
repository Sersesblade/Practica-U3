#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

Texture textura;
Sprite sprite;

int main() {
	//Tamaño en pixeles de la imagen en x e y.
	int x, y;

	sf::RenderWindow ventana(sf::VideoMode(800, 600, 32), "Sniper");

	textura.loadFromFile("assets/bcircle.png");
	sprite.setTexture(textura);

	sprite.setOrigin(sprite.getLocalBounds().width / (float)2, sprite.getLocalBounds().height / (float)2);
	sprite.setPosition(ventana.getSize().x / 2, ventana.getSize().y / 2);

	while (ventana.isOpen())
	{
		ventana.clear();
		ventana.draw(sprite);
		ventana.display();
	}
	return 0;
}