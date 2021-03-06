#pragma once
#ifndef __DOOR__
#define __DOOR__
#include "DisplayObject.h"

class Door final : public DisplayObject
{
public:
	Door();
	~Door();
	void draw() override;
	void update() override;
	void clean() override;
};
#endif // !__DOOR__
