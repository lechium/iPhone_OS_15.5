//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIViewServiceViewControllerOperatorDelegate-Protocol.h>

@class NSLock, NSMutableDictionary, NSMutableSet, NSString, _UIAsyncInvocation;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewServiceDeputyManager : NSObject <_UIViewServiceViewControllerOperatorDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _UIAsyncInvocation *_invalidationInvocation;	// 16 = 0x10
    NSMutableDictionary *_connectionHandlers;	// 24 = 0x18
    NSLock *_connectionHandlersLock;	// 32 = 0x20
    NSMutableSet *_deputies;	// 40 = 0x28
    CDUnknownBlockType _terminationHandler;	// 48 = 0x30
    int __automatic_invalidation_retainCount;	// 56 = 0x38
    _Bool __automatic_invalidation_invalidated;	// 60 = 0x3c
    id _delegate;	// 64 = 0x40
}

+ (id)exportedInterfaceSupportingDeputyInterfaces:(id)arg1;	// IMP=0x0000000001168af6
@property id delegate; // @synthesize delegate=_delegate;
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;	// IMP=0x0000000001169967
- (void)checkDeputyForRotation:(id)arg1;	// IMP=0x00000000011696d0
- (void)unregisterDeputyClass:(Class)arg1;	// IMP=0x000000000116955d
- (void)registerDeputyClass:(Class)arg1 withConnectionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000116939d
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000011692f5
- (void)__requestConnectionToDeputyOfClass:(Class)arg1 fromHostObject:(byref id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000001169026
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000001168fdd
- (void)__prototype_requestConnectionToDeputyFromHostObject:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000001168fd7
- (Class)_deputyClassForConnectionSelector:(SEL)arg1;	// IMP=0x0000000001168e33
- (void)_invalidateUnconditionallyThen:(CDUnknownBlockType)arg1;	// IMP=0x0000000001168824
- (void)invalidate;	// IMP=0x000000000116880e
- (void)dealloc;	// IMP=0x000000000116878b
- (id)init;	// IMP=0x00000000011685c6
- (_Bool)_isDeallocating;	// IMP=0x00000000011685aa
- (_Bool)_tryRetain;	// IMP=0x0000000001168575
- (unsigned long long)retainCount;	// IMP=0x0000000001168564
- (oneway void)release;	// IMP=0x00000000011684e1
- (id)retain;	// IMP=0x00000000011684c7
- (int)__automatic_invalidation_logic;	// IMP=0x0000000001168425

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

