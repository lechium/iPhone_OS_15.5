//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@interface _DKSyncOperation : NSOperation
{
    _Atomic unsigned char _state;	// 8 = 0x8
}

+ (_Bool)_removesDependenciesAfterFinish;	// IMP=0x000000000008d093
- (void)endOperation;	// IMP=0x000000000008d24c
- (void)startOperation;	// IMP=0x000000000008d1c0
- (void)start;	// IMP=0x000000000008d143
- (void)dealloc;	// IMP=0x000000000008d114
- (id)init;	// IMP=0x000000000008d0d4
- (_Bool)isFinished;	// IMP=0x000000000008d0b0
- (_Bool)isExecuting;	// IMP=0x000000000008d09b

@end

