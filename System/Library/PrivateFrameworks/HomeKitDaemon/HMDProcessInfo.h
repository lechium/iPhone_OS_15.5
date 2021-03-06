//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFProcessInfo.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDApplicationInfo, HMFLocationAuthorization, NSArray, NSHashTable, NSString, RBSProcessHandle, RBSProcessState;
@protocol HMFLocking;

@interface HMDProcessInfo : HMFProcessInfo <HMFLogging>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    NSHashTable *_connections;	// 16 = 0x10
    _Bool _entitledForAPIAccess;	// 24 = 0x18
    _Bool _entitledForSPIAccess;	// 25 = 0x19
    unsigned long long _state;	// 32 = 0x20
    RBSProcessState *_processState;	// 40 = 0x28
    NSString *_bundleIdentifier;	// 48 = 0x30
    HMDApplicationInfo *_applicationInfo;	// 56 = 0x38
    HMFLocationAuthorization *_locationAuthorization;	// 64 = 0x40
    RBSProcessHandle *_processHandle;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x00000000009de46d
+ (id)processInfoWithConnection:(id)arg1;	// IMP=0x00000000009de372
+ (id)privateClientIdentifierSalt;	// IMP=0x00000000009de342
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00000000009de2db
- (void).cxx_destruct;	// IMP=0x00000000009dde31
@property(readonly, nonatomic) RBSProcessHandle *processHandle; // @synthesize processHandle=_processHandle;
@property(readonly) HMFLocationAuthorization *locationAuthorization; // @synthesize locationAuthorization=_locationAuthorization;
@property(readonly) HMDApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
@property(readonly, getter=isEntitledForSPIAccess) _Bool entitledForSPIAccess; // @synthesize entitledForSPIAccess=_entitledForSPIAccess;
@property(readonly, getter=isEntitledForAPIAccess) _Bool entitledForAPIAccess; // @synthesize entitledForAPIAccess=_entitledForAPIAccess;
@property(readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)logIdentifier;	// IMP=0x00000000009ddd4e
- (id)clientIdentifierSalt:(id *)arg1;	// IMP=0x00000000009ddc43
- (void)removeConnection:(id)arg1;	// IMP=0x00000000009ddb68
- (void)addConnection:(id)arg1;	// IMP=0x00000000009dd8ff
@property(readonly, copy) NSArray *connections;
@property(readonly, getter=isActive) _Bool active;
@property(readonly, getter=isTerminated) _Bool terminated;
@property(readonly, getter=isSuspended) _Bool suspended;
@property(readonly, getter=isBackgrounded) _Bool background;
@property(readonly, getter=isBackgroundUpgradedToForeground) _Bool backgroundUpgradedToForeground;
@property(readonly, getter=isForegrounded) _Bool foreground;
@property unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) RBSProcessState *processState; // @synthesize processState=_processState;
- (void)_updateProcessState:(id)arg1;	// IMP=0x00000000009dca98
@property(readonly) _Bool shouldMonitor;
- (id)attributeDescriptions;	// IMP=0x00000000009dc7b3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009dc68f
- (id)initWithIdentifier:(int)arg1;	// IMP=0x00000000009dc433
- (id)initWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00000000009dbfeb
- (id)init;	// IMP=0x00000000009dbf43

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

