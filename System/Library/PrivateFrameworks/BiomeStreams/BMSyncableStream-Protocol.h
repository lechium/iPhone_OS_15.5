//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BMPublishers, NSArray;

@protocol BMSyncableStream
- (NSArray *)remoteDevices;
- (BMPublishers *)publishersForRemoteDevices:(NSArray *)arg1 startTime:(double)arg2 includeLocal:(_Bool)arg3 pipeline:(id <BPSPublisher> (^)(BMBookmarkablePublisher *))arg4;
@end
