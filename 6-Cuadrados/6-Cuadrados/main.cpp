#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

Texture t_azul, t_gris, t_rojo, t_amarilla;
Sprite s_azul, s_gris, s_rojo, s_amarilla;

int main() {

	float escala_x, escala_y;
	float x, y, grisx, grisy;
	float rojox, rojoy, amarillox, amarilloy;

	sf::RenderWindow ventana(sf::VideoMode(800, 800, 32), "Cuadrados");

	t_azul.loadFromFile("assets/cuad_blue.png");
	t_gris.loadFromFile("assets/cuad_grey.png");
	t_rojo.loadFromFile("assets/cuad_red.png");
	t_amarilla.loadFromFile("assets/cuad_yellow.png");

	s_azul.setTexture(t_azul);
	s_gris.setTexture(t_gris);
	s_rojo.setTexture(t_rojo);
	s_amarilla.setTexture(t_amarilla);

	s_azul.setPosition(0, 128);
	x = t_azul.getSize().x;
	y = t_azul.getSize().y;
	grisx = t_gris.getSize().x;
	grisy = t_gris.getSize().y;

	escala_x = x / grisx;
	escala_y = y / grisy;

	float posx = t_azul.getSize().x;
	s_gris.setPosition(posx, s_azul.getPosition().y);
	s_gris.setScale(escala_x, escala_y);

	rojox = t_rojo.getSize().x;
	rojoy = t_rojo.getSize().y;
	escala_x = x / rojox;
	escala_y = y / rojoy;
	s_rojo.setScale(escala_x, escala_y);

	amarillox = t_amarilla.getSize().x;
	amarilloy = t_amarilla.getSize().y;
	escala_x = x / amarillox;
	escala_y = y / amarilloy;
	
	s_amarilla.setPosition(posx, s_rojo.getPosition().y);
	s_amarilla.setScale(escala_x, escala_y);

	while (ventana.isOpen())
	{
		ventana.clear();

		ventana.draw(s_azul);
		ventana.draw(s_gris);
		ventana.draw(s_rojo);
		ventana.draw(s_amarilla);

		ventana.display();
	}
	return 0;
}