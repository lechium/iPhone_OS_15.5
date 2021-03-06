//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDNetworkRouterFirewallRuleWANAddressRange, NSArray;

@interface HMDNetworkRouterFirewallRuleWANSubject : HMFObject
{
    NSArray *_hostnames;	// 8 = 0x8
    NSArray *_addresses;	// 16 = 0x10
    HMDNetworkRouterFirewallRuleWANAddressRange *_addressRange;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000008b609e
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleWANAddressRange *addressRange; // @synthesize addressRange=_addressRange;
@property(readonly, nonatomic) NSArray *addresses; // @synthesize addresses=_addresses;
@property(readonly, nonatomic) NSArray *hostnames; // @synthesize hostnames=_hostnames;
- (id)prettyJSONDictionary;	// IMP=0x00000000008b5e6c
- (id)attributeDescriptions;	// IMP=0x00000000008b5cf6
- (id)initWithHostnames:(id)arg1 addresses:(id)arg2 addressRange:(id)arg3;	// IMP=0x00000000008b5c1e

@end

