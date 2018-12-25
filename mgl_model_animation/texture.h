/*

Copyright 2011 Etay Meiri

Modified By: Bassem Adas
Modification Date: 22/12/2018
Modification:	1- using stb_image.h instead of ImageMagick-6/Magick++.h
				2- 3 and 4 (with alpha) channel Texture loading.

*/

#ifndef TEXTURE_H
#define	TEXTURE_H

#include <string>

#include <GL/glew.h>
//#include <ImageMagick-6/Magick++.h>


class Texture
{
public:
	Texture(GLenum TextureTarget, const std::string& FileName);

	bool Load();

	void Bind(GLenum TextureUnit);

private:
	std::string m_fileName;
	GLenum m_textureTarget;
	GLuint m_textureObj;
	//Magick::Image m_image;
	//Magick::Blob m_blob;
	unsigned char * m_blob;
};


#endif	/* TEXTURE_H */

#pragma once
