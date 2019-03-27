#include <iostream>
#include <vector>
#include <MyFramework/entity.h>

Entity::Entity() {

	Entity* _parent = nullptr;
	std::vector<Entity*> _children;

	position =
	rotation =
	scale = 
}

void Entity::addChild(Entity* child) {

	if (child->_parent != nullptr) {
		child->_parent->removeChild(child);
	}
	child->_parent = this;
	this->children.push_back(child);
}

Entity::~Entity() {
	
}
