//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol AMSUniversalLinksServiceProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSUniversalLinksConnection : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000232a6e
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)_removeRemoteConnection;	// IMP=0x00000000002329de
- (id)_newRemoteConnection;	// IMP=0x00000000002327b0
- (id)_makeRemoteConnectionInterface;	// IMP=0x0000000000232725
- (void)dealloc;	// IMP=0x00000000002326e7
@property(readonly, nonatomic) id <AMSUniversalLinksServiceProtocol> proxy;
- (id)init;	// IMP=0x000000000023235a

@end

