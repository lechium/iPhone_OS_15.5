//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKJoinGroup, NSError, NSLock, NSMutableArray;

@interface GKJoinGroupNotifier : NSObject
{
    GKJoinGroup *_group;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    NSMutableArray *_updateQueue;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000b9990
@property(retain, nonatomic) NSMutableArray *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) __weak GKJoinGroup *group; // @synthesize group=_group;
- (void)setResult:(CDUnknownBlockType)arg1 error:(id)arg2;	// IMP=0x00100000000b97d7
@property(retain) NSError *error; // @synthesize error=_error;
- (oneway void)release;	// IMP=0x00100000000b96ac
- (id)retain;	// IMP=0x00100000000b961a
- (void)dealloc;	// IMP=0x00100000000b95be
- (id)init;	// IMP=0x00100000000b9562

@end

