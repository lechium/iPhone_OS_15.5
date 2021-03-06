//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/OABPropertiesManager-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OABDefaultsManager : NSObject <OABPropertiesManager>
{
}

- (_Bool)hidden;	// IMP=0x000000000002ead2
- (_Bool)textPathStrikethrough;	// IMP=0x000000000030311c
- (_Bool)textPathSmallcaps;	// IMP=0x0000000000200f92
- (_Bool)textPathUnderline;	// IMP=0x0000000000303112
- (_Bool)textPathItalic;	// IMP=0x0000000000200f80
- (_Bool)textPathBold;	// IMP=0x000000000023e859
- (id)textPathFontFamily;	// IMP=0x00000000003030ce
- (int)textPathFontSize;	// IMP=0x0000000000166dc2
- (int)textPathTextAlignment;	// IMP=0x0000000000155c92
- (id)textPathUnicodeString;	// IMP=0x000000000030308a
- (_Bool)isTextPath;	// IMP=0x0000000000029e00
- (_Bool)isShadowOK;	// IMP=0x0000000000153c1c
- (_Bool)isStrokeOK;	// IMP=0x00000000001034cc
- (_Bool)isFillOK;	// IMP=0x0000000000103b0c
- (int)shadowSoftness;	// IMP=0x0000000000153dde
- (int)shadowOffsetY;	// IMP=0x0000000000153efa
- (int)shadowOffsetX;	// IMP=0x0000000000153e6c
- (int)shadowAlpha;	// IMP=0x0000000000153d4c
- (int)shadowType;	// IMP=0x0000000000153f88
- (_Bool)isShadowed;	// IMP=0x000000000002200a
- (int)strokeEndArrowLength;	// IMP=0x0000000000021da6
- (int)strokeEndArrowWidth;	// IMP=0x0000000000021d18
- (int)strokeEndArrowType;	// IMP=0x0000000000021c8e
- (int)strokeStartArrowLength;	// IMP=0x0000000000021bbe
- (int)strokeStartArrowWidth;	// IMP=0x0000000000021b30
- (int)strokeStartArrowType;	// IMP=0x0000000000021aa6
- (int)strokeJoinStyle;	// IMP=0x0000000000021a18
- (int)strokeCapStyle;	// IMP=0x0000000000021ec2
- (const void *)strokeCustomDash;	// IMP=0x00000000000218e2
- (int)strokePresetDash;	// IMP=0x000000000002196c
- (int)strokeCompoundType;	// IMP=0x0000000000021f66
- (int)strokeMiterLimit;	// IMP=0x00000000001da3a2
- (int)strokeWidth;	// IMP=0x0000000000021e34
- (int)strokeFgAlpha;	// IMP=0x000000000002170c
- (struct EshBlip *)strokeFillBlipDataReference;	// IMP=0x0000000000303082
- (id)strokeFillBlipName;	// IMP=0x00000000001d9a82
- (unsigned int)strokeFillBlipID;	// IMP=0x0000000000201b70
- (int)strokeFillType;	// IMP=0x0000000000021858
- (id)fillBlipName;	// IMP=0x0000000000103d1e
- (struct EshBlip *)fillBlipDataReference;	// IMP=0x000000000030307a
- (unsigned int)fillBlipID;	// IMP=0x00000000002270b2
- (const void *)fillGradientColors;	// IMP=0x000000000010a400
- (int)fillFocusBottom;	// IMP=0x0000000000163d9c
- (int)fillFocusRight;	// IMP=0x0000000000163d3a
- (int)fillFocusTop;	// IMP=0x0000000000163cd8
- (int)fillFocusLeft;	// IMP=0x0000000000163c76
- (int)fillFocus;	// IMP=0x0000000000156780
- (int)fillAngle;	// IMP=0x000000000015676d
- (int)fillBgAlpha;	// IMP=0x000000000010a462
- (int)fillFgAlpha;	// IMP=0x00000000000215ba
- (int)fillType;	// IMP=0x00000000000213b8
- (struct EshColor)shadowColor;	// IMP=0x00000000001e2508
- (struct EshColor)strokeBgColor;	// IMP=0x00000000001d9b60
- (struct EshColor)strokeFgColor;	// IMP=0x00000000000ad340
- (_Bool)isStroked;	// IMP=0x000000000013e094
- (struct EshColor)fillBgColor;	// IMP=0x000000000016ba80
- (struct EshColor)fillFgColor;	// IMP=0x0000000000103c95
- (_Bool)isFilled;	// IMP=0x000000000013e070

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

