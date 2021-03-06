//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSSet, STTelephonyStatusDomain;

@interface SBAppRepairTransaction
{
    NSSet *_appInfos;	// 8 = 0x8
    NSMutableSet *_repairRequests;	// 16 = 0x10
    STTelephonyStatusDomain *_telephonyDomain;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000046a7ab
@property(readonly, copy, nonatomic) NSSet *appInfos; // @synthesize appInfos=_appInfos;
- (void)_startAppRepairs;	// IMP=0x000000000046a0cb
- (void)_completeRequest:(id)arg1 success:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000046a04c
- (void)_evaluateCompletion;	// IMP=0x0000000000469fd1
- (_Bool)_canBeInterrupted;	// IMP=0x0000000000469fc9
- (void)_didComplete;	// IMP=0x0000000000469f62
- (void)_begin;	// IMP=0x0000000000469e35
- (id)initWithApplicationInfos:(id)arg1;	// IMP=0x0000000000469d3b

@end

