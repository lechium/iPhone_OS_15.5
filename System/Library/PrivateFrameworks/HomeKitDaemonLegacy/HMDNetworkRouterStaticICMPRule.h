//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMDNetworkRouterLANRule-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class HMDNetworkRouterICMPTypeList, HMDNetworkRouterIPAddress, HMDNetworkRouterLANIdentifierList, HMDNetworkRouterRuleDirection, NSString;

@interface HMDNetworkRouterStaticICMPRule : NSObject <HMDNetworkRouterLANRule, NSCopying, HAPTLVProtocol>
{
    HMDNetworkRouterRuleDirection *_direction;	// 8 = 0x8
    HMDNetworkRouterLANIdentifierList *_lanIdentifierList;	// 16 = 0x10
    HMDNetworkRouterIPAddress *_destinationIPAddress;	// 24 = 0x18
    HMDNetworkRouterICMPTypeList *_icmpTypeList;	// 32 = 0x20
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000048cb65
+ (id)ruleFromFirewallRuleLAN:(id)arg1;	// IMP=0x0000000000420123
- (void).cxx_destruct;	// IMP=0x0000000000489f23
@property(retain, nonatomic) HMDNetworkRouterICMPTypeList *icmpTypeList; // @synthesize icmpTypeList=_icmpTypeList;
@property(retain, nonatomic) HMDNetworkRouterIPAddress *destinationIPAddress; // @synthesize destinationIPAddress=_destinationIPAddress;
@property(retain, nonatomic) HMDNetworkRouterLANIdentifierList *lanIdentifierList; // @synthesize lanIdentifierList=_lanIdentifierList;
@property(retain, nonatomic) HMDNetworkRouterRuleDirection *direction; // @synthesize direction=_direction;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004899ff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000048991c
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000489464
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000488efb
- (id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 destinationIPAddress:(id)arg3 icmpTypeList:(id)arg4;	// IMP=0x0000000000488e19
- (id)init;	// IMP=0x0000000000488dea
- (void)addTo:(id)arg1;	// IMP=0x000000000041e86a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
