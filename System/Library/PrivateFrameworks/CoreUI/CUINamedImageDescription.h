//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CUINamedImageDescription : NSObject
{
    double _scale;	// 8 = 0x8
    long long _idiom;	// 16 = 0x10
    long long _subtype;	// 24 = 0x18
    long long _sizeClassHorizontal;	// 32 = 0x20
    long long _sizeClassVertical;	// 40 = 0x28
    long long _displayGamut;	// 48 = 0x30
    long long _layoutDirection;	// 56 = 0x38
    int _blendMode;	// 64 = 0x40
    long long _templateRenderingMode;	// 72 = 0x48
    long long _imageType;	// 80 = 0x50
    CDStruct_3c058996 _edgeInsets;	// 88 = 0x58
    CDStruct_3c058996 _alignmentEdgeInsets;	// 120 = 0x78
    long long _resizingMode;	// 152 = 0x98
    int _exifOrientation;	// 160 = 0xa0
    NSString *_appearanceName;	// 168 = 0xa8
}

@property(nonatomic) int exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property(nonatomic) long long resizingMode; // @synthesize resizingMode=_resizingMode;
@property(nonatomic) CDStruct_3c058996 alignmentEdgeInsets; // @synthesize alignmentEdgeInsets=_alignmentEdgeInsets;
@property(nonatomic) CDStruct_3c058996 edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(nonatomic) long long templateRenderingMode; // @synthesize templateRenderingMode=_templateRenderingMode;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(copy, nonatomic) NSString *appearanceName; // @synthesize appearanceName=_appearanceName;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(nonatomic) long long displayGamut; // @synthesize displayGamut=_displayGamut;
@property(nonatomic) long long sizeClassVertical; // @synthesize sizeClassVertical=_sizeClassVertical;
@property(nonatomic) long long sizeClassHorizontal; // @synthesize sizeClassHorizontal=_sizeClassHorizontal;
@property(nonatomic) long long subtype; // @synthesize subtype=_subtype;
@property(nonatomic) long long idiom; // @synthesize idiom=_idiom;
@property(nonatomic) double scale; // @synthesize scale=_scale;
- (id)description;	// IMP=0x00000000000746a4
@property(nonatomic) _Bool isTemplate;
- (void)dealloc;	// IMP=0x0000000000074644

@end
