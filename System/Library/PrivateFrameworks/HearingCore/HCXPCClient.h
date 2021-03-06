//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface HCXPCClient : NSObject
{
    NSObject<OS_xpc_object> *_xpcConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 16 = 0x10
    unsigned long long _requestedUpdates;	// 24 = 0x18
}

+ (id)clientWithConnection:(id)arg1;	// IMP=0x000000000000330e
- (void).cxx_destruct;	// IMP=0x0000000000003c96
@property(nonatomic) unsigned long long requestedUpdates; // @synthesize requestedUpdates=_requestedUpdates;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue; // @synthesize xpcQueue=_xpcQueue;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (_Bool)sendMessage:(id)arg1 errorBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000036e5
- (_Bool)wantsUpdatesForIdentifier:(unsigned long long)arg1;	// IMP=0x00000000000036bf
- (void)setWantsUpdates:(_Bool)arg1 forIdentifier:(unsigned long long)arg2;	// IMP=0x000000000000365c
- (void)teardownConnection;	// IMP=0x000000000000362a
- (id)description;	// IMP=0x0000000000003540
- (void)dealloc;	// IMP=0x00000000000034e9
- (id)initWithConnection:(id)arg1;	// IMP=0x000000000000335b

@end

