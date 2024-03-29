#include "Scene.h"

Scene::Scene(Mesh object, 
	const glm::vec3 eye, const glm::vec3 center, const glm::vec3 up, 
	const float z_near, const float z_far, const float near_w, const float near_h)
	: object_(std::move(object)),
	eye_(eye),
	center_(center),
	up_(up),
	z_near_(z_near),
	z_far_(z_far),
	near_w_(near_w),
	near_h_(near_h)
{
}

Scene::Scene()
	: object_({}, {}),
	eye_({0, 0, 0}),
	center_({0, 0, 0}),
	up_({0, 0, 0}),
	z_near_(0),
	z_far_(0),
	near_w_(0),
	near_h_(0)
{
}

Scene Scene::empty_scene()
{
	return Scene{ {{}, {}}, {0, 0, 0}, {0,0,0}, {0,0,0} };
}

const Mesh& Scene::object() const
{
	return object_;
}

const glm::vec3& Scene::eye() const
{
	return eye_;
}

const glm::vec3& Scene::center() const
{
	return center_;
}

const glm::vec3& Scene::up() const
{
	return up_;
}

float Scene::z_near() const
{
	return z_near_;
}

float Scene::z_far() const
{
	return z_far_;
}

float Scene::near_w() const
{
	return near_w_;
}

float Scene::near_h() const
{
	return near_h_;
}
