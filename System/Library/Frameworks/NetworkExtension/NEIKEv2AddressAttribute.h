//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSCopying-Protocol.h>

@class NWAddressEndpoint;

@interface NEIKEv2AddressAttribute <NSCopying>
{
    NWAddressEndpoint *_address;	// 16 = 0x10
    unsigned long long _customType;	// 24 = 0x18
}

+ (id)copyTypeDescription;	// IMP=0x0000000000097110
- (void).cxx_destruct;	// IMP=0x0000000000097590
@property(nonatomic) unsigned long long customType; // @synthesize customType=_customType;
@property(retain) NWAddressEndpoint *address; // @synthesize address=_address;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009747e
- (id)description;	// IMP=0x0000000000097465
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000972f6
- (unsigned long long)attributeType;	// IMP=0x00000000000972e4
- (id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 addressValue:(id)arg3;	// IMP=0x00000000000971ea
- (id)initWithAddress:(id)arg1;	// IMP=0x000000000009711d

@end
