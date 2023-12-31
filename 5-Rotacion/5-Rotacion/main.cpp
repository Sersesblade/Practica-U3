#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

Texture textura;
Sprite sprite;

int main() {
	
	sf::RenderWindow ventana(sf::VideoMode(800, 600, 32), "Rotacion");

	textura.loadFromFile("assets/chessw.png");
	sprite.setTexture(textura);

	sprite.setPosition(ventana.getSize().x / 2, ventana.getSize().y / 2);
	sprite.setScale(0.5, 0.5);

	sprite.setOrigin(sprite.getLocalBounds().width / (float)2, sprite.getLocalBounds().height / (float)2);

	bool rotacion; float velocidad_R = 0;

	while (ventana.isOpen())
	{
		rotacion = true;
		ventana.clear();

		while (rotacion) {
			sprite.setRotation(velocidad_R);
			velocidad_R += 0.5;
			rotacion = false;
		}

		ventana.draw(sprite);
		ventana.display();
	}
	return 0;
}