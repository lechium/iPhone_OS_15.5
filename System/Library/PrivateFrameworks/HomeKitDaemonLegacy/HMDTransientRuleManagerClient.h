//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDNetworkRouterFirewallRuleManagerClient-Protocol.h>

@class NSString;

@interface HMDTransientRuleManagerClient : NSObject <HMDNetworkRouterFirewallRuleManagerClient>
{
    NSString *_description;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000308040
@property(readonly, copy) NSString *description;
- (id)initWithDescription:(id)arg1;	// IMP=0x0000000000307f28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

