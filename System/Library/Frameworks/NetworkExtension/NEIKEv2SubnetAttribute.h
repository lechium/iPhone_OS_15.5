//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSCopying-Protocol.h>

@class NWAddressEndpoint;

@interface NEIKEv2SubnetAttribute <NSCopying>
{
    unsigned char _prefix;	// 16 = 0x10
    unsigned int _ipv4SubnetMask;	// 20 = 0x14
    NWAddressEndpoint *_address;	// 24 = 0x18
    unsigned long long _customType;	// 32 = 0x20
}

+ (id)copyTypeDescription;	// IMP=0x00000000000975a3
- (void).cxx_destruct;	// IMP=0x0000000000097d8b
@property(nonatomic) unsigned long long customType; // @synthesize customType=_customType;
@property unsigned int ipv4SubnetMask; // @synthesize ipv4SubnetMask=_ipv4SubnetMask;
@property unsigned char prefix; // @synthesize prefix=_prefix;
@property(retain) NWAddressEndpoint *address; // @synthesize address=_address;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000097c25
@property(readonly) NWAddressEndpoint *subnetMaskAddress;
- (id)description;	// IMP=0x0000000000097b56
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000009799f
- (unsigned long long)attributeType;	// IMP=0x000000000009798d
- (id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 addressValue:(id)arg3 ipv4SubnetMask:(unsigned int)arg4;	// IMP=0x000000000009790d
- (id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 addressValue:(id)arg3 prefix:(unsigned char)arg4;	// IMP=0x00000000000977fe
- (id)initWithAddress:(id)arg1 ipv4SubnetMask:(unsigned int)arg2;	// IMP=0x0000000000097695
- (id)initWithAddress:(id)arg1 prefix:(unsigned char)arg2;	// IMP=0x00000000000975b0

@end

