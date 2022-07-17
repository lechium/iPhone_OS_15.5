//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAMutableFloatVector, MAProgressReporter;

@interface MAParallelProgress : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    MAProgressReporter *_progressReporter;	// 16 = 0x10
    MAMutableFloatVector *_progressValues;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c200b
- (_Bool)isCancelledWithProgress:(double)arg1 index:(unsigned long long)arg2;	// IMP=0x00000000000c1ed8
- (_Bool)isCancelled;	// IMP=0x00000000000c1ea0
- (id)initWithProgressReporter:(id)arg1 parallelOperationCount:(unsigned long long)arg2;	// IMP=0x00000000000c1dfa

@end
