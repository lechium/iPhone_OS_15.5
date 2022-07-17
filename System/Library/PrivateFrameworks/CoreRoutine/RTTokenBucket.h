//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RTTokenBucket : NSObject
{
    double _fillRate;	// 8 = 0x8
    double _capacity;	// 16 = 0x10
    double _operationCost;	// 24 = 0x18
    double _tokenBucket;	// 32 = 0x20
    double _lastArrivalTime;	// 40 = 0x28
    double _totalInterArrivalTime;	// 48 = 0x30
    double _wastedTokens;	// 56 = 0x38
    double _totalTokensGenerated;	// 64 = 0x40
    double _totalTokensConsumed;	// 72 = 0x48
    unsigned long long _totalOperations;	// 80 = 0x50
    unsigned long long _operationsAllowed;	// 88 = 0x58
    double _interArrivalTime;	// 96 = 0x60
    double _lastBucketFill;	// 104 = 0x68
}

@property(nonatomic) double lastBucketFill; // @synthesize lastBucketFill=_lastBucketFill;
@property(nonatomic) double interArrivalTime; // @synthesize interArrivalTime=_interArrivalTime;
- (id)dumpStatistics;	// IMP=0x00000000000204ae
- (void)reset;	// IMP=0x0000000000020460
- (unsigned long long)countOfOperationsAllowedWithCost:(double)arg1;	// IMP=0x0000000000020410
- (unsigned long long)countOfOperationsAllowed;	// IMP=0x00000000000203f9
- (double)timeIntervalUntilOperationAllowedWithCost:(double)arg1;	// IMP=0x00000000000203b6
- (double)timeIntervalUntilOperationAllowed;	// IMP=0x000000000002039f
- (_Bool)operationAllowed;	// IMP=0x0000000000020388
- (_Bool)operationAllowedWithCost:(double)arg1;	// IMP=0x000000000002032a
- (_Bool)_consumeTokens:(unsigned long long)arg1;	// IMP=0x00000000000201df
- (void)_replenishTokens;	// IMP=0x0000000000020178
- (id)initWithFillRate:(double)arg1 capacity:(double)arg2 initialAllocation:(double)arg3;	// IMP=0x000000000001fe2f
- (id)initWithFillRate:(double)arg1 capacity:(double)arg2;	// IMP=0x000000000001fe1a
- (id)init;	// IMP=0x000000000001fdeb

@end
