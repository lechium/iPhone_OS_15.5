//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMDBackgroundTaskAgentTimer, HMDHomePresence, HMDHomePresenceUpdate, NSDictionary, NSMutableDictionary, NSString;

@interface HMDHomePresenceMonitor <HMFLogging, NSSecureCoding>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_presenceMap;	// 16 = 0x10
    HMDHomePresence *_currentHomePresence;	// 24 = 0x18
    HMDHomePresenceUpdate *_homePresenceUpdate;	// 32 = 0x20
    HMDBackgroundTaskAgentTimer *_btaAuditTimer;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001925de
+ (id)logCategory;	// IMP=0x00000000001925ae
- (void).cxx_destruct;	// IMP=0x0000000000191aec
@property(readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaAuditTimer; // @synthesize btaAuditTimer=_btaAuditTimer;
@property(retain, nonatomic) HMDHomePresenceUpdate *homePresenceUpdate; // @synthesize homePresenceUpdate=_homePresenceUpdate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000191a41
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001918ac
- (void)_evaluatePresence:(id)arg1 newUserPresence:(id)arg2 presenceStatusUpdateReason:(id)arg3;	// IMP=0x0000000000191288
- (void)_updateUserPresence:(id)arg1 presenceAuth:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000190e19
- (void)handleUserHomePresencePayload:(id)arg1 device:(id)arg2 user:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000190418
- (void)handleUserPresenceUpdateNotification:(id)arg1;	// IMP=0x0000000000190367
- (void)handleUserPresenceUpdate:(id)arg1;	// IMP=0x0000000000190216
- (void)removeUser:(id)arg1;	// IMP=0x0000000000190017
- (void)addNewUser:(id)arg1;	// IMP=0x000000000018fefd
- (void)_addUser:(id)arg1;	// IMP=0x000000000018fd32
- (void)_removeNonExistingUsers;	// IMP=0x000000000018f94e
- (void)_preparePresenceMap;	// IMP=0x000000000018f653
- (void)residentChanged;	// IMP=0x000000000018f5e2
- (void)_startAuditTimer;	// IMP=0x000000000018f31d
- (void)_auditPresenceMap;	// IMP=0x000000000018ef8f
- (void)timerFired:(id)arg1;	// IMP=0x000000000018ee75
- (void)handleHomeDataLoadedNotification:(id)arg1;	// IMP=0x000000000018ee04
@property(retain, nonatomic) HMDHomePresence *currentHomePresence; // @synthesize currentHomePresence=_currentHomePresence;
@property(readonly, copy, nonatomic) NSDictionary *presenceMap;
- (void)_registerForMessages;	// IMP=0x000000000018eaf7
- (void)configure:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x000000000018e9eb
- (void)dealloc;	// IMP=0x000000000018e976
- (id)init;	// IMP=0x000000000018e8fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

