#ifndef SCENE_H
#define SCENE_H

#include <common/sprite.h>
#include <common/camera.h>
#include <common/entity.h>
#include <vector>


class Scene : public Entity
{

public:
	Scene();
	virtual ~Scene();

	bool isRunning;

	Camera* getCamera() { return _camera; };

private:
	

	Camera* _camera;


};

#endif // !SCENE_H
