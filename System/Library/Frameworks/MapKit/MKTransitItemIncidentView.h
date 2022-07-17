//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MapKit/MKTransitItemIncidentView-Protocol.h>

@class MKTransitIncidentItemCellBackgroundView, NSArray, NSLayoutConstraint, NSString, UIImageView, _MKUILabel;

@interface MKTransitItemIncidentView : UIView <MKTransitItemIncidentView>
{
    UIImageView *_incidentIconImageView;	// 8 = 0x8
    _Bool _needsConstraintsRebuild;	// 16 = 0x10
    NSArray *_constraints;	// 24 = 0x18
    _MKUILabel *_titleLabel;	// 32 = 0x20
    _MKUILabel *_lastUpdatedLabel;	// 40 = 0x28
    MKTransitIncidentItemCellBackgroundView *_backgroundView;	// 48 = 0x30
    _Bool _incidentIsBlocking;	// 56 = 0x38
    _Bool _useCondensedWidthLayout;	// 57 = 0x39
    NSLayoutConstraint *_titleLabelToTopConstraint;	// 64 = 0x40
    NSLayoutConstraint *_bottomToLabelConstraint;	// 72 = 0x48
    NSLayoutConstraint *_titleToLastUpdatedLabelConstraint;	// 80 = 0x50
    NSLayoutConstraint *_bottomToBackgroundConstraint;	// 88 = 0x58
    double _bottomToBackgroundOffset;	// 96 = 0x60
    _Bool _padBottom;	// 104 = 0x68
    struct UIEdgeInsets _contentInsets;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000015a954
@property(nonatomic) _Bool padBottom; // @synthesize padBottom=_padBottom;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)rebuildConstraints;	// IMP=0x0000000000159f27
- (void)updateConstraints;	// IMP=0x0000000000159ed9
- (void)didMoveToWindow;	// IMP=0x0000000000159e98
- (void)_updateConstraintValues;	// IMP=0x0000000000159cd3
- (void)_contentSizeCategoryDidChange;	// IMP=0x0000000000159b59
- (void)dealloc;	// IMP=0x0000000000159ae4
- (id)_nonBlockingImage;	// IMP=0x0000000000159980
- (id)_blockingImage;	// IMP=0x000000000015981c
@property(nonatomic) long long cellPosition;
- (void)_updateBottomConstraintWithOffset:(double)arg1;	// IMP=0x00000000001597ab
- (void)infoCardThemeChanged;	// IMP=0x0000000000159409
- (void)_configureWithMessage:(id)arg1 referenceDate:(id)arg2 lastUpdated:(id)arg3 incidentIsBlocking:(_Bool)arg4 shouldShowImage:(_Bool)arg5 inSiri:(_Bool)arg6;	// IMP=0x00000000001590f2
- (void)configureWithIncidentMessage:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(_Bool)arg3 inSiri:(_Bool)arg4;	// IMP=0x0000000000158eb6
- (void)configureWithMessage:(id)arg1 incident:(id)arg2 referenceDate:(id)arg3 shouldShowImage:(_Bool)arg4 inSiri:(_Bool)arg5;	// IMP=0x0000000000158de0
- (void)configureWithIncident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(_Bool)arg3 inSiri:(_Bool)arg4;	// IMP=0x0000000000158cf9
- (void)configureViews;	// IMP=0x0000000000158759
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001586fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
