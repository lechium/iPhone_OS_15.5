//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, PKInkFeatheringDescriptor, PKInkParticleDescriptor, PKInkRenderingDescriptor, PKInkSmoothingDescriptor;

@interface PKInkBehavior : NSObject
{
    _Bool _timeDependent;	// 8 = 0x8
    _Bool _usesAzimuthOrAltitude;	// 9 = 0x9
    _Bool _showBrushIndicator;	// 10 = 0xa
    double _rulerOffsetScale;	// 16 = 0x10
    double _rulerOffsetConstant;	// 24 = 0x18
    _Bool _variableSnappedWidth;	// 32 = 0x20
    NSMutableArray *_cachedRadiusFunctions;	// 40 = 0x28
    NSMutableArray *_cachedOpacityFunctions;	// 48 = 0x30
    NSMutableArray *_cachedEdgeWidthFunctions;	// 56 = 0x38
    NSMutableArray *_cachedAspectRatioFunctions;	// 64 = 0x40
    unique_ptr_efb28c44 _weightFunction;	// 72 = 0x48
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> _radiusOutput;	// 80 = 0x50
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> _opacityOutput;	// 104 = 0x68
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> _edgeWidthOutput;	// 128 = 0x80
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> _aspectRatioOutput;	// 152 = 0x98
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> _brushOpacityOutput;	// 176 = 0xb0
    NSString *_variant;	// 200 = 0xc8
    PKInkRenderingDescriptor *_renderingDescriptor;	// 208 = 0xd0
    double _blendAlpha;	// 216 = 0xd8
    double _targetMultiple;	// 224 = 0xe0
    double _baseAlpha;	// 232 = 0xe8
    PKInkSmoothingDescriptor *_smoothingDescriptor;	// 240 = 0xf0
    PKInkFeatheringDescriptor *_featheringDescriptor;	// 248 = 0xf8
}

+ (double)inkRadiusOverride;	// IMP=0x00000000000c486a
- (id).cxx_construct;	// IMP=0x00000000000c4a7e
- (void).cxx_destruct;	// IMP=0x00000000000c49c7
@property(retain, nonatomic) PKInkFeatheringDescriptor *featheringDescriptor; // @synthesize featheringDescriptor=_featheringDescriptor;
@property(retain, nonatomic) PKInkSmoothingDescriptor *smoothingDescriptor; // @synthesize smoothingDescriptor=_smoothingDescriptor;
@property(nonatomic) double baseAlpha; // @synthesize baseAlpha=_baseAlpha;
@property(nonatomic) double targetMultiple; // @synthesize targetMultiple=_targetMultiple;
@property(nonatomic) double blendAlpha; // @synthesize blendAlpha=_blendAlpha;
@property(readonly, nonatomic) PKInkRenderingDescriptor *renderingDescriptor; // @synthesize renderingDescriptor=_renderingDescriptor;
@property(readonly, nonatomic) NSString *variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) PKInkParticleDescriptor *particleDescriptor;
- (id)initWithRenderingDescriptor:(id)arg1 variant:(id)arg2;	// IMP=0x00000000000c478f
@property(readonly, nonatomic) _Bool isEraser; // @dynamic isEraser;
@property(readonly, nonatomic) NSArray *inkFunctions; // @dynamic inkFunctions;
- (id)description;	// IMP=0x00000000000c4ab7

@end
