//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel, UIView, _UIRefreshControlModernReplicatorView, _UIRefreshControlSeedView;

__attribute__((visibility("hidden")))
@interface _UIRefreshControlModernContentView
{
    _Bool _animationsAreValid;	// 144 = 0x90
    UIView *_replicatorContainer;	// 152 = 0x98
    _UIRefreshControlModernReplicatorView *_replicatorView;	// 160 = 0xa0
    _UIRefreshControlSeedView *_seed;	// 168 = 0xa8
    _Bool _hasFinishedRevealing;	// 176 = 0xb0
    UILabel *_textLabel;	// 184 = 0xb8
    _Bool _areAnimationsValid;	// 192 = 0xc0
    _Bool _horizontallyCenteredFramesNeedUpdate;	// 193 = 0xc1
    double _currentPopStiffness;	// 200 = 0xc8
    double _impactIntensity;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x00000000005b0cf2
@property(nonatomic) _Bool horizontallyCenteredFramesNeedUpdate; // @synthesize horizontallyCenteredFramesNeedUpdate=_horizontallyCenteredFramesNeedUpdate;
@property(nonatomic) double impactIntensity; // @synthesize impactIntensity=_impactIntensity;
@property(nonatomic) double currentPopStiffness; // @synthesize currentPopStiffness=_currentPopStiffness;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) _Bool areAnimationsValid; // @synthesize areAnimationsValid=_areAnimationsValid;
- (id)attributedTitle;	// IMP=0x00000000005b0c3c
- (void)setAttributedTitle:(id)arg1;	// IMP=0x00000000005b0be2
- (void)setTintColor:(id)arg1;	// IMP=0x00000000005b0ba1
- (id)_effectiveTintColorWithAlpha:(double)arg1;	// IMP=0x00000000005b0b3f
- (id)_effectiveTintColor;	// IMP=0x00000000005b0afc
- (void)layoutSubviews;	// IMP=0x00000000005b02bc
- (void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets)arg1;	// IMP=0x00000000005b01fd
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000005b013a
- (double)maximumSnappingHeight;	// IMP=0x00000000005b00bb
- (double)_maximumSnappingHeightScalingForScrollViewHeight;	// IMP=0x00000000005b005b
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;	// IMP=0x00000000005b004d
- (double)_currentTimeOffset;	// IMP=0x00000000005aff90
- (void)_updateTimeOffsetOfRelevantLayers;	// IMP=0x00000000005afeea
- (double)_percentageShowing;	// IMP=0x00000000005afe79
- (void)_snappingMagic;	// IMP=0x00000000005afe37
- (void)_goAway;	// IMP=0x00000000005afc6f
- (void)_tick;	// IMP=0x00000000005afabc
- (void)_spin;	// IMP=0x00000000005af942
- (void)_bloom;	// IMP=0x00000000005af88b
- (void)_unbloom;	// IMP=0x00000000005af80f
- (void)_reveal;	// IMP=0x00000000005af6df
- (void)_resetToRevealingState;	// IMP=0x00000000005af25c
- (struct CGAffineTransform)_unbloomedSeedTransform;	// IMP=0x00000000005af236
- (struct CGAffineTransform)_bloomedSeedTransform;	// IMP=0x00000000005af0ef
- (void)_setUnbloomedAppearance;	// IMP=0x00000000005af091
- (void)_setBloomedAppearance;	// IMP=0x00000000005af033
- (void)_setSpunAppearance;	// IMP=0x00000000005aee86
- (void)_cleanUpAfterRevealing;	// IMP=0x00000000005aee2b
- (void)_removeAllAnimations;	// IMP=0x00000000005aede3
- (void)_tickDueToProgrammaticRefresh;	// IMP=0x00000000005aeda8
- (void)didTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00000000005aebae
- (void)willTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00000000005aeb00
- (long long)style;	// IMP=0x00000000005aeaf5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005ae6b5

@end
