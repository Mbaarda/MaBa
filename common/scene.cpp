#include <common/scene.h>


Scene::Scene() : Entity()
{
	_camera = new Camera();
	isRunning = false;
}

Scene::~Scene()
{

}