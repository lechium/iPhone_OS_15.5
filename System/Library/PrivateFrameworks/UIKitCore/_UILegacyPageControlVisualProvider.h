//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, UIImage, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UILegacyPageControlVisualProvider
{
    UIImage *_currentPageImage;	// 24 = 0x18
    UIImage *_pageImage;	// 32 = 0x20
    NSMutableArray *_currentPageImages;	// 40 = 0x28
    NSMutableArray *_pageImages;	// 48 = 0x30
    UIVisualEffectView *_backgroundVisualEffectView;	// 56 = 0x38
    NSMutableArray *_indicators;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000ed2275
- (void)_cachePageIndicatorImages;	// IMP=0x0000000000ed1fd3
- (id)_pageIndicatorCurrentImageForPage:(long long)arg1;	// IMP=0x0000000000ed1f96
- (id)_pageIndicatorImageForPage:(long long)arg1;	// IMP=0x0000000000ed1f59
- (id)_cachedPageIndicatorCurrentImageForPage:(long long)arg1;	// IMP=0x0000000000ed1eba
- (id)_cachedPageIndicatorImageForPage:(long long)arg1;	// IMP=0x0000000000ed1e1b
- (id)defaultActivePageIndicatorImage;	// IMP=0x0000000000ed1e0a
- (id)preferredIndicatorImage;	// IMP=0x0000000000ed1df9
- (void)_drawModernIndicatorInView:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x0000000000ed1cd5
- (id)_indicatorViewEnabled:(_Bool)arg1 index:(long long)arg2;	// IMP=0x0000000000ed1bfa
- (void)_transitionIndicator:(id)arg1 toEnabled:(_Bool)arg2 index:(long long)arg3;	// IMP=0x0000000000ed1b48
- (_Bool)_hasCustomImageForPage:(long long)arg1 enabled:(_Bool)arg2;	// IMP=0x0000000000ed1a65
- (id)_modernColorEnabled:(_Bool)arg1;	// IMP=0x0000000000ed196a
- (double)_modernCornerRadius;	// IMP=0x0000000000ed1937
- (struct CGRect)_modernBounds;	// IMP=0x0000000000ed1916
- (double)_indicatorSpacing;	// IMP=0x0000000000ed18d7
- (struct CGRect)_indicatorFrameAtIndex:(long long)arg1;	// IMP=0x0000000000ed182e
- (void)_setDisplayedPage:(long long)arg1;	// IMP=0x0000000000ed1726
- (void)updateDisplayedPageToCurrentPage;	// IMP=0x0000000000ed16f1
- (id)effectiveContentView;	// IMP=0x0000000000ed169f
- (void)invalidateIndicators;	// IMP=0x0000000000ed144d
- (void)layoutSubviews;	// IMP=0x0000000000ed0f76
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000ed0eb7
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000ed0d14
- (struct CGSize)sizeForNumberOfPages:(long long)arg1;	// IMP=0x0000000000ed0c4a
- (void)didEndTrackingWithTouch:(id)arg1;	// IMP=0x0000000000ed0a66
- (void)didUpdatePageIndicatorTintColor;	// IMP=0x0000000000ed0a20
- (void)didUpdateCurrentPageIndicatorTintColor;	// IMP=0x0000000000ed0a0e
- (void)didUpdateNumberOfPages;	// IMP=0x0000000000ed080d
- (void)pruneArchivedSubviews:(id)arg1;	// IMP=0x0000000000ed06c3
- (void)prepare;	// IMP=0x0000000000ed0606

@end
