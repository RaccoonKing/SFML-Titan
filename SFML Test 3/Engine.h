#pragma once

class DrawManager;
class GlobalWindow;
class Engine
{
public:
	Engine();
	~Engine();
	/**
	* Initializes SDL and creates all Managers
	*/
	bool Initialize();

	/**
	* Quits SDL and deletes all Managers
	*/
	void Shutdown();

	/**
	* The Engines update loop
	*/
	void Update(); 
	void HandleEvents();
private:
	bool m_bRunning;
	DrawManager* m_pxDrawManager;
	//GlobalWindow* window;
};

