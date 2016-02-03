#pragma once

class DrawManager
{
public:
	DrawManager();
	~DrawManager();
	bool Initialize(int p_iWidth, int p_iHeight);
	void Shutdown();
	void Clear();
	void Present();
};