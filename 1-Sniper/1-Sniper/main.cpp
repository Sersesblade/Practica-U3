#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>


using namespace sf;


Texture textura;
Sprite sprite[4];

int main() {
	//Tamaño en pixeles de la imagen en x e y.
	int x,y;

	sf::RenderWindow ventana(sf::VideoMode(800, 600, 32),"Sniper");
	
	textura.loadFromFile("assets/rcircle.png");

	for (int i = 0; i < 4; i++) {
		sprite[i].setTexture(textura);
		sprite[i].setOrigin(sprite[i].getLocalBounds().width / (float)2, sprite[i].getLocalBounds().height / (float)2);
	}
	
	sprite[1].setPosition(800, 0);
	sprite[2].setPosition(0, 600);
	sprite[3].setPosition(800, 600);

	while (ventana.isOpen())
	{
		ventana.clear();

		for (int i = 0; i < 4; i++) { ventana.draw(sprite[i]); }

		ventana.display();
	}
	return 0;
}