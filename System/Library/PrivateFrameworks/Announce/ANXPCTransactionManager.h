//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ANXPCTransactionManager : NSObject
{
    NSMutableDictionary *_transactions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x0000000000015612
- (void).cxx_destruct;	// IMP=0x0000000000016b51
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableDictionary *transactions; // @synthesize transactions=_transactions;
- (void)_cancelTimer:(id)arg1;	// IMP=0x0000000000016b30
- (void)_resetTimer:(id)arg1 expiration:(double)arg2;	// IMP=0x0000000000016a5f
- (void)_startTimer:(id)arg1 expiration:(double)arg2;	// IMP=0x000000000001694e
- (void)_removeTransaction:(id)arg1;	// IMP=0x00000000000166ad
- (void)_createTransaction:(id)arg1 expiration:(double)arg2;	// IMP=0x00000000000163c5
- (id)_createTransaction:(id)arg1;	// IMP=0x00000000000161df
- (void)_transaction:(id)arg1 setActiveForTimeInterval:(double)arg2;	// IMP=0x0000000000016046
- (void)_transaction:(id)arg1 setActive:(_Bool)arg2;	// IMP=0x0000000000015ee0
- (id)_overview;	// IMP=0x0000000000015dc7
- (unsigned long long)_currentStatus;	// IMP=0x0000000000015d49
- (void)transaction:(id)arg1 setActiveForTimeInterval:(double)arg2;	// IMP=0x0000000000015c67
- (void)transaction:(id)arg1 setActive:(_Bool)arg2;	// IMP=0x0000000000015b6a
- (id)transaction:(id)arg1 forEndpointUUID:(id)arg2;	// IMP=0x0000000000015ab4
@property(readonly, nonatomic) NSArray *activeTransactions;
@property(readonly, nonatomic) unsigned long long status;
- (id)description;	// IMP=0x0000000000015697
- (id)init;	// IMP=0x0000000000015577

@end

