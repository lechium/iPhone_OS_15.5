//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMDNetworkRouterHomeKitOnlyFirewallConfiguration
{
    _Bool _isFiltered;	// 8 = 0x8
    _Bool _useFallbackForRTP;	// 9 = 0x9
    _Bool _useFallbackForHDS;	// 10 = 0xa
}

+ (id)fallbackConfigurationForRuleset:(id)arg1;	// IMP=0x000000000060f881
+ (id)fallbackIdentifier;	// IMP=0x000000000060f812
- (id)description;	// IMP=0x000000000060f409
- (id)initWithAccessory:(id)arg1 sourceConfiguration:(id)arg2;	// IMP=0x000000000060ed64

@end
