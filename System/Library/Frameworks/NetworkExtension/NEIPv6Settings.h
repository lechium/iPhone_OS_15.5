//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationLegacySupport-Protocol.h>
#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface NEIPv6Settings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    NSArray *_addresses;	// 8 = 0x8
    NSArray *_networkPrefixLengths;	// 16 = 0x10
    NSArray *_includedRoutes;	// 24 = 0x18
    NSArray *_excludedRoutes;	// 32 = 0x20
    long long _configMethod;	// 40 = 0x28
    NSString *_router;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000135b0f
- (void).cxx_destruct;	// IMP=0x0000000000137c72
@property(copy) NSString *router; // @synthesize router=_router;
@property long long configMethod; // @synthesize configMethod=_configMethod;
@property(copy) NSArray *excludedRoutes; // @synthesize excludedRoutes=_excludedRoutes;
@property(copy) NSArray *includedRoutes; // @synthesize includedRoutes=_includedRoutes;
@property(readonly) NSArray *networkPrefixLengths; // @synthesize networkPrefixLengths=_networkPrefixLengths;
@property(readonly) NSArray *addresses; // @synthesize addresses=_addresses;
- (_Bool)hasDefaultRoute;	// IMP=0x0000000000137a98
- (id)initFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001371b4
- (id)copyLegacyDictionary;	// IMP=0x0000000000136bed
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000013698f
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x000000000013637b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000136236
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001360c7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000135c14
- (id)initWithAddresses:(id)arg1 networkPrefixLengths:(id)arg2;	// IMP=0x0000000000135b53
- (id)init;	// IMP=0x0000000000135b17

@end

