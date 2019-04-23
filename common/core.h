#ifndef CORE_H
#define CORE_H

#include <gl/glew.h>
#include <glfw3.h>
#include<common/scene.h>
#include<common/renderer.h>
#include<common/entity.h>
#include<common/camera.h>
#include<iostream>

class Core
{
public:

	Core();
	~Core();

	Renderer renderer;

	


	//void renderScene(Scene* scene);



private:
	



};

#endif // !CORE_H
