//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NFMutexLock, NSMutableArray;

@interface FCMultiStepFetchOperation
{
    NSMutableArray *_steps;	// 8 = 0x8
    NSMutableArray *_stepResults;	// 16 = 0x10
    NFMutexLock *_accessLock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000144ac3
@property(retain, nonatomic) NFMutexLock *accessLock; // @synthesize accessLock=_accessLock;
@property(retain, nonatomic) NSMutableArray *stepResults; // @synthesize stepResults=_stepResults;
@property(retain, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
- (void)_performNextStep;	// IMP=0x0000000000144544
- (void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2;	// IMP=0x0000000000144529
- (id)completeFetchOperation;	// IMP=0x0000000000144521
- (void)addNonCriticalFetchStep:(SEL)arg1;	// IMP=0x000000000014440e
- (void)addFetchStep:(SEL)arg1;	// IMP=0x00000000001442f8
- (void)performOperation;	// IMP=0x00000000001442e6
- (id)init;	// IMP=0x0000000000144230

@end

