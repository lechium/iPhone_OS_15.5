//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebBookmarks/WebBookmarksXPCConnectionDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_xpc_object, WebBookmarksXPCConnectionDelegate;

@interface WebBookmarksXPCListener : NSObject <WebBookmarksXPCConnectionDelegate>
{
    NSObject<OS_xpc_object> *_listenerConnection;	// 8 = 0x8
    NSMutableArray *_clientConnections;	// 16 = 0x10
    NSMutableDictionary *_messageHandlers;	// 24 = 0x18
    id <WebBookmarksXPCConnectionDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000681ca
@property(nonatomic) __weak id <WebBookmarksXPCConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;	// IMP=0x0000000000068101
- (void)setMessageHandlers:(id)arg1;	// IMP=0x00000000000680ac
- (void)setHandler:(CDUnknownBlockType)arg1 forMessageNamed:(const char *)arg2;	// IMP=0x0000000000068030
- (void)_handleIncomingConnection:(id)arg1;	// IMP=0x0000000000067ea4
- (id)initListenerForMachService:(const char *)arg1;	// IMP=0x0000000000067cdd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

