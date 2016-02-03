#pragma once



struct System
{
	int m_iScreenWidth;
	int m_iScreenHeight;

};

class IState
{
public:
	virtual ~IState() {};
	virtual void Enter() {};
	virtual bool Update(float p_fDeltaTime) = 0;
	virtual void Exit() {};
	virtual void Draw() = 0;
	virtual IState* NextState() = 0;
};
