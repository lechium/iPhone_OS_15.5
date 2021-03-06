//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection;

@interface ASDStoreKitServiceBroker : NSObject
{
    NSLock *_serviceConnectionLock;	// 8 = 0x8
    NSXPCConnection *_serviceConnection;	// 16 = 0x10
}

+ (id)defaultBroker;	// IMP=0x0000000000072611
+ (id)_storeKitServiceInterface;	// IMP=0x0000000000072d5a
+ (id)_storeKitClientInterface;	// IMP=0x0000000000072b4e
- (void).cxx_destruct;	// IMP=0x0000000000072b26
- (void)_serviceConnectionInvalidated;	// IMP=0x0000000000072ae1
- (id)_serviceConnection;	// IMP=0x0000000000072854
- (id)storeKitSynchronousService;	// IMP=0x0000000000072840
- (id)storeKitSynchronousServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000007275d
- (id)storeKitService;	// IMP=0x0000000000072749
- (id)storeKitServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000072666
- (id)init;	// IMP=0x00000000000725bb

@end

