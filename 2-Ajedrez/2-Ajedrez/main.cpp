#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

Texture chessb, chessw;
Sprite s_chessb, s_chessw;

int main() {
	
	sf::RenderWindow ventana(sf::VideoMode(800, 800, 32), "Ajedrez");
	
	chessw.loadFromFile("assets/chessw.png");
	chessb.loadFromFile("assets/chessb.png");

	s_chessw.setTexture(chessw);
	s_chessw.setScale(0.78, 0.78);
	s_chessb.setTexture(chessb);
	s_chessb.setScale(0.78, 0.78);
	
	while (ventana.isOpen())
	{
		float nuevaposx = 100; float nuevaposy = 0;

		ventana.clear();

		for (int i = 0; i < 64; i++) {

			s_chessw.setPosition(nuevaposx, nuevaposy);
			ventana.draw(s_chessw);

			if (i > 0) { nuevaposx += 200; }

			if (i == 8 || i == 16 || i == 24 || i == 32 || i == 40 || i == 48 || i == 56) {

				nuevaposy = nuevaposy + 100; nuevaposx = 0;
				if (i == 16) { nuevaposx = 100; }
				if (i == 32) { nuevaposx = 100; }
				if (i == 48) { nuevaposx = 100; }
			}
		}

		nuevaposx = 0; nuevaposy = 0;
		for (int i = 0; i < 64; i++) {

			s_chessb.setPosition(nuevaposx, nuevaposy);
			ventana.draw(s_chessb);

			if (i > 0) { nuevaposx += 200; }

			if (i == 8 || i == 16 || i == 24 || i == 32 || i == 40 || i == 48 || i == 56) {

				nuevaposy = nuevaposy + 100; nuevaposx = 100;
				if (i == 16) { nuevaposx = 0; }
				if (i == 32) { nuevaposx = 0; }
				if (i == 48) { nuevaposx = 0; }
			}
		}
		

		ventana.display();
	}
	return 0;
}