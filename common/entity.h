#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include <vector>

#include <string>

#include <glm/gtx/matrix_decompose.hpp>
#include <glm/glm.hpp>

#include <common/sprite.h>

class Entity {

public:
	Entity();
	~Entity();

	glm::vec3 pos;
	glm::vec3 scale;
	glm::vec3 rotation;

	Entity* _parent;
	Sprite* _sprite;
	std::vector <Entity*> _children;
	Entity* parent() { return _parent; };
	//std::vector<Entity*> _children;
	

	void addChild(Entity* child);
	void removeChild(Entity* child);

	//void removeChild(Entity* child);

	Sprite* sprite() { return _sprite; };
	void addSprite(const std::string& filepath);
	

private:

	
	


};
#endif 
