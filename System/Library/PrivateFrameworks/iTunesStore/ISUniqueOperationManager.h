//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStore/ISSingleton-Protocol.h>

@class ISUniqueOperationContext, NSLock, NSMutableArray, NSMutableDictionary, NSString;

@interface ISUniqueOperationManager : NSObject <ISSingleton>
{
    ISUniqueOperationContext *_activeContext;	// 8 = 0x8
    NSMutableArray *_contexts;	// 16 = 0x10
    NSLock *_lock;	// 24 = 0x18
    NSMutableDictionary *_lockPool;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000000000533db
+ (void)setSharedInstance:(id)arg1;	// IMP=0x0000000000053392
- (id)_contextForOperation:(id)arg1;	// IMP=0x00000000000537c4
- (id)_activeContext;	// IMP=0x0000000000053783
- (void)uniqueOperationFinished:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000536fb
- (void)setPredecessorIfNeeded:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000053672
- (id)predecessorForKey:(id)arg1 operation:(id)arg2;	// IMP=0x00000000000535fb
- (id)lockWithIdentifier:(id)arg1;	// IMP=0x0000000000053535
- (void)checkOutOperation:(id)arg1;	// IMP=0x0000000000053491
- (void)checkInOperation:(id)arg1;	// IMP=0x0000000000053435
- (void)dealloc;	// IMP=0x000000000005333a
- (id)init;	// IMP=0x00000000000532de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
