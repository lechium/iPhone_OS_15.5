//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NCNotificationShortLookViewController.h>

#import <CoverSheet/SBBarSwipeAffordanceObserver-Protocol.h>
#import <CoverSheet/SBUIPresentableLocalHomeGestureParticipant-Protocol.h>

@class NSString;
@protocol SBUIPresentableHomeGestureContext;

@interface CSNotificationViewController : NCNotificationShortLookViewController <SBBarSwipeAffordanceObserver, SBUIPresentableLocalHomeGestureParticipant>
{
    id <SBUIPresentableHomeGestureContext> _homeGestureContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001324e4
@property(nonatomic) __weak id <SBUIPresentableHomeGestureContext> homeGestureContext; // @synthesize homeGestureContext=_homeGestureContext;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1;	// IMP=0x000000000013241e
- (void)expandedPlatter:(id)arg1 willDismissWithReason:(id)arg2;	// IMP=0x00000000001323c0
- (void)expandedPlatterDidPresent:(id)arg1;	// IMP=0x00000000001321ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
