//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface CHDelegateController : NSObject
{
    struct os_unfair_lock_s _delegateLock;	// 8 = 0x8
    NSMapTable *_delegateToQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000fb5d
@property(readonly, nonatomic) struct os_unfair_lock_s delegateLock; // @synthesize delegateLock=_delegateLock;
@property(readonly, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
- (void)enumerateDelegatesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f915
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000000f889
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000000f7db
- (id)init;	// IMP=0x000000000000f76e

@end

