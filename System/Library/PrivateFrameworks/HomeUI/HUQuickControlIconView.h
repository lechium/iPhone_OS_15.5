//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlInteractiveView-Protocol.h>

@class HUIconView, HUQuickControlIconViewProfile, NSString, UILabel;
@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlIconView : UIView <HUQuickControlInteractiveView>
{
    _Bool _userInteractionActive;	// 8 = 0x8
    HUQuickControlIconViewProfile *_profile;	// 16 = 0x10
    id <HUQuickControlViewInteractionDelegate> _interactionDelegate;	// 24 = 0x18
    unsigned long long _reachabilityState;	// 32 = 0x20
    HUIconView *_iconView;	// 40 = 0x28
    UILabel *_statusLabel;	// 48 = 0x30
    UILabel *_supplementaryLabel;	// 56 = 0x38
    id _viewValue;	// 64 = 0x40
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0000000000125836
- (void).cxx_destruct;	// IMP=0x000000000012740d
@property(nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property(retain, nonatomic) id viewValue; // @synthesize viewValue=_viewValue;
@property(retain, nonatomic) UILabel *supplementaryLabel; // @synthesize supplementaryLabel=_supplementaryLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) unsigned long long reachabilityState; // @synthesize reachabilityState=_reachabilityState;
@property(nonatomic) __weak id <HUQuickControlViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(copy, nonatomic) HUQuickControlIconViewProfile *profile; // @synthesize profile=_profile;
- (void)_updateLabelFramesOrigins;	// IMP=0x0000000000126e3d
- (struct CGRect)_getLabelsContainingRect;	// IMP=0x00000000001268cb
- (void)_updateLabelSizes;	// IMP=0x0000000000126491
- (void)_updateLayout;	// IMP=0x000000000012637e
- (double)_iconAndLabelsHeight;	// IMP=0x000000000012632a
- (void)_updateUI;	// IMP=0x0000000000125c5b
- (void)layoutSubviews;	// IMP=0x0000000000125bf5
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;	// IMP=0x0000000000125bc7
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;	// IMP=0x0000000000125ba4
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000125ae0
@property(retain, nonatomic) id value;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;	// IMP=0x0000000000125a2b
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000012583e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id secondaryValue;
@property(readonly) Class superclass;

@end

