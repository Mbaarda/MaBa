#ifndef CAMERA_H
#define CAMERA_H

#include <GL/glew.h>
#include <glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/euler_angles.hpp>

class Camera 
{
	public:
		Camera();
		~Camera();

		void computeMatricesFromInputs(GLFWwindow* window);

		glm::mat4 Camera::getViewMatrix() {
			return _viewMatrix;
		}
		glm::vec3 getCursor() {
			return cursor;
		};

	private:
		// Initial position : on +Z
		glm::mat4 _viewMatrix;
		glm::vec3 position = glm::vec3(0, 0, 5);
		glm::vec3 cursor = glm::vec3(0, 0, 0);
		
};


#endif
