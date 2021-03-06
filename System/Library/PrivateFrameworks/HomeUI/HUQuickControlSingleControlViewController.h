//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUQuickControlInteractionCoordinatorDelegate-Protocol.h>
#import <HomeUI/HUQuickControlTouchContinuing-Protocol.h>

@class HFControlItem, HUQuickControlInteractionCoordinator, HUQuickControlViewProfile, NAValueThrottler, NSString, _HUQuickControlSingleControlHostView;

@interface HUQuickControlSingleControlViewController <HUQuickControlInteractionCoordinatorDelegate, HUQuickControlTouchContinuing>
{
    _Bool _writesInProgressOrPossible;	// 8 = 0x8
    _Bool _hasWrittenAnyNewValues;	// 9 = 0x9
    _Bool _hasSetControlSize;	// 10 = 0xa
    HUQuickControlInteractionCoordinator *_interactionCoordinator;	// 16 = 0x10
    id _modelValue;	// 24 = 0x18
    NAValueThrottler *_valueWriteThrottler;	// 32 = 0x20
    unsigned long long _inFlightWriteCount;	// 40 = 0x28
    HUQuickControlViewProfile *_viewProfile;	// 48 = 0x30
    double _verticalDirectionalControlStretchFactor;	// 56 = 0x38
    double _horizontalControlCompressionFactor;	// 64 = 0x40
}

+ (Class)controlItemClass;	// IMP=0x00000000003c5dd1
+ (id)controlItemPredicate;	// IMP=0x00000000003c41a0
- (void).cxx_destruct;	// IMP=0x00000000003c68b8
@property(nonatomic) _Bool hasSetControlSize; // @synthesize hasSetControlSize=_hasSetControlSize;
@property(nonatomic) double horizontalControlCompressionFactor; // @synthesize horizontalControlCompressionFactor=_horizontalControlCompressionFactor;
@property(nonatomic) double verticalDirectionalControlStretchFactor; // @synthesize verticalDirectionalControlStretchFactor=_verticalDirectionalControlStretchFactor;
@property(retain, nonatomic) HUQuickControlViewProfile *viewProfile; // @synthesize viewProfile=_viewProfile;
@property(nonatomic) _Bool hasWrittenAnyNewValues; // @synthesize hasWrittenAnyNewValues=_hasWrittenAnyNewValues;
@property(nonatomic) unsigned long long inFlightWriteCount; // @synthesize inFlightWriteCount=_inFlightWriteCount;
@property(readonly, nonatomic) NAValueThrottler *valueWriteThrottler; // @synthesize valueWriteThrottler=_valueWriteThrottler;
@property(nonatomic, getter=areWritesInProgressOrPossible) _Bool writesInProgressOrPossible; // @synthesize writesInProgressOrPossible=_writesInProgressOrPossible;
@property(readonly, nonatomic) id modelValue; // @synthesize modelValue=_modelValue;
@property(retain, nonatomic) HUQuickControlInteractionCoordinator *interactionCoordinator; // @synthesize interactionCoordinator=_interactionCoordinator;
- (id)viewForTouchContinuation;	// IMP=0x00000000003c6725
- (void)interactionCoordinator:(id)arg1 updateControlVerticalStretchFactor:(double)arg2;	// IMP=0x00000000003c6713
- (void)interactionCoordinator:(id)arg1 updateControlHorizontalCompressionFactor:(double)arg2;	// IMP=0x00000000003c6701
- (void)hideAuxiliaryViewForInteractionCoordinator:(id)arg1;	// IMP=0x00000000003c66b5
- (void)interactionCoordinator:(id)arg1 showAuxiliaryView:(id)arg2;	// IMP=0x00000000003c6640
- (void)interactionCoordinatorWantsDismissal:(id)arg1;	// IMP=0x00000000003c65ef
- (_Bool)hasModelValueChangedForInteractionCoordinator:(id)arg1;	// IMP=0x00000000003c6590
- (void)interactionCoordinator:(id)arg1 interactionStateDidChange:(_Bool)arg2;	// IMP=0x00000000003c6530
- (void)interactionCoordinator:(id)arg1 viewValueDidChange:(id)arg2;	// IMP=0x00000000003c62c3
- (void)_updateControlViewReachabilityState;	// IMP=0x00000000003c60de
- (void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2;	// IMP=0x00000000003c5fbc
- (void)modelValueDidChange;	// IMP=0x00000000003c5faa
- (id)overrideSecondaryStatusText;	// IMP=0x00000000003c5fa2
- (id)overrideStatusText;	// IMP=0x00000000003c5f1e
- (id)controlToViewValueTransformer;	// IMP=0x00000000003c5f05
- (id)createViewProfile;	// IMP=0x00000000003c5e6b
- (id)createInteractionCoordinator;	// IMP=0x00000000003c5d37
- (void)viewDidLayoutSubviews;	// IMP=0x00000000003c5cf6
- (void)_updateControlTransform;	// IMP=0x00000000003c5a8f
- (void)_updateViewProfileForCurrentItemState;	// IMP=0x00000000003c570d
- (void)_updateTitle;	// IMP=0x00000000003c5633
- (void)_updateWriteState;	// IMP=0x00000000003c5382
- (void)_writeModelControlValue:(id)arg1;	// IMP=0x00000000003c51c5
- (void)updateValueFromControlItem;	// IMP=0x00000000003c5063
- (void)_setModelValue:(id)arg1 writeValue:(_Bool)arg2;	// IMP=0x00000000003c4f9d
- (void)invalidateViewProfile;	// IMP=0x00000000003c4f8b
- (void)setUserInteractionEnabled:(_Bool)arg1;	// IMP=0x00000000003c4f3f
- (_Bool)isUserInteractionEnabled;	// IMP=0x00000000003c4efb
- (id)viewControllerForTouchContinuation;	// IMP=0x00000000003c4ebb
- (void)setPreferredControl:(unsigned long long)arg1;	// IMP=0x00000000003c4e7a
- (void)setControlOrientation:(unsigned long long)arg1;	// IMP=0x00000000003c4df5
- (void)setControlSize:(unsigned long long)arg1;	// IMP=0x00000000003c4d9a
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;	// IMP=0x00000000003c4d06
- (id)overrideValueForCharacteristic:(id)arg1;	// IMP=0x00000000003c4b99
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;	// IMP=0x00000000003c4b19
- (void)setPreferredFrameLayoutGuide:(id)arg1;	// IMP=0x00000000003c4a79
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000003c4a71
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000003c4a05
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000003c4996
- (void)loadView;	// IMP=0x00000000003c484d
@property(readonly, nonatomic) HFControlItem *controlItem;
- (id)initWithControlItem:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 controlOrientation:(unsigned long long)arg4 preferredControl:(unsigned long long)arg5;	// IMP=0x00000000003c433d
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 controlOrientation:(unsigned long long)arg4 preferredControl:(unsigned long long)arg5;	// IMP=0x00000000003c4259

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) _HUQuickControlSingleControlHostView *view; // @dynamic view;

@end

