//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDProtectedDataReconciliationHookResponder-Protocol.h>
#import <EmailDaemon/EDResumable-Protocol.h>
#import <EmailDaemon/EFContentProtectionObserver-Protocol.h>

@class BKSProcessAssertion, EDPersistenceHookRegistry, NSString;
@protocol EDClientStateReporting, EFScheduler, OS_dispatch_queue;

@interface EDClientResumer : NSObject <EDProtectedDataReconciliationHookResponder, EFContentProtectionObserver, EDResumable>
{
    NSString *_bundleID;	// 8 = 0x8
    BKSProcessAssertion *_assertion;	// 16 = 0x10
    id <EDClientStateReporting> _clientState;	// 24 = 0x18
    EDPersistenceHookRegistry *_hookRegistry;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    id <EFScheduler> _scheduler;	// 48 = 0x30
}

+ (id)signpostLog;	// IMP=0x0000000000018900
+ (id)log;	// IMP=0x0000000000018823
- (void).cxx_destruct;	// IMP=0x000000000001961f
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;	// IMP=0x000000000001953b
- (void)invalidate;	// IMP=0x000000000001947e
- (void)persistenceDidReconcileProtectedData;	// IMP=0x000000000001946c
- (void)resumeForUpdates;	// IMP=0x0000000000018c19
- (void)dealloc;	// IMP=0x0000000000018bb1
- (id)initWithClientBundleIdentifier:(id)arg1 hookRegistry:(id)arg2 clientState:(id)arg3;	// IMP=0x0000000000018a26
- (unsigned long long)signpostID;	// IMP=0x00000000000189dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

