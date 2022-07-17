//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class NSCountedSet, NSObject, NSString, NSXPCConnection;
@protocol _DKDaemonInterface;

@interface CDKnowledgeClientProxy : NSProxy
{
    int _notifyToken;	// 8 = 0x8
    NSObject<_DKDaemonInterface> *_daemon;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    NSString *_procName;	// 32 = 0x20
    NSCountedSet *_selectorInvocations;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000002723b
@property(readonly, nonatomic) NSCountedSet *selectorInvocations; // @synthesize selectorInvocations=_selectorInvocations;
@property(readonly, nonatomic) NSString *procName; // @synthesize procName=_procName;
@property(readonly, nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) __weak NSObject<_DKDaemonInterface> *daemon; // @synthesize daemon=_daemon;
- (id)description;	// IMP=0x00100000000271ac
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x001000000002714d
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0010000000027102
- (void)forwardInvocation:(id)arg1;	// IMP=0x0010000000026ff3
- (void)_logInvocationForSelector:(id)arg1;	// IMP=0x0010000000026fd6
- (void)dealloc;	// IMP=0x0010000000026f10
- (id)initWithDaemon:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000026c9e

@end
