//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIColor, UITraitCollection;

@interface DOCTagRenderingRequest : NSObject
{
    double _tagDimension;	// 8 = 0x8
    NSArray *_tags;	// 16 = 0x10
    NSArray *_fillColors;	// 24 = 0x18
    UIColor *_ringColor;	// 32 = 0x20
    UIColor *_selectionOutlineColor;	// 40 = 0x28
    unsigned long long _clearTagRenderingMode;	// 48 = 0x30
    long long _layoutDirection;	// 56 = 0x38
    double _knockOutBorderWidth;	// 64 = 0x40
    unsigned long long _spacingType;	// 72 = 0x48
}

+ (id)requestForChainedTags:(id)arg1 tagDimension:(double)arg2;	// IMP=0x0000000000011bd8
+ (id)requestForTag:(id)arg1 tagDimension:(double)arg2;	// IMP=0x0000000000011aa4
+ (id)requestWithTagDimension:(double)arg1;	// IMP=0x0000000000011a66
- (void).cxx_destruct;	// IMP=0x00000000000123ed
@property(nonatomic) unsigned long long spacingType; // @synthesize spacingType=_spacingType;
@property(nonatomic) double knockOutBorderWidth; // @synthesize knockOutBorderWidth=_knockOutBorderWidth;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(nonatomic) unsigned long long clearTagRenderingMode; // @synthesize clearTagRenderingMode=_clearTagRenderingMode;
@property(retain, nonatomic) UIColor *selectionOutlineColor; // @synthesize selectionOutlineColor=_selectionOutlineColor;
@property(retain, nonatomic) UIColor *ringColor; // @synthesize ringColor=_ringColor;
@property(retain, nonatomic) NSArray *fillColors; // @synthesize fillColors=_fillColors;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) double tagDimension; // @synthesize tagDimension=_tagDimension;
- (id)_UIImageCacheKeyWithAdditionalComponents:(id)arg1;	// IMP=0x0000000000011f63
@property(readonly, nonatomic) UITraitCollection *traitCollection;
- (id)init;	// IMP=0x0000000000011de3

@end

