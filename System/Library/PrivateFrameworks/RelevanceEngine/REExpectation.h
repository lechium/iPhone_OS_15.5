//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

@interface REExpectation : NSObject
{
    NSObject<OS_dispatch_group> *_group;	// 8 = 0x8
    _Atomic int _count;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010524e
- (void)notifyOperationsCompleteOrPerformUsingQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000001051c8
- (void)notifyOperationsCompleteOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000001051b4
- (void)endOperation;	// IMP=0x0000000000105197
- (void)beginOperation;	// IMP=0x0000000000105185
@property(readonly, nonatomic) long long outstandingOperations;
- (id)init;	// IMP=0x0000000000105128

@end
