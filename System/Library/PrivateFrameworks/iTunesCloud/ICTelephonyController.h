//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/CoreTelephonyClientDelegate-Protocol.h>
#import <iTunesCloud/CoreTelephonyClientSuppServicesDelegate-Protocol.h>

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICTelephonyController : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSuppServicesDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_telephonyCallbackQueue;	// 16 = 0x10
    NSString *_phoneNumber;	// 24 = 0x18
    CoreTelephonyClient *_telephonyClient;	// 32 = 0x20
    CTXPCServiceSubscriptionContext *_telephonySubscriptionContext;	// 40 = 0x28
}

+ (id)sharedController;	// IMP=0x000000000017dd13
- (void).cxx_destruct;	// IMP=0x000000000017d4c6
- (void)_updatePhoneNumberAllowingDidChangeNotification:(_Bool)arg1;	// IMP=0x000000000017d274
- (id)_telephonySubscriptionContext;	// IMP=0x000000000017cfee
- (id)_telephonyClient;	// IMP=0x000000000017ce91
- (void)_handleActiveSubscriptionsDidChange;	// IMP=0x000000000017ce40
- (_Bool)_ensureTelephonyHandlesAreReady;	// IMP=0x000000000017cdd2
- (void)phoneNumberChanged:(id)arg1;	// IMP=0x000000000017cd32
- (void)phoneNumberAvailable:(id)arg1;	// IMP=0x000000000017cc92
- (void)activeSubscriptionsDidChange;	// IMP=0x000000000017cbf2
- (_Bool)sendSMSWithText:(id)arg1 toPhoneNumber:(id)arg2 error:(id *)arg3;	// IMP=0x000000000017ca6f
@property(readonly, copy, nonatomic) NSString *IMEI;
@property(readonly, copy, nonatomic) NSString *mobileSubscriberNetworkCode;
@property(readonly, copy, nonatomic) NSString *mobileSubscriberCountryCode;
@property(readonly, copy, nonatomic) NSString *providerName;
@property(readonly, copy, nonatomic) NSString *phoneNumber;
- (void)dealloc;	// IMP=0x000000000017c667
- (id)_init;	// IMP=0x000000000017c592

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

