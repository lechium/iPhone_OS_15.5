//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContextPush
{
    struct CGRect _endingNewTitleViewFrame;	// 160 = 0xa0
    struct CGRect _endingNewBackButtonFrame;	// 192 = 0xc0
    struct CGRect _endingBackIndicatorViewFrame;	// 224 = 0xe0
    struct CGSize _titleTransitionDistance;	// 256 = 0x100
}

- (void)complete;	// IMP=0x00000000001afc8c
- (void)cancel;	// IMP=0x00000000001afc46
- (void)_finishWithFinalLayout:(id)arg1 invalidLayout:(id)arg2;	// IMP=0x00000000001af580
- (void)animate;	// IMP=0x00000000001af4fe
- (void)_animateSearchBar;	// IMP=0x00000000001aef2b
- (void)_animateBackgroundView;	// IMP=0x00000000001aec4e
- (void)_animateLargeTitleView;	// IMP=0x00000000001ae992
- (void)_animateContentView;	// IMP=0x00000000001ae406
- (void)_animateScaleTransition;	// IMP=0x00000000001adf52
- (void)prepare;	// IMP=0x00000000001adba0
- (void)_prepareSearchBar;	// IMP=0x00000000001ad693
- (void)_prepareBackgroundView;	// IMP=0x00000000001ad45e
- (void)_prepareLargeTitleView;	// IMP=0x00000000001aceff
- (void)_prepareContentView;	// IMP=0x00000000001abc73
- (void)_prepareScaleTransition;	// IMP=0x00000000001ab35a
- (int)transition;	// IMP=0x00000000001ab352
- (id)viewUsingEaseOutCurve;	// IMP=0x00000000001ab327

@end

