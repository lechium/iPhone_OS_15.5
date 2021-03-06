//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AKAuthorizationConnectionManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_connectionsByBundleID;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x004000000006e3f3
- (void).cxx_destruct;	// IMP=0x002000000006ed69
- (id)_connectionWithProtocol:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000006ec08
- (void)_removeConnectionWithProtocol:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000006ea9a
- (void)_setConnection:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000006e712
- (id)synchronousRemoteObjectProxyWithProtocol:(id)arg1 forBundleID:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000006e685
- (id)remoteObjectProxyWithProtocol:(id)arg1 forBundleID:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000006e5f8
- (id)remoteObjectProxyWithProtocol:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000006e5a8
- (void)addConnection:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000006e547
- (void)addConnectionForClient:(id)arg1;	// IMP=0x001000000006e48e
- (id)bundleIDs;	// IMP=0x001000000006e478
- (id)init;	// IMP=0x001000000006e386

@end

