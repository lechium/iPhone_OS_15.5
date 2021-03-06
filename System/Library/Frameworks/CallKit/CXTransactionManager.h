//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol CXTransactionManagerDelegate, OS_dispatch_queue;

@interface CXTransactionManager : NSObject
{
    id <CXTransactionManagerDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableSet *_outstandingTransactionGroups;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002b354
@property(retain, nonatomic) NSMutableSet *outstandingTransactionGroups; // @synthesize outstandingTransactionGroups=_outstandingTransactionGroups;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CXTransactionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_timeoutReachedForAction:(id)arg1 callSource:(id)arg2;	// IMP=0x000000000002b1ad
- (void)_setUpTimeoutForAction:(id)arg1 callSource:(id)arg2;	// IMP=0x000000000002b062
- (void)failOutstandingActionsForCallWithUUID:(id)arg1;	// IMP=0x000000000002ac5c
- (void)updateWithCompletedAction:(id)arg1;	// IMP=0x000000000002a75b
- (void)addOutstandingTransactionGroup:(id)arg1;	// IMP=0x000000000002a3ce
- (id)description;	// IMP=0x000000000002a346
- (id)init;	// IMP=0x000000000002a338
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000002a2a3

@end

