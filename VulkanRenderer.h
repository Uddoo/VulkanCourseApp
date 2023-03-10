#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <stdexcept>
#include <vector>
#include <iostream>

class VulkanRenderer
{
public:
	VulkanRenderer();
	~VulkanRenderer();
};

// Path: VulkanRenderer.cpp