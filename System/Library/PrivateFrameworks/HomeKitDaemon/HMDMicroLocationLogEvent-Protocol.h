//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDMicroLocationLogEventObserver, NSDictionary;

@protocol HMDMicroLocationLogEvent <NSObject>
- (unsigned long long)microLocationScanTriggerTypeForLogEventObserver:(HMDMicroLocationLogEventObserver *)arg1;
- (NSDictionary *)microLocationMetadataForLogEventObserver:(HMDMicroLocationLogEventObserver *)arg1;
- (_Bool)shouldTriggerMicroLocationLocalizationScanForLogEventObserver:(HMDMicroLocationLogEventObserver *)arg1;
- (_Bool)shouldTriggerMicroLocationRecordingScanForLogEventObserver:(HMDMicroLocationLogEventObserver *)arg1;
@end

