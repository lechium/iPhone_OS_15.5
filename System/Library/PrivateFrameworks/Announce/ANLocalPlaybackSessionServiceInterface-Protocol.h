//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Announce/ANAPlaybackSessionServiceInterface-Protocol.h>

@class ANPlaybackCommand, NSUUID;

@protocol ANLocalPlaybackSessionServiceInterface <ANAPlaybackSessionServiceInterface>
- (void)sendPlaybackCommand:(ANPlaybackCommand *)arg1 forEndpointID:(NSUUID *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end
