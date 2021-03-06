//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/NSCopying-Protocol.h>

@class ARUICelebration, MISSING_TYPE, UIColor;

@interface ARUIRing : NSObject <NSCopying>
{
    float _diameter;	// 8 = 0x8
    float _thickness;	// 12 = 0xc
    float _percentage;	// 16 = 0x10
    float _opacity;	// 20 = 0x14
    float _emptyOpacity;	// 24 = 0x18
    float _trackOpacity;	// 28 = 0x1c
    float _scale;	// 32 = 0x20
    float _zRotation;	// 36 = 0x24
    UIColor *_topColor;	// 40 = 0x28
    UIColor *_bottomColor;	// 48 = 0x30
    MISSING_TYPE *_translation;	// 56 = 0x38
    ARUICelebration *_celebration;	// 64 = 0x40
    MISSING_TYPE *_topColorVector;	// 80 = 0x50
    MISSING_TYPE *_topColorPremultipliedVector;	// 96 = 0x60
    MISSING_TYPE *_bottomColorVector;	// 112 = 0x70
    MISSING_TYPE *_bottomColorPremultipliedVector;	// 128 = 0x80
}

+ (id)randomRing;	// IMP=0x000000000000d37d
- (void).cxx_destruct;	// IMP=0x000000000000d71d
@property(readonly, nonatomic) MISSING_TYPE *bottomColorPremultipliedVector; // @synthesize bottomColorPremultipliedVector=_bottomColorPremultipliedVector;
@property(readonly, nonatomic) MISSING_TYPE *bottomColorVector; // @synthesize bottomColorVector=_bottomColorVector;
@property(readonly, nonatomic) MISSING_TYPE *topColorPremultipliedVector; // @synthesize topColorPremultipliedVector=_topColorPremultipliedVector;
@property(readonly, nonatomic) MISSING_TYPE *topColorVector; // @synthesize topColorVector=_topColorVector;
@property(retain, nonatomic) ARUICelebration *celebration; // @synthesize celebration=_celebration;
@property(nonatomic) MISSING_TYPE *translation; // @synthesize translation=_translation;
@property(nonatomic) float zRotation; // @synthesize zRotation=_zRotation;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) float trackOpacity; // @synthesize trackOpacity=_trackOpacity;
@property(nonatomic) float emptyOpacity; // @synthesize emptyOpacity=_emptyOpacity;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(nonatomic) float percentage; // @synthesize percentage=_percentage;
@property(nonatomic) float thickness; // @synthesize thickness=_thickness;
@property(nonatomic) float diameter; // @synthesize diameter=_diameter;
@property(retain, nonatomic) UIColor *bottomColor; // @synthesize bottomColor=_bottomColor;
@property(retain, nonatomic) UIColor *topColor; // @synthesize topColor=_topColor;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d345
- (id)description;	// IMP=0x000000000000d1f5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000ca39
- (unsigned long long)hash;	// IMP=0x000000000000c91a
- (void)_updatePremultipliedBottomColor;	// IMP=0x000000000000c841
- (void)_updatePremultipliedTopColor;	// IMP=0x000000000000c76e
- (id)initWithRing:(id)arg1;	// IMP=0x000000000000c4ea
- (id)init;	// IMP=0x000000000000c49c

@end

