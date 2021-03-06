//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOFeatureStyleAttributes;

__attribute__((visibility("hidden")))
@interface PersonalizedItemStyleAttributesAdornment
{
    GEOFeatureStyleAttributes *_styleAttributes;	// 8 = 0x8
}

+ (id)adornmentWithStyleAttributes:(id)arg1 additionalAttributes:(id)arg2;	// IMP=0x0040000000932bfb
+ (id)adornmentWithStyleAttributes:(id)arg1;	// IMP=0x0010000000932be7
+ (id)defaultAdornment;	// IMP=0x0010000000932b9c
- (void).cxx_destruct;	// IMP=0x00200000009331e1
@property(readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
- (id)combineAdornment:(id)arg1;	// IMP=0x0010000000932fb2
- (id)initWithStyleAttributes:(id)arg1 additionalAttributes:(id)arg2;	// IMP=0x0010000000932cab

@end

