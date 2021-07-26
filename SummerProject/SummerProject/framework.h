#pragma once
// ���̺귯���� ��Ŭ��� �մϴ�.
// ���Զ��̺귯���� �����մϴ�. ex) <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <SFML/Graphics.hpp>
using namespace sf;
#include <iostream>
#include <map>
#include<vector>
#include <stack>
using namespace std;
#define DELETE(x) if(x) delete(x); (x)=nullptr
constexpr float PI = 3.14159265f;
namespace Math {
	inline const Vector2f Normalize(const Vector2f& vec1, const Vector2f& vec2) {
		Vector2f direction;
		direction.x = vec1.x - vec2.x;
		direction.y = vec2.y - vec2.y;
		float length = sqrt((direction.x * direction.x) + (direction.y * direction.y));
		pow(direction.x, 2);
		return {direction.x / length, direction.y / length};
	}

}