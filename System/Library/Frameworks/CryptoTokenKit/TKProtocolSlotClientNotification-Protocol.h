//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSXPCListenerEndpoint;

@protocol TKProtocolSlotClientNotification
- (void)setSlotWithName:(NSString *)arg1 endpoint:(NSXPCListenerEndpoint *)arg2 type:(NSString *)arg3 reply:(void (^)(void))arg4;
@end

