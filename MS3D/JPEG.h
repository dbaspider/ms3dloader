#ifndef JPEG_H
#define JPEG_H

#pragma comment(lib, "data/lib/jpeg.lib")



#include "data/include/jpeglib.h"

tImageJPG *LoadJPG(const char *filename);

void DecodeJPG(jpeg_decompress_struct* cinfo, tImageJPG *pImageData);

void JPEG_Texture(UINT textureArray[], LPSTR strFileName, int textureID);



#endif
