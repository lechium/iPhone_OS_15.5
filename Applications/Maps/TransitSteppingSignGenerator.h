//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, Route, TransitSignView, TransitSteppingCameraFramer;
@protocol CellVendor, TransitSteppingSignGeneratorDelegate;

__attribute__((visibility("hidden")))
@interface TransitSteppingSignGenerator : NSObject
{
    NSArray *_signs;	// 8 = 0x8
    NSMutableDictionary *_auxViewCache;	// 16 = 0x10
    TransitSignView *_steppingSizingView;	// 24 = 0x18
    NSMutableDictionary *_signHeightCache;	// 32 = 0x20
    id <CellVendor> _cellVendor;	// 40 = 0x28
    Route *_route;	// 48 = 0x30
    id <TransitSteppingSignGeneratorDelegate> _delegate;	// 56 = 0x38
    TransitSteppingCameraFramer *_cameraFramer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000a72498
@property(retain, nonatomic) TransitSteppingCameraFramer *cameraFramer; // @synthesize cameraFramer=_cameraFramer;
@property(nonatomic) __weak id <TransitSteppingSignGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) Route *route; // @synthesize route=_route;
- (void)transitSignCell:(id)arg1 didExpandLabel:(id)arg2;	// IMP=0x0010000000a723e1
- (void)transitSignCell:(id)arg1 incidentButtonTappedForIncidents:(id)arg2;	// IMP=0x0010000000a7232d
- (void)transitSignCellDidTapClusteredRoutesButton:(id)arg1;	// IMP=0x0010000000a7227c
- (void)invalidateSizeCaches;	// IMP=0x0010000000a72266
- (id)transitSignViewStateForSign:(id)arg1 signView:(id)arg2;	// IMP=0x0010000000a71ed3
- (void)reloadSignAtIndex:(long long)arg1;	// IMP=0x0010000000a71e05
- (void)rectForSignAtIndex:(long long)arg1 currentStepIndex:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000a71d5f
- (double)distanceFromPageControlBaselineToTopOfAuxView;	// IMP=0x0010000000a71d51
- (double)distanceFromPageControlBaselineToBottomOfSignAtIndex:(long long)arg1 fittingSize:(struct CGSize)arg2;	// IMP=0x0010000000a71d43
- (struct CGSize)sizeForSignAtIndex:(long long)arg1 fittingSize:(struct CGSize)arg2;	// IMP=0x0010000000a71a4f
- (long long)signIndexForStepIndex:(long long)arg1;	// IMP=0x0010000000a71962
- (long long)signIndexForStep:(id)arg1;	// IMP=0x0010000000a7192e
- (id)lastStepAtSignIndex:(long long)arg1;	// IMP=0x0010000000a7180e
- (id)firstStepAtSignIndex:(long long)arg1;	// IMP=0x0010000000a716ee
- (id)stepAtSignIndex:(long long)arg1;	// IMP=0x0010000000a716dc
@property(readonly) long long numberOfSigns;
- (void)_configureTransitSignView:(id)arg1 withSign:(id)arg2;	// IMP=0x0010000000a714d4
- (id)_guidanceAccessoryItemForSign:(id)arg1;	// IMP=0x0010000000a71443
- (id)auxViewAtIndex:(long long)arg1;	// IMP=0x0010000000a711d6
- (id)signAtIndex:(long long)arg1;	// IMP=0x0010000000a7104b
- (void)_updateSelfWithRoute:(id)arg1;	// IMP=0x0010000000a70f74
@property(nonatomic) __weak id <CellVendor> cellVendor; // @synthesize cellVendor=_cellVendor;
- (id)initWithRoute:(id)arg1;	// IMP=0x0010000000a70dfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

