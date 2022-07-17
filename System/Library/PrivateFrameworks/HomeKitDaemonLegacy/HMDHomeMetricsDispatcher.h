//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSString, NSUUID;
@protocol HMMLogEventSubmitting;

@interface HMDHomeMetricsDispatcher : HMFObject <HMFLogging>
{
    NSUUID *_identifier;	// 8 = 0x8
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0000000000088e5a
- (void).cxx_destruct;	// IMP=0x0000000000088e09
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)logIdentifier;	// IMP=0x0000000000088d8d
- (void)submitMigrationEventMetricsForModel:(id)arg1 reason:(id)arg2;	// IMP=0x0000000000088c13
- (void)submitMigrationEventMetricsForModels:(id)arg1 reason:(id)arg2;	// IMP=0x0000000000088b7c
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2;	// IMP=0x0000000000088ada

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
