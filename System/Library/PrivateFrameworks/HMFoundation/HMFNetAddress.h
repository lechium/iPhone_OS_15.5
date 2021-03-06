//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFNetAddressInternal, NSString;

@interface HMFNetAddress
{
    HMFNetAddressInternal *_internal;	// 8 = 0x8
}

+ (id)localAddress;	// IMP=0x0000000000042cb6
- (void).cxx_destruct;	// IMP=0x00000000000433cb
@property(readonly, nonatomic) HMFNetAddressInternal *internal; // @synthesize internal=_internal;
- (id)dataUsingEncoding:(unsigned long long)arg1;	// IMP=0x000000000004335b
@property(readonly, copy, nonatomic) NSString *addressString;
@property(readonly, nonatomic) unsigned long long addressFamily;
- (id)attributeDescriptions;	// IMP=0x00000000000431fb
- (id)description;	// IMP=0x00000000000431e9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004312b
- (unsigned long long)hash;	// IMP=0x00000000000430e7
- (id)initWithHostname:(id)arg1;	// IMP=0x0000000000042f82
- (id)initWithSocketAddress:(const struct sockaddr *)arg1;	// IMP=0x0000000000042e02
- (id)init;	// IMP=0x0000000000042d5a

@end

