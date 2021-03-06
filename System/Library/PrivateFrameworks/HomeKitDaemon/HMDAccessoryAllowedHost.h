//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDNetworkRouterFirewallRuleWAN, NSSet, NSString;

@interface HMDAccessoryAllowedHost : HMFObject <NSSecureCoding>
{
    HMDNetworkRouterFirewallRuleWAN *_cachedWANRule;	// 8 = 0x8
    NSString *_jsonWANRule;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000066b407
+ (id)allowedHostsFromFirewallRuleConfiguration:(id)arg1;	// IMP=0x000000000066b174
+ (id)allowedHostsFromJSONFirewallWANRules:(id)arg1;	// IMP=0x000000000066b123
+ (id)allowedHostForFullWANAccess;	// IMP=0x000000000066b0f3
- (void).cxx_destruct;	// IMP=0x000000000066abed
@property(readonly) NSString *jsonWANRule; // @synthesize jsonWANRule=_jsonWANRule;
- (id)attributeDescriptions;	// IMP=0x000000000066aa41
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000066a964
- (unsigned long long)hash;	// IMP=0x000000000066a920
- (void)_encodeForSPIEntitledXPCTransportWithCoder:(id)arg1;	// IMP=0x000000000066a557
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000066a3f4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000066a354
@property(readonly) unsigned long long purpose;
@property(readonly) NSSet *addresses;
@property(readonly) NSString *name;
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleWAN *wanRule;
- (id)initWithWANRule:(id)arg1;	// IMP=0x000000000066a13e
- (id)initWithJSONFirewallWANRule:(id)arg1;	// IMP=0x000000000066a0d2

@end

