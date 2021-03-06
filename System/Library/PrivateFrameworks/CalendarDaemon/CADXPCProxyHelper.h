//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADDatabaseInitializationOptions, NSXPCConnection, Protocol;
@protocol CADXPCProxyHelperDelegate;

@interface CADXPCProxyHelper : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    Protocol *_protocol;	// 16 = 0x10
    _Bool _synchronous;	// 24 = 0x18
    CADDatabaseInitializationOptions *_initializationOptions;	// 32 = 0x20
    id <CADXPCProxyHelperDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000250e0
@property(nonatomic) __weak id <CADXPCProxyHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) CADDatabaseInitializationOptions *initializationOptions; // @synthesize initializationOptions=_initializationOptions;
- (void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withErrorCode:(long long)arg3;	// IMP=0x0000000000024e0b
- (long long)replyBlockArgumentIndex:(id)arg1;	// IMP=0x0000000000024d85
- (id)_getReplyBlockFromInvocation:(id)arg1;	// IMP=0x0000000000024cf6
- (_Bool)_validateCADObjectIDsInInvocationArguments:(id)arg1;	// IMP=0x0000000000024851
- (void)_tryInvokeWithGenerationValidation:(id)arg1 target:(id)arg2 replyBlock:(id)arg3 contextHolder:(id)arg4;	// IMP=0x0000000000024773
- (id)_replaceReplyBlockInInvocation:(id)arg1 retryingAfterInitializationWithContextHolder:(id)arg2;	// IMP=0x0000000000024013
- (_Bool)_shouldResendInitializationOptionsForInvocation:(id)arg1;	// IMP=0x0000000000023ff3
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000023a95
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000239d1
- (id)initWithXPCConnection:(id)arg1 protocol:(id)arg2 synchronous:(_Bool)arg3;	// IMP=0x000000000002392d

@end

