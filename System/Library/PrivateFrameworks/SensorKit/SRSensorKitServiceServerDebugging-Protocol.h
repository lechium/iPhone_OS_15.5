//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SRSensorKitServiceServerDebugging
- (void)dumpDefaultsWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)dumpConfigurationsWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)listDatastoreWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)dumpStateCacheWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)dumpClientsWithReply:(void (^)(NSDictionary *, NSError *))arg1;
@end
