//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKQueryClientInterface-Protocol.h>

@class HKCodableQuantitySeries, HKCodableQuantitySeriesEnumerationResultCollection, NSUUID;

@protocol HKQuantitySeriesSampleQueryClientInterface <HKQueryClientInterface>
- (void)client_deliverEnumerationResults:(HKCodableQuantitySeriesEnumerationResultCollection *)arg1 isFinal:(_Bool)arg2 query:(NSUUID *)arg3;
- (void)client_deliverQuantitySeries:(HKCodableQuantitySeries *)arg1 seriesAnchor:(long long)arg2 isFinal:(_Bool)arg3 query:(NSUUID *)arg4;
@end

