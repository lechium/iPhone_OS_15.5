//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABShapeGeometry : NSObject
{
}

+ (void)writeFromShape:(id)arg1 toShape:(void *)arg2;	// IMP=0x00000000003072fe
+ (void)writeTextBodyRectsFromGeometry:(id)arg1 toPath:(struct EshPath *)arg2;	// IMP=0x000000000030709d
+ (void)writeFormulasFromGeometry:(id)arg1 toPath:(struct EshPath *)arg2;	// IMP=0x0000000000306dd8
+ (void)writePathCommandsAndParamsFromGeometry:(id)arg1 toPath:(struct EshPath *)arg2;	// IMP=0x00000000003067fa
+ (void)appendAdjustPoint:(struct OADAdjustPoint)arg1 toPathParams:(void *)arg2;	// IMP=0x000000000030669c
+ (void)writeLimoFromGeometry:(id)arg1 toPath:(struct EshPath *)arg2;	// IMP=0x00000000003065b1
+ (void)writeCoordSpaceFromGeometry:(id)arg1 toShape:(void *)arg2;	// IMP=0x00000000003063c2
+ (void)writeAdjustValuesFromGeometry:(id)arg1 toShapeProperties:(struct EshShapeProperties *)arg2;	// IMP=0x0000000000306333
+ (struct EshComputedValue)computedValueWithAdjustCoord:(struct OADAdjustCoord)arg1;	// IMP=0x000000000030631b
+ (void)readFromLimo:(CsPoint_c846a6ec)arg1 toGeometry:(id)arg2;	// IMP=0x00000000001093e3
+ (void)readFromTextBoxRects:(const void *)arg1 toGeometry:(id)arg2;	// IMP=0x00000000001091ee
+ (void)readFromFormulas:(const void *)arg1 toGeometry:(id)arg2;	// IMP=0x000000000010904c
+ (void)readFromPathCommands:(const void *)arg1 pathParams:(const void *)arg2 toGeometry:(id)arg3;	// IMP=0x0000000000108484
+ (void)readFromShape:(void *)arg1 toShape:(id)arg2;	// IMP=0x0000000000029e14
+ (int)actualPathCommandForPathCommand:(int)arg1 index:(unsigned short)arg2;	// IMP=0x0000000000108f13
+ (void)readLimoFromPath:(const struct EshPath *)arg1 toGeometry:(id)arg2;	// IMP=0x0000000000158d74
+ (void)readPathCommandsAndParamsFromPath:(const struct EshPath *)arg1 toGeometry:(id)arg2;	// IMP=0x0000000000158e32
+ (struct OADAdjustCoord)adjustCoordWithComputedValue:(struct EshComputedValue)arg1;	// IMP=0x0000000000108f7f
+ (void)readGeometryCoordSpaceFromShapeProperties:(const struct EshShapeProperties *)arg1 toGeometry:(id)arg2;	// IMP=0x0000000000158c46
+ (void)readAdjustValuesFromShapeProperties:(const struct EshShapeProperties *)arg1 toGeometry:(id)arg2;	// IMP=0x000000000002a45c

@end

