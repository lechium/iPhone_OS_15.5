//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXShape3D : NSObject
{
}

+ (_Bool)isEmpty:(id)arg1;	// IMP=0x00000000002ff2c8
+ (void)writeShape3DMaterialOnly:(id)arg1 to:(id)arg2;	// IMP=0x00000000002ff1b1
+ (void)writeShape3D:(id)arg1 to:(id)arg2;	// IMP=0x00000000002feccc
+ (void)writeBevel:(id)arg1 to:(id)arg2;	// IMP=0x00000000002fea68
+ (id)readShape3DFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;	// IMP=0x00000000002fe674
+ (id)readBevelFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00000000001e1450
+ (id)materialEnumMap;	// IMP=0x00000000001e163f
+ (id)bevelTypeEnumMap;	// IMP=0x000000000021f54e

@end

