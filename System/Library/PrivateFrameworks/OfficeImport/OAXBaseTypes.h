//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXBaseTypes : NSObject
{
}

+ (id)readRotation3DFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00000000001e1086
+ (id)readPoint3DFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00000000002f177c
+ (id)readVector3DFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00000000002f16db
+ (void)writeRectAlignment:(int)arg1 to:(id)arg2;	// IMP=0x00000000002f161c
+ (int)readRectAlignmentFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x0000000000028887
+ (void)writeRelativeRect:(id)arg1 to:(id)arg2;	// IMP=0x00000000002f1307
+ (id)stringForRectAlignment:(int)arg1;	// IMP=0x00000000002f1294
+ (id)readRelativeRectFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x0000000000028bec
+ (struct CGSize)readSize2DFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00000000001ad251
+ (struct CGPoint)readPoint2DFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00000000001ad1c5
+ (float)readOptionalFractionFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x0000000000028ccf
+ (float)readRequiredFractionFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x000000000002776e
+ (double)readOptionalAngleFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x00000000001987ac
+ (double)readRequiredAngleFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x00000000001e1133
+ (float)readOptionalLengthFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x00000000001eeeaa
+ (float)readRequiredLengthFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x00000000001ad227
+ (long long)readOptionalLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2 desiredOutputUnit:(int)arg3;	// IMP=0x00000000002f1278
+ (long long)readRequiredLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2 desiredOutputUnit:(int)arg3;	// IMP=0x00000000002f125b
+ (long long)readOptionalLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x0000000000028cf1
+ (long long)readRequiredLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x000000000002778d
+ (id)rectAlignmentEnumMap;	// IMP=0x00000000001dbdd4

@end

