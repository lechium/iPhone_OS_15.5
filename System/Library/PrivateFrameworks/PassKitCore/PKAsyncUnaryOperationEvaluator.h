//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKCancelable-Protocol.h>

@class NSMutableArray, NSString, PKAsyncOperationState;

@interface PKAsyncUnaryOperationEvaluator : NSObject <PKCancelable>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_operations;	// 16 = 0x10
    _Atomic _Bool _crashed;	// 24 = 0x18
    id _value;	// 32 = 0x20
    CDUnknownBlockType _completion;	// 40 = 0x28
    _Bool _started;	// 48 = 0x30
    _Bool _escaped;	// 49 = 0x31
    _Bool _canceled;	// 50 = 0x32
    PKAsyncOperationState *_runningOperationState;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000445d7e
- (_Bool)_performOperation;	// IMP=0x0000000000445624
@property(readonly, nonatomic, getter=isCanceled) _Bool canceled;
- (void)cancel;	// IMP=0x00000000004455a1
- (id)evaluateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000004454f3
- (void)dealloc;	// IMP=0x000000000044548a
- (id)_initWithOperations:(id)arg1 input:(id)arg2;	// IMP=0x0000000000445226
- (id)init;	// IMP=0x0000000000445218

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

