//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MovingAverage : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    double _movingAverage;	// 16 = 0x10
    NSMutableArray *_queue;	// 24 = 0x18
    unsigned long long _windowSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002ab2f
@property(readonly, nonatomic) unsigned long long windowSize; // @synthesize windowSize=_windowSize;
@property(retain, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
@property double movingAverage; // @synthesize movingAverage=_movingAverage;
- (double)movingAverageForInterval:(double)arg1 defaultValue:(double)arg2;	// IMP=0x000000000002a7f7
- (void)addNumber:(id)arg1;	// IMP=0x000000000002a50f
- (id)initWithWindowSize:(unsigned long long)arg1;	// IMP=0x000000000002a406

@end
