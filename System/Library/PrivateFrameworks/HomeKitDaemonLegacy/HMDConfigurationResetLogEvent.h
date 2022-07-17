//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMDAWDLogEvent-Protocol.h>

@class NSString;

@interface HMDConfigurationResetLogEvent : HMMLogEvent <HMDAWDLogEvent>
{
}

+ (id)configurationReset;	// IMP=0x000000000068ec64
- (id)metricForAWD;	// IMP=0x00000000007b7807
- (unsigned int)AWDMessageType;	// IMP=0x00000000007b77fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
