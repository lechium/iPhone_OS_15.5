//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLDispatchSilo, MISSING_TYPE, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_source;

@interface CLPrivacyManager : CLIntersiloService
{
    struct unique_ptr<CLClientManager_Type::Client, std::default_delete<CLClientManager_Type::Client>> _clientManagerClient;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_deferVacuum;	// 16 = 0x10
    NSMutableDictionary *_activities;	// 24 = 0x18
    _Bool _disabled;	// 32 = 0x20
    unsigned long long _timeStarted;	// 40 = 0x28
}

+ (id)getSilo;	// IMP=0x0020000000b2cfd6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000b2cfbd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000b2cf60
- (id).cxx_construct;	// IMP=0x0020000000b2ea78
- (void).cxx_destruct;	// IMP=0x0010000000b2ea50
- (void)onActivity:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0010000000b2e4df
- (void)retryActivityForEncryptionClass:(id)arg1 reason:(int)arg2;	// IMP=0x0010000000b2e24a
- (_Bool)isReadyToVacuumEncryptionClass:(id)arg1;	// IMP=0x0010000000b2e0bd
- (MISSING_TYPE *)checkInForActivityWithIdentifier: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000b2df9a
- (void)vacuumAll;	// IMP=0x0010000000b2d97f
- (void)scheduleVacuumWithReason:(id)arg1;	// IMP=0x0010000000b2d603
- (void)onClientManagerNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0010000000b2d4be
- (void)beginService;	// IMP=0x0010000000b2d0e1
- (void)dealloc;	// IMP=0x0010000000b2d093
- (id)init;	// IMP=0x0010000000b2d032

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) CLDispatchSilo *silo; // @dynamic silo;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

