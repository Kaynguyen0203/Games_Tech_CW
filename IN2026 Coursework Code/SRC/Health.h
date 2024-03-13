#pragma once
#ifndef __HEALTH_H__
#define __HEALTH_H__

#include "GameObject.h"

class Health : public GameObject
{
public:
	Health(void);
	~Health(void);

	bool CollisionTest(shared_ptr<GameObject> o);
	void OnCollision(const GameObjectList& objects);
};

#endif
