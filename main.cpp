﻿// VulkanCourseApp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/glm.hpp>
#include <glm/mat4x4.hpp>

int main()
{
	std::cout << "Hello World!\n";

	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API); // 不创建OpenGL上下文
	GLFWwindow* window = glfwCreateWindow(800, 600, "Vulkan", nullptr, nullptr); // 创建窗口

	uint32_t extensionCount = 0; // 扩展数量
	vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr); // 获取扩展数量

	printf("Extension count : %i\n", extensionCount); // 打印扩展数量

	glm::mat4 testMatrix(1.0f); // 创建矩阵
	glm::vec4 testVector(1.0f); // 创建向量

	auto testResult = testMatrix * testVector; // 矩阵乘向量

	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents(); // 处理窗口事件，检查是否按下了什么东西，例如窗口上的x
	}

	glfwDestroyWindow(window); // 销毁窗口

	glfwTerminate(); // 终止GLFW
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
