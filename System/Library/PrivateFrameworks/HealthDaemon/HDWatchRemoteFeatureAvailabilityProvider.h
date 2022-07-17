//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDRemoteFeatureAvailabilityProviding-Protocol.h>

@class NRPairedDeviceRegistry, NSString, NSUserDefaults;
@protocol HDRemoteFeatureAvailabilityProvidingDelegate, OS_os_log;

@interface HDWatchRemoteFeatureAvailabilityProvider : NSObject <HDRemoteFeatureAvailabilityProviding>
{
    NSString *_remoteDisableCondition;	// 8 = 0x8
    NSString *_seedExpirationCondition;	// 16 = 0x10
    NSObject<OS_os_log> *_loggingCategory;	// 24 = 0x18
    NRPairedDeviceRegistry *_pairedDeviceRegistry;	// 32 = 0x20
    NSUserDefaults *_remoteFeatureAvailabilityUserDefaults;	// 40 = 0x28
    id <HDRemoteFeatureAvailabilityProvidingDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000044bfe5
@property(nonatomic) __weak id <HDRemoteFeatureAvailabilityProvidingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setRemoteFeatureAvailabilityUserDefaults:(id)arg1;	// IMP=0x000000000044beff
- (void)setPairedDeviceRegistry:(id)arg1;	// IMP=0x000000000044beee
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000044bcb0
- (id)rescindedStatusForCountryCode:(id)arg1 device:(id)arg2 error:(id *)arg3;	// IMP=0x000000000044b95a
- (id)rescindedStatusOnActivePairedDeviceForCountryCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000044b8d0
- (void)dealloc;	// IMP=0x000000000044b83d
- (id)description;	// IMP=0x000000000044b7fb
- (id)initWithRemoteDisableCondition:(id)arg1 seedExpirationCondition:(id)arg2 loggingCategory:(id)arg3;	// IMP=0x000000000044b6c0
- (id)initWithFeatureIdentifier:(id)arg1 loggingCategory:(id)arg2;	// IMP=0x000000000044b574

@end
