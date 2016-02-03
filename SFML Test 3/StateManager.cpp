#include "stdafx.h"
#include "StateManager.h"
#include "IState.h"

StateManager::StateManager()
{
	m_pxCurrentState = nullptr;
	
}

StateManager::~StateManager()
{
	// Before using current state we check that it is not null,
	// if it is not null we call the states Exit function and then
	// delete the state and null the pointer.
	if (m_pxCurrentState != nullptr)
	{
		m_pxCurrentState->Exit();
		delete m_pxCurrentState;
		m_pxCurrentState = nullptr;
	}
}

bool StateManager::Update()
{
	// Calculate the time between this frame and previous frame by
	// deducting current ticks with what ticks were the last update call.
	

	return true;
}

void StateManager::Draw()
{
	if (m_pxCurrentState != nullptr)
	{
		m_pxCurrentState->Draw();
	}
}

void StateManager::SetState(IState* p_pxState)
{
	// If the current state is not null then call exit and delete the object
	// and null the pointer.
	if (m_pxCurrentState != nullptr)
	{
		m_pxCurrentState->Exit();
		delete m_pxCurrentState;
		m_pxCurrentState = nullptr;
	}
	// Sets the current state to be the state sent as parameter and 
	// call Enter function on the current state.
	m_pxCurrentState = p_pxState;
	m_pxCurrentState->Enter();
}


