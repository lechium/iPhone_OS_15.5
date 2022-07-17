//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNLocation, MNTrafficIncidentAlert, NSString, NSTimer;
@protocol MNTrafficIncidentAlertUpdaterDelegate;

__attribute__((visibility("hidden")))
@interface MNTrafficIncidentAlertUpdater : NSObject
{
    id <MNTrafficIncidentAlertUpdaterDelegate> _delegate;	// 8 = 0x8
    MNLocation *_lastLocation;	// 16 = 0x10
    MNTrafficIncidentAlert *_pendingAlert;	// 24 = 0x18
    MNTrafficIncidentAlert *_activeAlert;	// 32 = 0x20
    _Bool _isSpeakingAlert;	// 40 = 0x28
    int _trafficIncidentStatus;	// 44 = 0x2c
    NSTimer *_alertRetryTimer;	// 48 = 0x30
    NSString *_previousBannerID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000006a3a6
@property(nonatomic) __weak id <MNTrafficIncidentAlertUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_alertRetryTimerFired:(id)arg1;	// IMP=0x000000000006a369
- (void)_activateAlertForLocation:(id)arg1;	// IMP=0x0000000000069c01
- (void)_updatePreviousDisplayedBannerForRequest:(id)arg1;	// IMP=0x0000000000069bde
- (void)_updateRerouteProposalStatusForRequest:(id)arg1;	// IMP=0x0000000000069ba6
- (void)_updateAlertDistanceAndETA:(id)arg1;	// IMP=0x0000000000069b41
- (void)_removeActiveAlert;	// IMP=0x0000000000069aa3
- (void)clearAlerts;	// IMP=0x0000000000069a49
- (void)updateForAlertFromResponse:(id)arg1;	// IMP=0x000000000006977a
- (void)updatePreviousIncidentResultForRequest:(id)arg1;	// IMP=0x0000000000069725
- (void)updateForReroute:(id)arg1;	// IMP=0x0000000000069632
- (void)updateForLocation:(id)arg1;	// IMP=0x0000000000068ffe
- (void)dealloc;	// IMP=0x0000000000068fc0

@end
