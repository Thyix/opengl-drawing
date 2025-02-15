#pragma once
class Line
{
public:
	Line();
	void Draw(float x, float y, bool random, RGBCOLOR color, GLuint program);
	void reDraw(GLuint program);
	int Size();
	char* Name();
	void Clear();
	bool isClicked();
	void Init(float x, float y);
	void Process(float x, float y, bool random, RGBCOLOR color, GLuint program);
};

