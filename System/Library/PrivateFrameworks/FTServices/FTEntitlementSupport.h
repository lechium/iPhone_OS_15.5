//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface FTEntitlementSupport : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0000000000029302
- (_Bool)_disconnectCTServerConnection;	// IMP=0x00000000000296a2
- (_Bool)_reconnectCTServerConnectionIfNecessary;	// IMP=0x000000000002969a
- (_Bool)_setupCTServerConnection;	// IMP=0x0000000000029692
- (void)_cleanupMachInfo;	// IMP=0x0000000000029627
- (void)_unregisterForCTEntitlementNotifications;	// IMP=0x0000000000029621
- (_Bool)_registerForCTEntitlementNotifications;	// IMP=0x0000000000029619
- (void)_updateEntitlementStatusUsingCTEntitlementsInfo:(struct __CFDictionary *)arg1;	// IMP=0x0000000000029613
- (void)_entitlementStatusChanged;	// IMP=0x000000000002954f
- (id)_rawEntitlementValue;	// IMP=0x0000000000029547
@property(readonly, nonatomic) NSDictionary *registrationState;
@property(readonly, nonatomic) _Bool faceTimeNonWiFiEntitled;
- (id)init;	// IMP=0x0000000000029357

@end
