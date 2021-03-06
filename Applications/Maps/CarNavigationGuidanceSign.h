//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CarHairlineView, CarManeuverView, GuidanceETA, NSArray, NSLayoutConstraint, NSString, NSUUID, NavJunctionViewController, NavJunctionViewInfo, NavSignLaneGuidanceInfo, NavSignManeuverGuidanceInfo, UILayoutGuide;
@protocol CarGuidanceCardDelegate;

__attribute__((visibility("hidden")))
@interface CarNavigationGuidanceSign : UIView
{
    double _widthAtLastCompressionUpdate;	// 8 = 0x8
    _Bool _secondaryViewHidden;	// 16 = 0x10
    _Bool _junctionViewHidden;	// 17 = 0x11
    _Bool _junctionViewTemporarilyHidden;	// 18 = 0x12
    UILayoutGuide *_minimumCompressedContentLayoutGuide;	// 24 = 0x18
    id <CarGuidanceCardDelegate> _guidanceCardDelegate;	// 32 = 0x20
    NavSignManeuverGuidanceInfo *_primaryGuidance;	// 40 = 0x28
    NavSignManeuverGuidanceInfo *_secondaryGuidance;	// 48 = 0x30
    NavSignLaneGuidanceInfo *_laneGuidanceInfo;	// 56 = 0x38
    NavJunctionViewInfo *_junctionViewInfo;	// 64 = 0x40
    GuidanceETA *_latestETA;	// 72 = 0x48
    unsigned long long _guidanceType;	// 80 = 0x50
    UIView *_primaryView;	// 88 = 0x58
    NSArray *_primaryViewOnlyConstraints;	// 96 = 0x60
    CarHairlineView *_hairlineView;	// 104 = 0x68
    UIView *_secondaryView;	// 112 = 0x70
    NSArray *_secondaryViewConstraints;	// 120 = 0x78
    NSLayoutConstraint *_secondaryViewHeightConstraint;	// 128 = 0x80
    CarManeuverView *_primaryManeuver;	// 136 = 0x88
    NSArray *_primaryManeuverConstraints;	// 144 = 0x90
    CarManeuverView *_secondaryManeuver;	// 152 = 0x98
    NSArray *_secondaryManeuverConstraints;	// 160 = 0xa0
    NavJunctionViewController *_junctionViewController;	// 168 = 0xa8
    NSArray *_junctionViewConstraints;	// 176 = 0xb0
    CarManeuverView *_nextPrimaryManeuver;	// 184 = 0xb8
    CarManeuverView *_nextSecondaryManeuver;	// 192 = 0xc0
    CarManeuverView *_compressedPrimaryManeuver;	// 200 = 0xc8
    NSUUID *_primaryGuidanceSignID;	// 208 = 0xd0
    NSUUID *_secondaryGuidanceSignID;	// 216 = 0xd8
    NSUUID *_laneGuidanceInfoID;	// 224 = 0xe0
    NSUUID *_junctionViewInfoID;	// 232 = 0xe8
    double _desiredHeight;	// 240 = 0xf0
    unsigned long long _compressionStage;	// 248 = 0xf8
    unsigned long long _layoutType;	// 256 = 0x100
    unsigned long long _destination;	// 264 = 0x108
    NSLayoutConstraint *_minimumCompressedContentLayoutGuideHeightConstraint;	// 272 = 0x110
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00200000005891d0
- (void).cxx_destruct;	// IMP=0x002000000058fa00
@property(retain, nonatomic) NSLayoutConstraint *minimumCompressedContentLayoutGuideHeightConstraint; // @synthesize minimumCompressedContentLayoutGuideHeightConstraint=_minimumCompressedContentLayoutGuideHeightConstraint;
@property(nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(nonatomic) unsigned long long layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) _Bool junctionViewTemporarilyHidden; // @synthesize junctionViewTemporarilyHidden=_junctionViewTemporarilyHidden;
@property(nonatomic) _Bool junctionViewHidden; // @synthesize junctionViewHidden=_junctionViewHidden;
@property(nonatomic) _Bool secondaryViewHidden; // @synthesize secondaryViewHidden=_secondaryViewHidden;
@property(nonatomic) unsigned long long compressionStage; // @synthesize compressionStage=_compressionStage;
@property(nonatomic) double desiredHeight; // @synthesize desiredHeight=_desiredHeight;
@property(retain, nonatomic) NSUUID *junctionViewInfoID; // @synthesize junctionViewInfoID=_junctionViewInfoID;
@property(retain, nonatomic) NSUUID *laneGuidanceInfoID; // @synthesize laneGuidanceInfoID=_laneGuidanceInfoID;
@property(retain, nonatomic) NSUUID *secondaryGuidanceSignID; // @synthesize secondaryGuidanceSignID=_secondaryGuidanceSignID;
@property(retain, nonatomic) NSUUID *primaryGuidanceSignID; // @synthesize primaryGuidanceSignID=_primaryGuidanceSignID;
@property(retain, nonatomic) CarManeuverView *compressedPrimaryManeuver; // @synthesize compressedPrimaryManeuver=_compressedPrimaryManeuver;
@property(retain, nonatomic) CarManeuverView *nextSecondaryManeuver; // @synthesize nextSecondaryManeuver=_nextSecondaryManeuver;
@property(retain, nonatomic) CarManeuverView *nextPrimaryManeuver; // @synthesize nextPrimaryManeuver=_nextPrimaryManeuver;
@property(retain, nonatomic) NSArray *junctionViewConstraints; // @synthesize junctionViewConstraints=_junctionViewConstraints;
@property(retain, nonatomic) NavJunctionViewController *junctionViewController; // @synthesize junctionViewController=_junctionViewController;
@property(retain, nonatomic) NSArray *secondaryManeuverConstraints; // @synthesize secondaryManeuverConstraints=_secondaryManeuverConstraints;
@property(retain, nonatomic) CarManeuverView *secondaryManeuver; // @synthesize secondaryManeuver=_secondaryManeuver;
@property(retain, nonatomic) NSArray *primaryManeuverConstraints; // @synthesize primaryManeuverConstraints=_primaryManeuverConstraints;
@property(retain, nonatomic) CarManeuverView *primaryManeuver; // @synthesize primaryManeuver=_primaryManeuver;
@property(retain, nonatomic) NSLayoutConstraint *secondaryViewHeightConstraint; // @synthesize secondaryViewHeightConstraint=_secondaryViewHeightConstraint;
@property(retain, nonatomic) NSArray *secondaryViewConstraints; // @synthesize secondaryViewConstraints=_secondaryViewConstraints;
@property(retain, nonatomic) UIView *secondaryView; // @synthesize secondaryView=_secondaryView;
@property(retain, nonatomic) CarHairlineView *hairlineView; // @synthesize hairlineView=_hairlineView;
@property(retain, nonatomic) NSArray *primaryViewOnlyConstraints; // @synthesize primaryViewOnlyConstraints=_primaryViewOnlyConstraints;
@property(retain, nonatomic) UIView *primaryView; // @synthesize primaryView=_primaryView;
@property(nonatomic) unsigned long long guidanceType; // @synthesize guidanceType=_guidanceType;
@property(retain, nonatomic) GuidanceETA *latestETA; // @synthesize latestETA=_latestETA;
@property(retain, nonatomic) NavJunctionViewInfo *junctionViewInfo; // @synthesize junctionViewInfo=_junctionViewInfo;
@property(retain, nonatomic) NavSignLaneGuidanceInfo *laneGuidanceInfo; // @synthesize laneGuidanceInfo=_laneGuidanceInfo;
@property(retain, nonatomic) NavSignManeuverGuidanceInfo *secondaryGuidance; // @synthesize secondaryGuidance=_secondaryGuidance;
@property(retain, nonatomic) NavSignManeuverGuidanceInfo *primaryGuidance; // @synthesize primaryGuidance=_primaryGuidance;
@property(nonatomic) __weak id <CarGuidanceCardDelegate> guidanceCardDelegate; // @synthesize guidanceCardDelegate=_guidanceCardDelegate;
@property(readonly, nonatomic) UILayoutGuide *minimumCompressedContentLayoutGuide; // @synthesize minimumCompressedContentLayoutGuide=_minimumCompressedContentLayoutGuide;
- (void)_handleCarScreenSizeChange;	// IMP=0x001000000058f466
- (double)availableWidth;	// IMP=0x001000000058f416
- (void)updateWithGroupAnimation:(id)arg1;	// IMP=0x001000000058daaf
- (unsigned long long)_desiredCompressionStage;	// IMP=0x001000000058d5ad
- (void)_replaceSecondaryViewManeuver:(id)arg1 initialConstraints:(id)arg2 finalConstraints:(id)arg3;	// IMP=0x001000000058d166
- (void)_replacePrimaryViewManeuver:(id)arg1 initialConstraints:(id)arg2 finalConstraints:(id)arg3 slide:(_Bool)arg4;	// IMP=0x001000000058c75b
- (double)complementarySignHeightForManeuverView:(id)arg1;	// IMP=0x001000000058c5c5
- (void)_prepareManeuverView:(id)arg1;	// IMP=0x001000000058c0df
- (void)hideJunctionViewTemporarily;	// IMP=0x001000000058c0c8
- (double)maxAvailableHeightForJunctionView:(double)arg1;	// IMP=0x001000000058bf22
- (void)hideJunctionViewAnimated:(_Bool)arg1;	// IMP=0x001000000058bd4e
- (void)showJunctionViewAnimated:(_Bool)arg1;	// IMP=0x001000000058bbae
- (void)refreshJunctionView;	// IMP=0x001000000058ba83
- (void)_updateCompressionStage;	// IMP=0x001000000058b36d
- (void)_resetPrecalculatedCompressionSizes;	// IMP=0x001000000058b29e
- (void)setBlurMode:(int)arg1;	// IMP=0x001000000058b1ba
- (_Bool)_shouldForceSecondaryManeuverViewHidden;	// IMP=0x001000000058ad6c
- (_Bool)isPointInJunctionView:(struct CGPoint)arg1;	// IMP=0x001000000058ac60
@property(readonly, nonatomic) UIView *junctionView;
@property(readonly, nonatomic) CarManeuverView *secondaryManeuverView;
@property(readonly, nonatomic) CarManeuverView *primaryManeuverView;
- (void)layoutSubviews;	// IMP=0x001000000058a994
- (double)_heightForCompressionStage:(unsigned long long)arg1 isMaximumCompression:(_Bool *)arg2;	// IMP=0x001000000058a490
- (void)dealloc;	// IMP=0x001000000058a411
- (id)initWithDestination:(unsigned long long)arg1;	// IMP=0x00100000005891d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

