//
//  utf8.h
//  Demo
//
//  Created by wjl on 2019/8/31.
//  Copyright © 2019 ycan. All rights not reserved.
//

#ifndef utf8_h
#define utf8_h

#include <stdio.h>

/**
 @brif encode unicode string to utf8 string.
 @param string [in] a unicode string.
 @param length [in/out] in: unicode string length, you can pass -1 when it terminated by \0. out: utr8 strng length.
 @return a utf8 string which terminat by \0, and you should use free() function to release this point when nolonger use.
 */
unsigned char* utf8_encode_string(wchar_t *string, int *length);

/**
 @brif decode utf8 string to unicode string.
 @param string [in] a utf8 string.
 @param length [in/out] in: utf8 string length, you can pass -1 when it terminated by \0. out: unicode strng length.
 @return a unicode string which terminat by \0, and you should use free() function to reelase this point when nolonger use.
 */
wchar_t* utf8_decode_string(unsigned char *string, int *length);

#endif /* utf8_h */
