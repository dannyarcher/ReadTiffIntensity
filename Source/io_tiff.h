//
//  io_tiff.h
//  ReadTifIntensity
//
//  Created by Beau Johnston on 28/04/11.
//  Copyright 2011 University Of New England. All rights reserved.
//

#ifndef IO_TIFF_H
#define IO_TIFF_H

#include <UnixImageIO/tiffio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


    //logical error in reading / writing in 8 bit
unsigned char * read_tiff_rgb_8_bit_from_file(char* fileName);
void write_tiff_rgb_8_bit_from_file(char* fileName, unsigned char * image);

    //only grayscale 16 bit (2Byte)
unsigned short * read_tiff_strip_file(char* fileName);
void write_tiff_strip_file(char* fileName, unsigned short * image);

uint32 getImageLength(void);
uint32 getImageWidth(void);
uint32 getImageOrientation(void);
uint32 getConfig(void);
uint32 getBitsPerSample(void);
uint32 getSamplesPerPixel(void);
uint32 getPhotometric(void);
uint32 getRowsPerStrip(void);
uint32 getImageRowPitch(void);
uint32 getImageSlicePitch(void);

unsigned short * normalizeData(unsigned short* image);
unsigned short * unNormalizeData(unsigned short* image);

#endif
