//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCoreAnalyticsClient-Protocol.h>

@interface AVTCoreAnalyticsClient : NSObject <AVTCoreAnalyticsClient>
{
}

- (void)ADClientPushValueForDistributionKey:(id)arg1:(double)arg2;	// IMP=0x000000000009d108
- (void)ADClientAddValueForScalarKey:(id)arg1:(long long)arg2;	// IMP=0x000000000009d102
- (void)ADClientSetValueForScalarKey:(id)arg1:(long long)arg2;	// IMP=0x000000000009d0fc
- (void)sendEventForKey:(id)arg1 payload:(id)arg2;	// IMP=0x000000000009d06f

@end
