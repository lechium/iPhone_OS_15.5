//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBIconPageIndicatorImageSetResult, _UILegibilitySettings;

@interface SBIconPageIndicatorImageSetCache : NSObject
{
    _UILegibilitySettings *_legibilitySettings;	// 8 = 0x8
    SBIconPageIndicatorImageSetResult *_indicatorImageSetResults;	// 16 = 0x10
    SBIconPageIndicatorImageSetResult *_searchImageSetResults;	// 24 = 0x18
    SBIconPageIndicatorImageSetResult *_cameraImageSetResults;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001547ca
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (id)_emptyPageIndicatorSet;	// IMP=0x000000000015472a
- (id)cameraIndicatorImageSetForLegibilitySettings:(id)arg1;	// IMP=0x00000000001546ee
- (id)searchIndicatorImageSetForLegibilitySettings:(id)arg1;	// IMP=0x00000000001546b2
- (id)pageIndicatorImageSetForLegibilitySettings:(id)arg1;	// IMP=0x0000000000154676

@end
