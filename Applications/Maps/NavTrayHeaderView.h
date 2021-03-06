//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class GuidanceETA, NSLayoutConstraint, NSNumber, NSString, NavTrayFeedbackView, NavTrayMetrics, NavTrayStackedLabel, UIButton, UIImageView, UILabel, UIStackView;
@protocol NavTrayHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface NavTrayHeaderView : UIView
{
    _Bool _isRerouting;	// 8 = 0x8
    _Bool _hasReceivedGuidance;	// 9 = 0x9
    NavTrayMetrics *_metrics;	// 16 = 0x10
    NSNumber *_computedWidth;	// 24 = 0x18
    UIImageView *_chevronImageView;	// 32 = 0x20
    UIStackView *_minimizedStackView;	// 40 = 0x28
    CDUnknownBlockType _minimizedValueFontProvider;	// 48 = 0x30
    NavTrayStackedLabel *_minimizedArrivalLabel;	// 56 = 0x38
    NavTrayStackedLabel *_timeLabel;	// 64 = 0x40
    NavTrayStackedLabel *_distanceLabel;	// 72 = 0x48
    NSLayoutConstraint *_widthConstraint;	// 80 = 0x50
    UILabel *_expandedArrivalLabel;	// 88 = 0x58
    UIView *_arrivedContainerView;	// 96 = 0x60
    NavTrayFeedbackView *_feedbackView;	// 104 = 0x68
    UIButton *_endButton;	// 112 = 0x70
    NSLayoutConstraint *_arrivedContainerTopConstraint;	// 120 = 0x78
    double _layoutProgress;	// 128 = 0x80
    NSString *_destinationName;	// 136 = 0x88
    UIView *_hairlineView;	// 144 = 0x90
    unsigned long long _arrivalState;	// 152 = 0x98
    id <NavTrayHeaderViewDelegate> _delegate;	// 160 = 0xa0
    GuidanceETA *_ETA;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0020000000386196
@property(retain, nonatomic) GuidanceETA *ETA; // @synthesize ETA=_ETA;
@property(readonly, nonatomic) __weak id <NavTrayHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long arrivalState; // @synthesize arrivalState=_arrivalState;
@property(readonly, nonatomic) UIView *hairlineView; // @synthesize hairlineView=_hairlineView;
@property(copy, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(nonatomic) double layoutProgress; // @synthesize layoutProgress=_layoutProgress;
- (void)hideSecondaryManeuver;	// IMP=0x00100000003860ff
- (void)showSecondaryManeuverSign:(id)arg1;	// IMP=0x00100000003860f9
- (void)showManeuverSign:(id)arg1 maneuverStepIndex:(unsigned long long)arg2;	// IMP=0x00100000003860f3
- (void)setDestinationDisplayName:(id)arg1;	// IMP=0x00100000003860ed
- (void)showLeftFromWaypoint;	// IMP=0x00100000003860e7
- (void)showReachedWaypoint:(id)arg1 atEndOfLegIndex:(unsigned long long)arg2;	// IMP=0x00100000003860e1
- (void)showArrivedUsingSignInfo:(_Bool)arg1;	// IMP=0x00100000003860db
- (void)showNoGuidance;	// IMP=0x00100000003860d5
- (void)showManeuverAlertForAnnouncementStage:(unsigned long long)arg1;	// IMP=0x00100000003860cf
- (void)setTimeToManeuver:(double)arg1 distanceToManeuver:(double)arg2 distanceText:(id)arg3 forStep:(id)arg4 atStepIndex:(unsigned long long)arg5;	// IMP=0x00100000003860c9
- (void)showProceedingToRouteDistance:(double)arg1 displayString:(id)arg2 forStep:(id)arg3;	// IMP=0x00100000003860c3
- (void)clearAnimations;	// IMP=0x0010000000385fb1
- (void)applyArrivalState;	// IMP=0x0010000000385eff
- (void)showRecalculating;	// IMP=0x0010000000385ee0
- (void)_computeStackViewWidth;	// IMP=0x0010000000385e1f
- (void)_computeLayout;	// IMP=0x0010000000385d95
- (void)_updateTextAlignment;	// IMP=0x0010000000385c98
- (void)_updateLayout;	// IMP=0x0010000000385a5c
- (void)_updateContent;	// IMP=0x0010000000385196
- (long long)_textAlignmentForCurrentLanguage;	// IMP=0x0010000000385001
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000384b9e
- (void)layoutSubviews;	// IMP=0x0010000000384afd
- (struct CGSize)intrinsicContentSize;	// IMP=0x0010000000384907
- (unsigned long long)state;	// IMP=0x00100000003848a3
- (id)initWithDelegate:(id)arg1 metrics:(id)arg2;	// IMP=0x0010000000382a10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isGuidanceEnabled) _Bool guidanceEnabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

