#ifndef ABOUT_PNG_H
#define ABOUT_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char about_png[] = 
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 
	0x00, 0x00, 0x00, 0x10, 0x08, 0x06, 0x00, 0x00, 0x00, 0x1F, 
	0xF3, 0xFF, 0x61, 0x00, 0x00, 0x00, 0x06, 0x62, 0x4B, 0x47, 
	0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF9, 0x43, 0xBB, 
	0x7F, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 
	0x00, 0x01, 0xBB, 0x00, 0x00, 0x01, 0xBB, 0x01, 0x3A, 0xEC, 
	0xE3, 0xE2, 0x00, 0x00, 0x00, 0x09, 0x76, 0x70, 0x41, 0x67, 
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x5C, 
	0xC6, 0xAD, 0xC3, 0x00, 0x00, 0x02, 0x5A, 0x49, 0x44, 0x41, 
	0x54, 0x38, 0xCB, 0xA5, 0x93, 0x31, 0x4C, 0x53, 0x51, 0x14, 
	0x86, 0xBF, 0x73, 0xEF, 0x7B, 0xF7, 0x51, 0x4A, 0xA1, 0x50, 
	0x94, 0xC2, 0xA4, 0x09, 0x0A, 0x83, 0x89, 0x83, 0xC6, 0x41, 
	0x26, 0xE3, 0xE6, 0x20, 0x0E, 0x62, 0xC0, 0x98, 0x38, 0xB0, 
	0x18, 0x12, 0x5D, 0x0D, 0x89, 0x71, 0x71, 0x30, 0xD1, 0xC5, 
	0x30, 0x18, 0x16, 0x12, 0x9D, 0x20, 0xE0, 0x20, 0x3A, 0x30, 
	0xE1, 0x66, 0xA2, 0x8B, 0x1A, 0x17, 0x23, 0x21, 0x0E, 0x8A, 
	0xA4, 0xC0, 0xAB, 0x18, 0x5B, 0xDA, 0xBE, 0xD7, 0xBE, 0x5E, 
	0x87, 0xD6, 0xB6, 0x0A, 0x9B, 0x37, 0xF9, 0x73, 0x73, 0x6F, 
	0x4E, 0xBE, 0x7B, 0xCE, 0x7F, 0xCF, 0x11, 0x6B, 0x2D, 0xFF, 
	0xB3, 0x9C, 0x7F, 0x2F, 0xE4, 0xC2, 0x8A, 0x47, 0x67, 0x71, 
	0x52, 0x94, 0x9A, 0x18, 0xE8, 0x89, 0xF7, 0x55, 0xA1, 0x2B, 
	0xF3, 0xAB, 0xFC, 0xC9, 0xC2, 0x02, 0xE2, 0x2D, 0xD9, 0xA7, 
	0xE7, 0xB3, 0x7F, 0xC5, 0xB7, 0x66, 0x20, 0xE3, 0x2F, 0x47, 
	0x7B, 0xBB, 0xCC, 0xEC, 0xC5, 0x53, 0xE9, 0xF4, 0xD0, 0x40, 
	0x07, 0x7E, 0x2E, 0x44, 0x80, 0x9E, 0xCE, 0x36, 0xD6, 0x32, 
	0x45, 0x96, 0xDF, 0xFB, 0xD9, 0x6C, 0x3E, 0x1A, 0xB5, 0x4F, 
	0xCE, 0xBD, 0xDE, 0x07, 0x90, 0x6B, 0x2B, 0x23, 0x83, 0xE9, 
	0xF6, 0x57, 0x97, 0xCF, 0xF4, 0x1B, 0x47, 0x2B, 0x7E, 0xE4, 
	0x02, 0x1E, 0x4C, 0x0C, 0x23, 0x02, 0xD3, 0x8B, 0x6B, 0x74, 
	0x76, 0xC4, 0xA8, 0x54, 0x2D, 0xCF, 0xDE, 0x65, 0xC3, 0x75, 
	0x3F, 0xBC, 0x62, 0x67, 0xCF, 0x2E, 0x03, 0x28, 0x00, 0xB9, 
	0xBE, 0x9A, 0x4A, 0x25, 0x63, 0xCB, 0x23, 0xC3, 0xBD, 0xC6, 
	0x2F, 0x44, 0x64, 0xF2, 0x15, 0x52, 0x09, 0x97, 0xB8, 0xA7, 
	0x69, 0x37, 0x9A, 0xFE, 0x64, 0x1B, 0x99, 0x5C, 0x84, 0x5F, 
	0xA8, 0x32, 0x72, 0xAC, 0xDB, 0xF4, 0x76, 0xC6, 0x66, 0xE5, 
	0xD6, 0xBA, 0xD7, 0xF4, 0xC0, 0x91, 0xB1, 0xA3, 0x7D, 0x89, 
	0x54, 0xB6, 0x60, 0x41, 0xAA, 0x20, 0xC2, 0x97, 0x9D, 0x12, 
	0x8B, 0x6F, 0xB7, 0xD0, 0x1A, 0x56, 0xD7, 0x72, 0xB4, 0xC5, 
	0x62, 0x20, 0x02, 0x22, 0x1C, 0x39, 0x1C, 0x4F, 0xFB, 0x1B, 
	0xF9, 0x49, 0xE0, 0xB1, 0x03, 0xE0, 0x1A, 0x6F, 0x02, 0xED, 
	0xB0, 0x55, 0xA8, 0x95, 0x13, 0x45, 0x55, 0x0A, 0x41, 0xC4, 
	0x9D, 0x17, 0x5F, 0x41, 0x84, 0x44, 0x47, 0x3B, 0xDA, 0x02, 
	0x02, 0x88, 0x05, 0xE5, 0xE0, 0x3A, 0xDE, 0xD5, 0x06, 0xA0, 
	0x2C, 0xCE, 0xF1, 0x8F, 0x5B, 0x65, 0x92, 0x31, 0x07, 0xCF, 
	0xD5, 0x04, 0xA5, 0x80, 0xAD, 0x87, 0xA7, 0x1B, 0xE6, 0xF6, 
	0xDD, 0xFE, 0x80, 0x17, 0x77, 0x41, 0x20, 0x88, 0xE0, 0x67, 
	0x29, 0xA2, 0xAC, 0xDC, 0x9E, 0x86, 0x07, 0x68, 0x77, 0x37, 
	0xB4, 0x0E, 0xDB, 0x45, 0x61, 0x23, 0x0F, 0x7E, 0xD9, 0xA0, 
	0x6E, 0xBC, 0x69, 0x00, 0x76, 0x4A, 0xF0, 0x7D, 0x0F, 0x36, 
	0xF6, 0x84, 0xED, 0x92, 0x22, 0x14, 0x17, 0x1C, 0xB7, 0xBB, 
	0xC5, 0x03, 0x93, 0xAD, 0xD5, 0xA7, 0xB0, 0x22, 0x58, 0x11, 
	0xB0, 0xD5, 0x06, 0xC0, 0x8A, 0xC6, 0x2A, 0xD3, 0xF0, 0x00, 
	0x51, 0x20, 0x7C, 0x6E, 0xC9, 0xC0, 0xCC, 0xA3, 0x0D, 0x68, 
	0xB7, 0x2E, 0x03, 0xAA, 0xA5, 0xC7, 0xB4, 0x03, 0x8E, 0x5B, 
	0x97, 0xA9, 0xEF, 0xDE, 0x42, 0x13, 0x10, 0xAA, 0x39, 0x1C, 
	0x77, 0xB3, 0x11, 0x20, 0x0A, 0xA2, 0xA8, 0x09, 0x88, 0xA2, 
	0xDA, 0xCB, 0x8E, 0xA9, 0xC1, 0x94, 0xF2, 0x31, 0xDE, 0x52, 
	0x03, 0x60, 0x67, 0x06, 0x03, 0xB4, 0x99, 0x42, 0x9B, 0x00, 
	0xED, 0x42, 0x25, 0xC4, 0xCE, 0x9C, 0x6C, 0x96, 0xF0, 0xE8, 
	0x04, 0x84, 0xC5, 0x3F, 0xC7, 0x00, 0xD1, 0x97, 0xEC, 0x74, 
	0x22, 0xBB, 0xBF, 0x95, 0xEF, 0x6D, 0x8F, 0x60, 0xD5, 0x73, 
	0x55, 0x8D, 0x7A, 0xD3, 0x4E, 0x91, 0x81, 0x84, 0xE2, 0x50, 
	0x5C, 0xC8, 0xE4, 0x2D, 0xDF, 0x4A, 0x31, 0xFC, 0x50, 0x6D, 
	0x02, 0x53, 0xF6, 0x6E, 0x6A, 0xF9, 0xC0, 0x59, 0x00, 0x90, 
	0xFB, 0xB9, 0x14, 0x95, 0x60, 0x0C, 0x2B, 0xE3, 0x4A, 0x18, 
	0x52, 0xC2, 0x6E, 0xA5, 0x6A, 0xB3, 0x88, 0xCC, 0x93, 0xDC, 
	0x9D, 0xB3, 0x37, 0x07, 0x83, 0x03, 0x87, 0x49, 0x44, 0x0C, 
	0xD0, 0xD6, 0x22, 0xAF, 0xFE, 0x4B, 0x0A, 0x88, 0x80, 0x32, 
	0x10, 0x02, 0xA5, 0xBA, 0x8A, 0xD6, 0xDA, 0xCA, 0x6F, 0xCF, 
	0x9A, 0xE3, 0x95, 0xB9, 0x84, 0xCC, 0x6F, 0x00, 0x00, 0x00, 
	0x25, 0x74, 0x45, 0x58, 0x74, 0x63, 0x72, 0x65, 0x61, 0x74, 
	0x65, 0x2D, 0x64, 0x61, 0x74, 0x65, 0x00, 0x32, 0x30, 0x30, 
	0x39, 0x2D, 0x31, 0x31, 0x2D, 0x31, 0x35, 0x54, 0x31, 0x37, 
	0x3A, 0x30, 0x32, 0x3A, 0x33, 0x34, 0x2D, 0x30, 0x37, 0x3A, 
	0x30, 0x30, 0xB6, 0xE7, 0x8E, 0x12, 0x00, 0x00, 0x00, 0x25, 
	0x74, 0x45, 0x58, 0x74, 0x64, 0x61, 0x74, 0x65, 0x3A, 0x63, 
	0x72, 0x65, 0x61, 0x74, 0x65, 0x00, 0x32, 0x30, 0x31, 0x30, 
	0x2D, 0x30, 0x32, 0x2D, 0x32, 0x30, 0x54, 0x32, 0x33, 0x3A, 
	0x32, 0x36, 0x3A, 0x31, 0x37, 0x2D, 0x30, 0x37, 0x3A, 0x30, 
	0x30, 0x91, 0xA4, 0x4D, 0xA8, 0x00, 0x00, 0x00, 0x25, 0x74, 
	0x45, 0x58, 0x74, 0x64, 0x61, 0x74, 0x65, 0x3A, 0x6D, 0x6F, 
	0x64, 0x69, 0x66, 0x79, 0x00, 0x32, 0x30, 0x31, 0x30, 0x2D, 
	0x30, 0x31, 0x2D, 0x31, 0x31, 0x54, 0x30, 0x39, 0x3A, 0x32, 
	0x34, 0x3A, 0x33, 0x35, 0x2D, 0x30, 0x37, 0x3A, 0x30, 0x30, 
	0xB4, 0x23, 0xDD, 0x4A, 0x00, 0x00, 0x00, 0x67, 0x74, 0x45, 
	0x58, 0x74, 0x4C, 0x69, 0x63, 0x65, 0x6E, 0x73, 0x65, 0x00, 
	0x68, 0x74, 0x74, 0x70, 0x3A, 0x2F, 0x2F, 0x63, 0x72, 0x65, 
	0x61, 0x74, 0x69, 0x76, 0x65, 0x63, 0x6F, 0x6D, 0x6D, 0x6F, 
	0x6E, 0x73, 0x2E, 0x6F, 0x72, 0x67, 0x2F, 0x6C, 0x69, 0x63, 
	0x65, 0x6E, 0x73, 0x65, 0x73, 0x2F, 0x62, 0x79, 0x2D, 0x73, 
	0x61, 0x2F, 0x33, 0x2E, 0x30, 0x2F, 0x20, 0x6F, 0x72, 0x20, 
	0x68, 0x74, 0x74, 0x70, 0x3A, 0x2F, 0x2F, 0x63, 0x72, 0x65, 
	0x61, 0x74, 0x69, 0x76, 0x65, 0x63, 0x6F, 0x6D, 0x6D, 0x6F, 
	0x6E, 0x73, 0x2E, 0x6F, 0x72, 0x67, 0x2F, 0x6C, 0x69, 0x63, 
	0x65, 0x6E, 0x73, 0x65, 0x73, 0x2F, 0x4C, 0x47, 0x50, 0x4C, 
	0x2F, 0x32, 0x2E, 0x31, 0x2F, 0x5B, 0x8F, 0x3C, 0x63, 0x00, 
	0x00, 0x00, 0x25, 0x74, 0x45, 0x58, 0x74, 0x6D, 0x6F, 0x64, 
	0x69, 0x66, 0x79, 0x2D, 0x64, 0x61, 0x74, 0x65, 0x00, 0x32, 
	0x30, 0x30, 0x39, 0x2D, 0x30, 0x33, 0x2D, 0x31, 0x39, 0x54, 
	0x31, 0x30, 0x3A, 0x35, 0x32, 0x3A, 0x35, 0x31, 0x2D, 0x30, 
	0x36, 0x3A, 0x30, 0x30, 0x7F, 0x68, 0xFD, 0x06, 0x00, 0x00, 
	0x00, 0x19, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6F, 0x66, 0x74, 
	0x77, 0x61, 0x72, 0x65, 0x00, 0x77, 0x77, 0x77, 0x2E, 0x69, 
	0x6E, 0x6B, 0x73, 0x63, 0x61, 0x70, 0x65, 0x2E, 0x6F, 0x72, 
	0x67, 0x9B, 0xEE, 0x3C, 0x1A, 0x00, 0x00, 0x00, 0x13, 0x74, 
	0x45, 0x58, 0x74, 0x53, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x00, 
	0x4F, 0x78, 0x79, 0x67, 0x65, 0x6E, 0x20, 0x49, 0x63, 0x6F, 
	0x6E, 0x73, 0xEC, 0x18, 0xAE, 0xE8, 0x00, 0x00, 0x00, 0x27, 
	0x74, 0x45, 0x58, 0x74, 0x53, 0x6F, 0x75, 0x72, 0x63, 0x65, 
	0x5F, 0x55, 0x52, 0x4C, 0x00, 0x68, 0x74, 0x74, 0x70, 0x3A, 
	0x2F, 0x2F, 0x77, 0x77, 0x77, 0x2E, 0x6F, 0x78, 0x79, 0x67, 
	0x65, 0x6E, 0x2D, 0x69, 0x63, 0x6F, 0x6E, 0x73, 0x2E, 0x6F, 
	0x72, 0x67, 0x2F, 0xEF, 0x37, 0xAA, 0xCB, 0x00, 0x00, 0x00, 
	0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82, };

wxBitmap& about_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( about_png, sizeof( about_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
};


#endif //ABOUT_PNG_H
