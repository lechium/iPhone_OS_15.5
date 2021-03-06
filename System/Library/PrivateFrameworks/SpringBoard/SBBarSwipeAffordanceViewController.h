//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/SBBarSwipeAffordanceControlling-Protocol.h>

@class NSString, SBBarSwipeAffordanceController, SBBarSwipeAffordanceView, SBFZStackParticipant, SBHomeGestureParticipant;
@protocol SBBarSwipeAffordanceControllingDelegate, SBHomeGrabberPointerClickDelegate;

@interface SBBarSwipeAffordanceViewController : UIViewController <SBBarSwipeAffordanceControlling>
{
    SBBarSwipeAffordanceController *_barSwipeAffordanceController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003e7ac4
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;	// IMP=0x00000000003e7aa7
- (void)zStackParticipantDidChange:(id)arg1;	// IMP=0x00000000003e7a8a
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;	// IMP=0x000000000009ffa1
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000003e7a82
- (void)loadView;	// IMP=0x00000000003e7a2b
@property(nonatomic) __weak id <SBHomeGrabberPointerClickDelegate> pointerClickDelegate;
@property(readonly, nonatomic) SBFZStackParticipant *zStackParticipant;
@property(readonly, nonatomic) SBHomeGestureParticipant *homeGestureParticipant;
@property(nonatomic) long long activationPolicyForParticipantsBelow;
@property(nonatomic) _Bool suppressAffordance;
@property(nonatomic) _Bool wantsToBeActiveAffordance;
@property(readonly, nonatomic) SBBarSwipeAffordanceView *barSwipeAffordanceView;
@property(nonatomic) __weak id <SBBarSwipeAffordanceControllingDelegate> delegate;
- (id)initWithHomeGestureParticipantIdentifier:(long long)arg1 zStackParticipantIdentifier:(long long)arg2;	// IMP=0x00000000003e7872
- (id)initWithHomeGestureParticipantIdentifier:(long long)arg1;	// IMP=0x00000000003e785b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SBBarSwipeAffordanceView *view; // @dynamic view;

@end

