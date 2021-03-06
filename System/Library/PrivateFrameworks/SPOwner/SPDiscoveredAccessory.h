//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSData, NSUUID, SPDiscoveredAccessoryMetadata, SPDiscoveredAccessoryProductInformation;

@interface SPDiscoveredAccessory : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isBatteryTooLow;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    NSData *_macAddress;	// 24 = 0x18
    SPDiscoveredAccessoryMetadata *_discoveredMetadata;	// 32 = 0x20
    SPDiscoveredAccessoryProductInformation *_productInformation;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000326f7
- (void).cxx_destruct;	// IMP=0x0000000000032d0c
@property(nonatomic) _Bool isBatteryTooLow; // @synthesize isBatteryTooLow=_isBatteryTooLow;
@property(copy, nonatomic) SPDiscoveredAccessoryProductInformation *productInformation; // @synthesize productInformation=_productInformation;
@property(copy, nonatomic) SPDiscoveredAccessoryMetadata *discoveredMetadata; // @synthesize discoveredMetadata=_discoveredMetadata;
@property(copy, nonatomic) NSData *macAddress; // @synthesize macAddress=_macAddress;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000032b78
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000032a48
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003299a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000032816
- (unsigned long long)hash;	// IMP=0x00000000000327d2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000326ff

@end

