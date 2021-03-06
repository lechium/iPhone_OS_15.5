//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/HKSPDNDConfigurationService.h>

#import <SleepDaemon/HDSPSleepFocusModeBridge-Protocol.h>

@class NSString;
@protocol HKSPSleepFocusModeBridgeDelegate;

@interface HKSPDNDConfigurationService (Editing) <HDSPSleepFocusModeBridge>
- (_Bool)removeSleepFocusMode:(id *)arg1;	// IMP=0x000000000005ca4c
- (_Bool)createSleepFocusMode:(id *)arg1;	// IMP=0x000000000005c6d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <HKSPSleepFocusModeBridgeDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

