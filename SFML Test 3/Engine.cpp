#include "stdafx.h"
#include "Engine.h"
#include "DrawManager.h"
#include "GlobalWindow.h"
#include "IState.h"


const int SCREENWIDTH = 1280;
const int SCREEHEIGHT = 720;

Engine::Engine()
{
}


Engine::~Engine()
{
}

bool Engine::Initialize()
{
	m_pxDrawManager = new DrawManager();
	if (!m_pxDrawManager->Initialize(SCREENWIDTH, SCREEHEIGHT))
		return false;

	/*sf::RectangleShape shape(sf::Vector2f (10,10));
	sf::RectangleShape player(sf::Vector2f(100, 100));
	shape.setPosition(500, 400);
	shape.setFillColor(sf::Color::Yellow);

	shape.setFillColor(sf::Color::Cyan);*/
	System system;
	system.m_iScreenWidth = SCREENWIDTH;
	system.m_iScreenHeight = SCREEHEIGHT;


	
	return true;
}

void Engine::Shutdown()
{
}

void Engine::Update()
{
	

	sf::Texture texture;
	if (texture.loadFromFile("../Assets/Test.png", sf::IntRect(0, 0, 40, 40)))
	{
		


		sf::Sprite sprite;
		sprite.setTexture(texture);

		sprite.setColor(sf::Color(150, 0, 150, 255));



		//if (!window.isOpen())return-1;
		const float targetTime = 1.0f / 60.f;
		float accumalotor = 0.0f;
		float frameTime = 0.0f;

		sf::Clock clock;

		while (window.isOpen())
		{
			sf::Time deltaTime = clock.restart();
			frameTime = std::min(deltaTime.asSeconds(), 0.1f);
			accumalotor += frameTime;
			while (accumalotor > targetTime)
			{
				accumalotor -= targetTime;
				sf::Event event;
				while (window.pollEvent(event))
				{
					if (event.type == sf::Event::Closed)
					{
						window.close();
					}
				}
				sf::Vector2i aimPos = sf::Mouse::getPosition(window);
				//shape.setPosition(aimPos.x, aimPos.y);
				sprite.setPosition(aimPos.x, aimPos.y);


			}

			window.clear(sf::Color(0x00, 0x00, 0x00, 0xff));
			window.draw(sprite);
			/*window.draw(shape);
			window.draw(player);*/
			window.display();
		}
	}
}

void Engine::HandleEvents()
{
}
