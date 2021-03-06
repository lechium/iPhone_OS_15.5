//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString, UIColor, UIImpactFeedbackGenerator, UIRefreshControl;

__attribute__((visibility("hidden")))
@interface _UIRefreshControlContentView
{
    UIRefreshControl *_refreshControl;	// 120 = 0x78
    UIColor *_tintColor;	// 128 = 0x80
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000005ae5c1
@property(retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // @synthesize impactFeedbackGenerator=_impactFeedbackGenerator;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
- (void)_removeAllAnimations;	// IMP=0x00000000005ae54f
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;	// IMP=0x00000000005ae546
- (void)didTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00000000005ae540
- (void)willTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00000000005ae4f9
- (void)refreshControlInvalidatedSnappingHeight;	// IMP=0x00000000005ae4f3
@property(readonly, nonatomic) double maximumSnappingHeight;
@property(readonly, nonatomic) double minimumSnappingHeight;
@property(readonly, nonatomic) long long style;
@property(retain, nonatomic) NSAttributedString *attributedTitle;

@end

