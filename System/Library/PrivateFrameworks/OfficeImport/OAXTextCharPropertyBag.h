//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXTextCharPropertyBag : NSObject
{
}

+ (void)readCharacterProperties:(struct _xmlNode *)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;	// IMP=0x000000000019994f
+ (id)stringWithUnderlineType:(unsigned char)arg1;	// IMP=0x0000000000300a3b
+ (id)stringWithStrikeThroughType:(unsigned char)arg1;	// IMP=0x0000000000300a10
+ (id)stringWithCapsType:(unsigned char)arg1;	// IMP=0x00000000003009e5
+ (void)readFont:(struct _xmlNode *)arg1 characterProperties:(id)arg2;	// IMP=0x00000000001c97ab
+ (void)readFormatting:(struct _xmlNode *)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;	// IMP=0x0000000000300802
+ (unsigned char)readUnderlineType:(id)arg1;	// IMP=0x0000000000300760
+ (id)oaxUnderlineMap;	// IMP=0x00000000003006ac

@end
