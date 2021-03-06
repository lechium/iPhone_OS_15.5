//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKCorrelationQueryClientInterface-Protocol.h>

@class HKCorrelationType, NSDictionary, NSMutableArray, NSString;

@interface HKCorrelationQuery <HKCorrelationQueryClientInterface>
{
    NSDictionary *_samplePredicates;	// 8 = 0x8
    NSMutableArray *_correlationsPendingDelivery;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    NSDictionary *_filterDictionary;	// 32 = 0x20
}

+ (void)configureClientInterface:(id)arg1;	// IMP=0x00000000001c259d
+ (id)clientInterfaceProtocol;	// IMP=0x00000000001c258c
+ (Class)configurationClass;	// IMP=0x00000000001c257b
+ (_Bool)shouldApplyAdditionalPredicateForObjectType:(id)arg1;	// IMP=0x00000000001c205c
- (void).cxx_destruct;	// IMP=0x00000000001c2956
@property(readonly, nonatomic) NSDictionary *filterDictionary; // @synthesize filterDictionary=_filterDictionary;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy) NSDictionary *samplePredicates; // @synthesize samplePredicates=_samplePredicates;
- (void)queue_queryDidDeactivate:(id)arg1;	// IMP=0x00000000001c28d4
- (void)queue_deliverError:(id)arg1;	// IMP=0x00000000001c27cb
- (void)queue_validate;	// IMP=0x00000000001c269b
- (void)queue_populateConfiguration:(id)arg1;	// IMP=0x00000000001c261e
- (void)client_deliverCorrelations:(id)arg1 clearPendingSamples:(_Bool)arg2 isFinalBatch:(_Bool)arg3 queryUUID:(id)arg4;	// IMP=0x00000000001c22f6
@property(readonly, copy) HKCorrelationType *correlationType;
- (id)initWithType:(id)arg1 predicate:(id)arg2 samplePredicates:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001c20a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

