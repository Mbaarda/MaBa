#include <common/entity.h>

Entity::Entity() {

	_parent = nullptr;
	_sprite = nullptr;

	pos = glm::vec3(0, 0, 0);
	rotation = glm::vec3(0, 0, 0);
	scale = glm::vec3 (0, 0, 0);

}


Entity::~Entity() {
	
}


void Entity::addSprite(const std::string& file_path) {

	_sprite = nullptr;
	_sprite = new Sprite(file_path);
}

void Entity::addChild(Entity* child) {

	if (child->_parent != nullptr) {
		child->_parent->removeChild(child);
	}
	child->_parent = this;
	this->_children.push_back(child);
}



