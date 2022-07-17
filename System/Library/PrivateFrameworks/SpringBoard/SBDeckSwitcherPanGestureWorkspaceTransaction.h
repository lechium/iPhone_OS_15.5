//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBHomeGrabberDelegate-Protocol.h>

@class NSString;

@interface SBDeckSwitcherPanGestureWorkspaceTransaction <SBHomeGrabberDelegate>
{
}

- (_Bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;	// IMP=0x0000000000560454
- (_Bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;	// IMP=0x000000000056044c
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;	// IMP=0x0000000000560302
- (void)_removeHysteresisFromTranslation;	// IMP=0x000000000005a309
- (id)touchHistoryProvidingGesture;	// IMP=0x000000000005c3a1
- (void)_finishWithGesture:(id)arg1;	// IMP=0x000000000006355a
- (void)_beginWithGesture:(id)arg1;	// IMP=0x000000000005a0e4
- (void)_didComplete;	// IMP=0x00000000000752d5
- (void)_begin;	// IMP=0x0000000000058d2b
- (id)selectedAppLayoutForGestureRecognizer:(id)arg1;	// IMP=0x000000000055fed9
- (long long)_gestureType;	// IMP=0x000000000005aec1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
