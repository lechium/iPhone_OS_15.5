//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKDeviceQueryClientInterface-Protocol.h>

@class NSMutableArray, NSString;

@interface HKDeviceQuery <HKDeviceQueryClientInterface>
{
    NSMutableArray *_resultDevices;	// 8 = 0x8
    CDUnknownBlockType _resultsHandler;	// 16 = 0x10
}

+ (void)configureClientInterface:(id)arg1;	// IMP=0x00000000001fda0e
+ (id)clientInterfaceProtocol;	// IMP=0x00000000001fd9fd
- (void).cxx_destruct;	// IMP=0x00000000001fdaa0
@property(readonly, copy, nonatomic) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler=_resultsHandler;
- (void)queue_queryDidDeactivate:(id)arg1;	// IMP=0x00000000001fd9dc
- (void)queue_deliverError:(id)arg1;	// IMP=0x00000000001fd8d3
- (void)clientRemote_deliverDevices:(id)arg1 done:(_Bool)arg2 reset:(_Bool)arg3 query:(id)arg4;	// IMP=0x00000000001fd66f
- (id)initWithObjectType:(id)arg1 predicate:(id)arg2 resultsHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001fd5cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

