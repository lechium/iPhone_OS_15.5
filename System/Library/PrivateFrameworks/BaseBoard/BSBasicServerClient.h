//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSXPCServerClient-Protocol.h>

@class NSString;
@protocol OS_xpc_object;

@interface BSBasicServerClient : NSObject <BSXPCServerClient>
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    int _resumed;	// 16 = 0x10
    int _cancelled;	// 20 = 0x14
    _Bool _managingResumeState;	// 24 = 0x18
}

+ (id)wrapperWithConnection:(id)arg1;	// IMP=0x000000000004392e
- (void).cxx_destruct;	// IMP=0x0000000000043e48
- (void)sendMessageWithPacker:(CDUnknownBlockType)arg1 replyHandler:(CDUnknownBlockType)arg2 onQueue:(id)arg3;	// IMP=0x0000000000043cd7
- (void)sendMessageWithPacker:(CDUnknownBlockType)arg1;	// IMP=0x0000000000043cc0
- (void)sendMessage:(id)arg1;	// IMP=0x0000000000043c38
- (void)invalidate;	// IMP=0x0000000000043bc4
- (void)suspend;	// IMP=0x0000000000043b65
- (void)resume;	// IMP=0x0000000000043b03
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000439f9
- (id)initWithConnection:(id)arg1;	// IMP=0x000000000004398b
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
