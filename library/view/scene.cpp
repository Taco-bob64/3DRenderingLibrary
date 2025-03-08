#include "scene.h"


//ensures that glfw and glad are defined
void Scene::init()
{
	updateClearColor();
}

void Scene::update()
{
	glClear(GL_COLOR_BUFFER_BIT);
}

void Scene::setClearColor(glm::vec4 color)
{
	clearColor = color;
	updateClearColor();
}

void Scene::updateClearColor()
{
	glClearColor(clearColor.x, clearColor.y, clearColor.z, clearColor.w);
}

void Scene::draw()
{
	for (int i = 0; i < models.size(); i++)
	{
		models[i]->draw();
	}
}


void Scene::addModel(Model* model)
{
	models.push_back(model);
}