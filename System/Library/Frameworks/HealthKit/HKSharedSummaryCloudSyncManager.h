//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKSharedSummaryCloudSyncManagerClientInterface-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKProxyProvider, NSString;

@interface HKSharedSummaryCloudSyncManager : NSObject <_HKXPCExportable, HKSharedSummaryCloudSyncManagerClientInterface>
{
    HKProxyProvider *_proxyProvider;	// 8 = 0x8
}

+ (id)serverInterface;	// IMP=0x00000000000734d4
+ (id)clientInterface;	// IMP=0x00000000000734b4
+ (id)taskIdentifier;	// IMP=0x0000000000073018
- (void).cxx_destruct;	// IMP=0x00000000000734f4
- (id)remoteInterface;	// IMP=0x000000000007349a
- (id)exportedInterface;	// IMP=0x0000000000073480
- (void)connectionInvalidated;	// IMP=0x000000000007347a
- (void)pullWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000073306
- (void)pushWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000073192
- (void)fetchAccountInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007302a
- (id)initWithHealthStore:(id)arg1;	// IMP=0x0000000000072f15

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

