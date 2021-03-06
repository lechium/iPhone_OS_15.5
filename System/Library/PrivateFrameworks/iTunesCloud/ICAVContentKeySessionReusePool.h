//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICAVContentKeySessionReusePool : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    long long _maxUseCount;	// 16 = 0x10
    NSMutableArray *_reusables;	// 24 = 0x18
    long long _currentBatchNumber;	// 32 = 0x20
}

+ (id)defaultPool;	// IMP=0x000000000005931d
- (void).cxx_destruct;	// IMP=0x000000000005930d
@property(nonatomic) long long currentBatchNumber; // @synthesize currentBatchNumber=_currentBatchNumber;
@property(retain, nonatomic) NSMutableArray *reusables; // @synthesize reusables=_reusables;
@property(nonatomic) long long maxUseCount; // @synthesize maxUseCount=_maxUseCount;
- (void)mediaServicesWereReset;	// IMP=0x00000000000592b8
- (void)mediaServicesWereLost;	// IMP=0x00000000000592a6
- (void)didReceiveFairPlayError:(id)arg1;	// IMP=0x0000000000059294
- (void)invalidateAllReusables;	// IMP=0x0000000000059217
- (void)reuse:(id)arg1;	// IMP=0x0000000000058d0f
- (id)reusableWithIdentifier:(id)arg1;	// IMP=0x0000000000058980
- (id)init;	// IMP=0x000000000005885d

@end

