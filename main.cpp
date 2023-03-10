#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <stdexcept>
#include <vector>
#include <iostream>

GLFWwindow* window;

void initWindow(std::string wName = "Vlukan", const int wWidth = 800, const int wHeight = 600)
{
	// Initialize GLFW
	glfwInit();

	// Tell GLFW not to create an OpenGL context
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	// Disable window resizing
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	// Create a window
	window = glfwCreateWindow(wWidth, wHeight, wName.c_str(), nullptr, nullptr);
}

int main()
{
	// Initialize the window
	initWindow("Vulkan", 800, 600);

	// Main loop
	while (!glfwWindowShouldClose(window))
	{
		// Poll for window events
		glfwPollEvents();
	}

	// Destroy the window
	glfwDestroyWindow(window);
	glfwTerminate();

	return 0;
}