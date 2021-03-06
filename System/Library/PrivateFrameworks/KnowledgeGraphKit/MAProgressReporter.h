//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MAProgressReporter : NSObject
{
}

+ (id)progressReporterWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c204c
+ (id)ignoreProgress;	// IMP=0x00000000000c2033
- (id)progressReportersForParallelOperationsWithCount:(unsigned long long)arg1;	// IMP=0x00000000000c1a13
- (id)childProgressReporterForStep:(unsigned long long)arg1 outOf:(unsigned long long)arg2;	// IMP=0x00000000000c19bf
- (id)childProgressReporterFromStart:(double)arg1 toEnd:(double)arg2;	// IMP=0x00000000000c19a9
- (id)childProgressWithOffset:(double)arg1 scale:(double)arg2;	// IMP=0x00000000000c1977
- (_Bool)isCancelledWithUnitsCompleted:(unsigned long long)arg1 outOf:(unsigned long long)arg2;	// IMP=0x00000000000c192f
- (_Bool)isCancelledWithProgress:(double)arg1 currentTime:(double)arg2;	// IMP=0x00000000000c18fd
- (_Bool)isCancelledWithProgress:(double)arg1;	// IMP=0x00000000000c18cc
@property(readonly) _Bool isCancelled;
- (id)initForSubclasses;	// IMP=0x00000000000c186b

@end

