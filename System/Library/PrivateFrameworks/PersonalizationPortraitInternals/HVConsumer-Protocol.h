//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PersonalizationPortraitInternals/NSObject-Protocol.h>

@class HVConsumerReply, HVSpotlightDeletionRequest, NSString;

@protocol HVConsumer <NSObject>
- (HVConsumerReply *)deleteDataDerivedFromContentMatchingRequest:(HVSpotlightDeletionRequest *)arg1;
- (NSString *)consumerName;
@end
