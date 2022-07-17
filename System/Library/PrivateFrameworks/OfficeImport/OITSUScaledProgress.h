//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, OITSUProgress, OITSUScaledProgressStorage;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUScaledProgress
{
    OITSUScaledProgressStorage *mStorage;	// 32 = 0x20
    OITSUProgress *mProgress;	// 40 = 0x28
    id mProgressObserver;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *mProgressQueue;	// 56 = 0x38
}

- (void)p_removeProgressObserverFromProgressInQueue;	// IMP=0x000000000028e631
- (void)p_addProgressObserverToProgressInQueue;	// IMP=0x000000000028e510
- (void)removeProgressObserver:(id)arg1;	// IMP=0x000000000028e454
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000028e38e
- (_Bool)isIndeterminate;	// IMP=0x000000000028e363
@property double maxValue;
- (double)value;	// IMP=0x000000000028e28e
@property(retain) OITSUProgress *progress;
- (void)dealloc;	// IMP=0x000000000028e014
- (id)init;	// IMP=0x000000000028df8b

@end
