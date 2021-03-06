//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAMSemanticStyle, CEKBadgeTextView, NSString, NSTimer;

@interface CAMSemanticStyleMaskedBadge : UIView
{
    CEKBadgeTextView *_badgeView;	// 8 = 0x8
    CAMSemanticStyle *_semanticStyle;	// 16 = 0x10
    double _badgeLeftInset;	// 24 = 0x18
    long long _orientation;	// 32 = 0x20
    NSTimer *__badgeUpdateLockoutTimer;	// 40 = 0x28
    NSString *__cachedText;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000104161
@property(retain, nonatomic) NSString *_cachedText; // @synthesize _cachedText=__cachedText;
@property(retain, nonatomic) NSTimer *_badgeUpdateLockoutTimer; // @synthesize _badgeUpdateLockoutTimer=__badgeUpdateLockoutTimer;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) double badgeLeftInset; // @synthesize badgeLeftInset=_badgeLeftInset;
@property(retain, nonatomic) CAMSemanticStyle *semanticStyle; // @synthesize semanticStyle=_semanticStyle;
@property(readonly, nonatomic) CEKBadgeTextView *badgeView; // @synthesize badgeView=_badgeView;
- (void)_handleBadgeUpdateLockoutTimerFired:(id)arg1;	// IMP=0x0000000000104020
- (void)_requestTextUpdateDelayIfNeeded:(_Bool)arg1;	// IMP=0x0000000000103df7
- (void)setSemanticStyle:(id)arg1 delayIfNeeded:(_Bool)arg2;	// IMP=0x0000000000103d29
- (void)layoutSubviews;	// IMP=0x0000000000103ba6
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000103b38
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000103ade
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001039e7

@end

