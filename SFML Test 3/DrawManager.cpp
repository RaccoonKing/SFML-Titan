#include "stdafx.h"
#include "DrawManager.h"
#include "GlobalWindow.h"

DrawManager::DrawManager()
{
	
}

DrawManager::~DrawManager()
{
}

bool DrawManager::Initialize(int p_iWidth, int p_iHeight)
{
	//sf::RenderWindow window(sf::VideoMode(p_iWidth, p_iHeight), "EYM THE BEST", sf::Style::Titlebar | sf::Style::Close);
	////window.create();
	//GlobalWindow globalwindow(window);

	window.create(sf::VideoMode(p_iWidth, p_iHeight), "EYM THE BEST", sf::Style::Titlebar | sf::Style::Close);

	return true;
}

void DrawManager::Shutdown()
{

}

void DrawManager::Clear()
{
	
}

void DrawManager::Present()
{
}

//void DrawManager::GetWindow(sf::RenderWindow* p_pDrawManager)
//{
//	p_pDrawManager = m_pxWindow;
//}
