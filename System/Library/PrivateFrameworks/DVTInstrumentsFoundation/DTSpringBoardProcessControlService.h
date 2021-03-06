//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DVTInstrumentsFoundation/DTSpringBoardProcessControlServiceAuthorizedMethods-Protocol.h>

@class NSString;

@interface DTSpringBoardProcessControlService <DTSpringBoardProcessControlServiceAuthorizedMethods>
{
}

+ (void)registerCapabilities:(id)arg1;	// IMP=0x0000000000062290
- (_Bool)_HIDEvent:(unsigned int)arg1 hold:(_Bool)arg2;	// IMP=0x0000000000066853
- (_Bool)_dismissTodayView;	// IMP=0x000000000006683a
- (_Bool)_triggerSiri;	// IMP=0x00000000000667ca
- (void)showSBWidget:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000065fa7
- (void)showNotificiationCenterWidget:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000065a86
- (void)simulateNotificationForBundleID:(id)arg1 payload:(id)arg2 withError:(id *)arg3;	// IMP=0x00000000000658cb
- (void)sendProcessControlEvent:(id)arg1 toPid:(id)arg2;	// IMP=0x0000000000065862
- (void)sendProcessControlEvent:(id)arg1 toPid:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000643e5
- (id)processIdentifierForBundleIdentifier:(id)arg1;	// IMP=0x00000000000643bd
- (id)_launchSuspendedProcessWithBundleIdentifier:(id)arg1 orDevicePath:(id)arg2 environment:(id)arg3 arguments:(id)arg4 options:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000062455
- (id)launchSuspendedProcessWithDevicePath:(id)arg1 bundleIdentifier:(id)arg2 environment:(id)arg3 arguments:(id)arg4 options:(id)arg5;	// IMP=0x0000000000062323

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

