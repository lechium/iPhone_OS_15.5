//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCountedSet, NSObject;
@protocol OS_dispatch_queue;

@interface _PLServerTransaction
{
    NSCountedSet *_enqueuedChangeScopes;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_changeScopeQueue;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000004ff3a9
- (void)completeTransactionScope:(id)arg1;	// IMP=0x00000000004ff317
- (void)completeTransaction;	// IMP=0x00000000004ff311
- (void)abortTransaction;	// IMP=0x00000000004ff30b
- (id)changeScopes;	// IMP=0x00000000004ff22e
- (void)addChangeScopes:(id)arg1;	// IMP=0x00000000004ff228
- (void)_enqueueChangeScopes:(id)arg1;	// IMP=0x00000000004ff196
- (id)generateChangeScopesDescription;	// IMP=0x00000000004ff179
- (_Bool)isClientTransaction;	// IMP=0x00000000004ff171
- (void)popChangeScopesBatch;	// IMP=0x00000000004ff16b
- (void)pushChangeScopesBatch;	// IMP=0x00000000004ff165
- (void)dealloc;	// IMP=0x00000000004ff0bd
- (id)initWithPathManager:(id)arg1;	// IMP=0x00000000004ff023

@end
