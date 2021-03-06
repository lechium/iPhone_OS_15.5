//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol SRSensorKitServiceServerPruning
- (void)removeAllSamplesForAllSensorsWithReply:(void (^)(NSError *))arg1;
- (void)removeAllSamplesForCurrentSensorWithReply:(void (^)(NSError *))arg1;
- (void)requestFileHandleForPruningAfterSegment:(NSString *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)requestFileHandleForPruningSample:(double)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)startPruningForSensor:(NSString *)arg1 deviceId:(NSString *)arg2;
@end

