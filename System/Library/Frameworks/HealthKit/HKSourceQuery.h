//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKSourceQueryClientInterface-Protocol.h>

@class NSString;
@protocol HKQueryServerInterface;

@interface HKSourceQuery <HKSourceQueryClientInterface>
{
    _Bool _hasDeliveredInitialResults;	// 8 = 0x8
    id <HKQueryServerInterface> _serverProxy;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    CDUnknownBlockType _updateHandler;	// 32 = 0x20
}

+ (void)configureServerInterface:(id)arg1;	// IMP=0x00000000001765da
+ (void)configureClientInterface:(id)arg1;	// IMP=0x00000000001764d8
+ (id)clientInterfaceProtocol;	// IMP=0x00000000001764c7
- (void).cxx_destruct;	// IMP=0x0000000000176bfb
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)client_deliverUpdatedSources:(id)arg1 added:(id)arg2 forQuery:(id)arg3;	// IMP=0x00000000001769c7
- (void)client_deliverSources:(id)arg1 forQuery:(id)arg2;	// IMP=0x00000000001767d9
- (_Bool)queue_shouldDeactivateAfterInitialResults;	// IMP=0x00000000001767c4
- (void)queue_queryDidDeactivate:(id)arg1;	// IMP=0x000000000017677a
- (void)queue_validate;	// IMP=0x0000000000176609
- (void)queue_deliverError:(id)arg1;	// IMP=0x00000000001763c0
- (id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000017620d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

