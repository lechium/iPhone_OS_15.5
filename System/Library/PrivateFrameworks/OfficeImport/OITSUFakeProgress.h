//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUFakeProgress
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 40 = 0x28
    unsigned long long _currentStage;	// 48 = 0x30
    unsigned long long _numberOfStages;	// 56 = 0x38
    _Bool _stopped;	// 64 = 0x40
}

- (void)p_slowlyAdvanceToNextStage;	// IMP=0x000000000028f89d
- (void)advanceToStage:(unsigned long long)arg1;	// IMP=0x000000000028f79b
- (void)stop;	// IMP=0x000000000028f734
- (void)start;	// IMP=0x000000000028f6b5
- (void)dealloc;	// IMP=0x000000000028f673
- (id)initWithMaxValue:(double)arg1 numberOfStages:(unsigned long long)arg2;	// IMP=0x000000000028f558

@end

