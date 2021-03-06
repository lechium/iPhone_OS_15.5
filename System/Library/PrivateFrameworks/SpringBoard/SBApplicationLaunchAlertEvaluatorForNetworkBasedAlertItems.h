//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBApplicationLaunchAlertEvaluator-Protocol.h>

@class NSString, SBAirplaneModeController, SBTelephonyManager;

@interface SBApplicationLaunchAlertEvaluatorForNetworkBasedAlertItems : NSObject <SBApplicationLaunchAlertEvaluator>
{
    SBAirplaneModeController *_airplaneModeController;	// 8 = 0x8
    SBTelephonyManager *_telephonyManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004d1aff
- (id)_airplaneModeController;	// IMP=0x0000000000086822
- (id)_telephonyManager;	// IMP=0x00000000000867e8
- (unsigned long long)shouldShowLaunchAlertForApplication:(id)arg1;	// IMP=0x000000000008664f
- (id)initWithAirplaneModeController:(id)arg1 telephonyManager:(id)arg2;	// IMP=0x00000000004d1a66
- (id)init;	// IMP=0x00000000004d1a50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

