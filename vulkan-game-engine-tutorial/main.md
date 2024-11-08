
# Table of Contents



\#define GLFW<sub>INCLUDE</sub><sub>VULKAN</sub>
\#include <GLFW/glfw3.h>

\#define GLM<sub>FORCE</sub><sub>RADIANS</sub>
\#define GLM<sub>FORCE</sub><sub>DEPTH</sub><sub>ZERO</sub><sub>TO</sub><sub>ONE</sub>
\#include <glm/mat4x4.hpp>
\#include <glm/vec4.hpp>

\#include <iostream>

int main() {
  glfwInit();

int a = 3;
int b = a + 6;

glfwWindowHint(GLFW<sub>CLIENT</sub><sub>API</sub>, GLFW<sub>NO</sub><sub>API</sub>);
GLFWwindow \*window =
    glfwCreateWindow(800, 600, "Vulkan window", nullptr, nullptr);

uint32<sub>t</sub> extensionCount = 0;
vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

std::cout << extensionCount << " extensions supported\n";

glm::mat4 matrix;
glm::vec4 vec;
auto test = matrix \* vec;

while (!glfwWindowShouldClose(window)) {
  glfwPollEvents();
}

glfwDestroyWindow(window);

glfwTerminate();

  return 0;
}

