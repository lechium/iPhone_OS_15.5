//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol ASDAppMetricsServiceProtocol
- (void)resetMetricsEventsForType:(long long)arg1 withReplyHandler:(void (^)(_Bool, NSError *))arg2;
- (void)recordMetricsEventsForType:(long long)arg1 withReplyHandler:(void (^)(_Bool, NSError *))arg2;
- (void)postMetricsEventsForType:(long long)arg1 withReplyHandler:(void (^)(_Bool, NSError *))arg2;
- (void)getMetricsEventsForType:(long long)arg1 withReplyHandler:(void (^)(NSArray *, NSError *))arg2;
@end

