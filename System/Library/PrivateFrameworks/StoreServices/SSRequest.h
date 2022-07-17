//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class BKSProcessAssertion, NSString, SSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source, SSRequestDelegate;

@interface SSRequest : NSObject <SSXPCCoding>
{
    long long _backgroundTaskIdentifier;	// 8 = 0x8
    _Bool _cancelAfterTaskExpiration;	// 16 = 0x10
    id <SSRequestDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    SSXPCConnection *_requestConnection;	// 40 = 0x28
    SSXPCConnection *_responseConnection;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_backgroundTaskExpirationTimer;	// 56 = 0x38
    long long _callState;	// 64 = 0x40
    CDUnknownBlockType _completionBlock;	// 72 = 0x48
    BKSProcessAssertion *_taskAssertion;	// 80 = 0x50
    _Bool _taskAssertionTaken;	// 88 = 0x58
    _Bool _usesTaskCompletionAssertions;	// 89 = 0x59
}

+ (_Bool)_allowMultipleCallbacks;	// IMP=0x00000000000276ad
- (void).cxx_destruct;	// IMP=0x000000000002874a
@property(nonatomic) _Bool usesTaskCompletionAssertions; // @synthesize usesTaskCompletionAssertions=_usesTaskCompletionAssertions;
@property(nonatomic) __weak id <SSRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_shutdownRequestWithMessageID:(long long)arg1;	// IMP=0x000000000002864f
- (void)_expireBackgroundTask;	// IMP=0x000000000002839c
- (void)__endBackgroundTask;	// IMP=0x00000000000281ca
- (void)_cancelBackgroundTaskExpirationTimer;	// IMP=0x0000000000028194
- (void)__beginBackgroundTask;	// IMP=0x0000000000027cc9
- (void)_startWithMessageID:(long long)arg1 messageBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000277da
- (void)_shutdownRequest;	// IMP=0x0000000000027777
- (void)_endBackgroundTask;	// IMP=0x0000000000027716
- (void)_beginBackgroundTask;	// IMP=0x00000000000276b5
@property(nonatomic) _Bool shouldCancelAfterTaskExpiration;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002753d
- (_Bool)start;	// IMP=0x00000000000273b9
- (void)disconnect;	// IMP=0x0000000000027353
- (void)cancel;	// IMP=0x00000000000272ed
- (void)dealloc;	// IMP=0x000000000002725b
- (id)init;	// IMP=0x0000000000027249
- (id)_initSSRequest;	// IMP=0x0000000000027189

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
