//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSEndpointerMetrics, NSArray, NSDictionary;

@protocol CSEndpointerXPCServiceDelegate
- (void)didDetectHardEndpointAtTime:(double)arg1 withTotalAudioRecorded:(double)arg2 endpointBufferHostTime:(unsigned long long)arg3 featuresAtEndpoint:(NSArray *)arg4 endpointerType:(long long)arg5 serverFeatureLatencyDistribution:(NSDictionary *)arg6 additionalMetrics:(NSDictionary *)arg7;
- (void)didDetectHardEndpointAtTime:(double)arg1 withMetrics:(CSEndpointerMetrics *)arg2;
- (void)didDetectStartpointAtTime:(double)arg1;
@end

