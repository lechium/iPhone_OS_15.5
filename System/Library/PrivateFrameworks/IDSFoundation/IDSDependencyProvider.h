//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/IDSKeychainAdapter-Protocol.h>
#import <IDSFoundation/IDSPushAdapter-Protocol.h>
#import <IDSFoundation/IDSServiceLoader-Protocol.h>
#import <IDSFoundation/IDSXPCAdapter-Protocol.h>

@class NSMutableDictionary, NSString;

@interface IDSDependencyProvider : NSObject <IDSServiceLoader, IDSKeychainAdapter, IDSPushAdapter, IDSXPCAdapter>
{
    NSMutableDictionary *_registeredAdapters;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

+ (void)registerObject:(id)arg1 forProtocol:(id)arg2;	// IMP=0x00000000000f14c8
+ (id)registeredObjectForProtocol:(id)arg1;	// IMP=0x00000000000f1445
+ (id)userDefaults;	// IMP=0x00000000000f13db
+ (id)systemMonitorAdapter;	// IMP=0x00000000000f1371
+ (id)keychainAdapter;	// IMP=0x00000000000f1308
+ (id)XPCAdapter;	// IMP=0x00000000000f129f
+ (id)serviceLoader;	// IMP=0x00000000000f1236
+ (id)pushAdapter;	// IMP=0x00000000000f11cd
+ (id)sharedProvider;	// IMP=0x00000000000f0f9b
- (void).cxx_destruct;	// IMP=0x00000000000f154e
- (void)registerObject:(id)arg1 forProtocol:(id)arg2;	// IMP=0x00000000000f1103
- (id)registeredObjectForProtocol:(id)arg1;	// IMP=0x00000000000f106b
- (id)_init;	// IMP=0x00000000000f1030
- (id)loadServiceDictionaries;	// IMP=0x00000000000f155e
- (_Bool)removeKeychainDataOnService:(id)arg1 account:(id)arg2 error:(int *)arg3;	// IMP=0x00000000000f15aa
- (_Bool)getKeychainData:(id *)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 error:(int *)arg5;	// IMP=0x00000000000f158d
- (_Bool)setKeychainData:(id)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 allowSync:(_Bool)arg5 error:(int *)arg6;	// IMP=0x00000000000f1568
- (id)apsConnectionWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 enablePushDuringSleep:(_Bool)arg3 queue:(id)arg4;	// IMP=0x00000000000f15e6
- (id)placeholderMachPort;	// IMP=0x00000000000f15bd
- (id)createServiceConnectionWithServiceName:(const char *)arg1 invalidationHandler:(CDUnknownBlockType)arg2 terminationHandler:(CDUnknownBlockType)arg3 peerEventHandler:(CDUnknownBlockType)arg4 peerQueue:(id)arg5;	// IMP=0x00000000000f1685

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

