//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue, WiFiP2PSPITransactionResponderXPC;

@interface WiFiP2PSPITransactionRequestor : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <WiFiP2PSPITransactionResponderXPC> _responderProxy;	// 24 = 0x18
    NSMutableDictionary *_openTrasactions;	// 32 = 0x20
}

+ (id)shared;	// IMP=0x0000000000010360
- (void).cxx_destruct;	// IMP=0x0000000000010e10
- (void)endTransaction:(long long)arg1;	// IMP=0x0000000000010d1e
- (void)beginTransaction:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000109a3
- (void)connectIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x000000000001054b
- (_Bool)isConnected;	// IMP=0x0000000000010532
- (void)resetState;	// IMP=0x00000000000103b5
- (void)dealloc;	// IMP=0x0000000000010322
- (id)init;	// IMP=0x000000000001025d

@end
