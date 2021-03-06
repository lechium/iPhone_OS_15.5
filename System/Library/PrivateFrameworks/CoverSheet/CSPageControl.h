//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPageControl.h>

@class _UILegibilitySettings;

@interface CSPageControl : UIPageControl
{
    _UILegibilitySettings *_sbLegibilitySettings;	// 8 = 0x8
    unsigned long long _cameraPageIndex;	// 16 = 0x10
}

+ (struct CGRect)suggestedFrameForPageBounds:(struct CGRect)arg1 desiredSize:(struct CGSize)arg2;	// IMP=0x000000000008d8f9
+ (struct CGRect)suggestedFrameForPageBounds:(struct CGRect)arg1;	// IMP=0x000000000008d8a9
+ (struct CGSize)defaultSize;	// IMP=0x000000000008d7e1
- (void).cxx_destruct;	// IMP=0x000000000008dcf6
@property(nonatomic) unsigned long long cameraPageIndex; // @synthesize cameraPageIndex=_cameraPageIndex;
- (id)_currentPageIndicatorColor;	// IMP=0x000000000008dcc8
- (id)_pageIndicatorColor;	// IMP=0x000000000008dc65
- (id)_cameraIndicator;	// IMP=0x000000000008dbdb
- (void)_updateForLegibility;	// IMP=0x000000000008db5c
- (void)_rebuildIndicators;	// IMP=0x000000000008daca
- (void)setLegibilitySettings:(id)arg1;	// IMP=0x000000000008da5f
- (struct CGSize)sizeForNumberOfPages:(long long)arg1;	// IMP=0x000000000008d7aa
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000008d709

@end

