//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject-Protocol.h>
#import <HMFoundation/NSCopying-Protocol.h>
#import <HMFoundation/NSSecureCoding-Protocol.h>

@class HMFMACAddress, NSArray, NSString;

@interface HMFWiFiNetworkInfo <HMFObject, NSCopying, NSSecureCoding>
{
    HMFMACAddress *_MACAddress;	// 8 = 0x8
    NSString *_SSID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002bec2
- (void).cxx_destruct;	// IMP=0x000000000002c069
@property(readonly, copy) NSString *SSID; // @synthesize SSID=_SSID;
@property(readonly, copy) HMFMACAddress *MACAddress; // @synthesize MACAddress=_MACAddress;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002bf8f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002beca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002beb7
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToNetworkInfo:(id)arg1;	// IMP=0x000000000002bd42
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002bce5
@property(readonly, copy) NSString *propertyDescription;
- (id)initWithMACAddress:(id)arg1 SSID:(id)arg2;	// IMP=0x000000000002babd

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

