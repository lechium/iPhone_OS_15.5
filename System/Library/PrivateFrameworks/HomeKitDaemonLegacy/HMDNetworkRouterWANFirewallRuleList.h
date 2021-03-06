//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterWANFirewallRuleList : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_portRules;	// 8 = 0x8
    NSMutableArray *_icmpRules;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000495e02
- (void).cxx_destruct;	// IMP=0x00000000004932e0
@property(retain, nonatomic) NSMutableArray *icmpRules; // @synthesize icmpRules=_icmpRules;
@property(retain, nonatomic) NSMutableArray *portRules; // @synthesize portRules=_portRules;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000492ff2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000492f64
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000492a52
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004925d4
- (id)initWithPortRules:(id)arg1 icmpRules:(id)arg2;	// IMP=0x000000000049253b
- (id)init;	// IMP=0x000000000049250c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

