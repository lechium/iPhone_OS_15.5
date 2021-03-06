//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CARSessionRequestHost : NSObject <NSSecureCoding>
{
    _Bool _wiredCarPlaySimulator;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
    NSArray *_wiredIPv6Addresses;	// 24 = 0x18
    NSArray *_wirelessIPv6Addresses;	// 32 = 0x20
    long long _port;	// 40 = 0x28
    NSString *_carplayWiFiUUID;	// 48 = 0x30
    NSString *_deviceIdentifier;	// 56 = 0x38
    NSString *_publicKey;	// 64 = 0x40
    NSString *_sourceVersion;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000486e
- (void).cxx_destruct;	// IMP=0x0000000000005770
@property(nonatomic, getter=isWiredCarPlaySimulator) _Bool wiredCarPlaySimulator; // @synthesize wiredCarPlaySimulator=_wiredCarPlaySimulator;
@property(copy, nonatomic) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(copy, nonatomic) NSString *publicKey; // @synthesize publicKey=_publicKey;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy, nonatomic) NSString *carplayWiFiUUID; // @synthesize carplayWiFiUUID=_carplayWiFiUUID;
@property(nonatomic) long long port; // @synthesize port=_port;
@property(copy, nonatomic) NSArray *wirelessIPv6Addresses; // @synthesize wirelessIPv6Addresses=_wirelessIPv6Addresses;
@property(copy, nonatomic) NSArray *wiredIPv6Addresses; // @synthesize wiredIPv6Addresses=_wiredIPv6Addresses;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)description;	// IMP=0x0000000000005587
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000521c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004e13
- (id)initWithHostProperties:(id)arg1;	// IMP=0x0000000000004876

@end

