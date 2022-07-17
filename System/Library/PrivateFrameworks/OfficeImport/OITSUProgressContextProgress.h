//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, OITSUProgressContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUProgressContextProgress
{
    OITSUProgressContext *mProgressContext;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *mProgressContextObserverQueue;	// 40 = 0x28
    _Bool hasAddedProgressContextObserver;	// 48 = 0x30
}

- (void)p_progressDidChange:(id)arg1;	// IMP=0x000000000028f2be
- (void)p_updateProgressContextObserver;	// IMP=0x000000000028f1d2
- (void)removeProgressObserver:(id)arg1;	// IMP=0x000000000028f191
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000028f146
- (_Bool)isIndeterminate;	// IMP=0x000000000028f13e
- (double)maxValue;	// IMP=0x000000000028f130
- (double)value;	// IMP=0x000000000028f109
- (void)dealloc;	// IMP=0x000000000028f0b2
- (id)init;	// IMP=0x000000000028f09e
- (id)initWithProgressContext:(id)arg1;	// IMP=0x000000000028f02e

@end
