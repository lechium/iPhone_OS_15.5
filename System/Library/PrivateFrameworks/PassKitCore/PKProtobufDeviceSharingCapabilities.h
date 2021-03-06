//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, NSString;

@interface PKProtobufDeviceSharingCapabilities : PBCodable <NSCopying>
{
    NSString *_altDSID;	// 8 = 0x8
    NSString *_deviceRegion;	// 16 = 0x10
    NSData *_fromDeviceVersion;	// 24 = 0x18
    NSString *_handle;	// 32 = 0x20
    unsigned int _version;	// 40 = 0x28
    _Bool _supportsManatee;	// 44 = 0x2c
    struct {
        unsigned int supportsManatee:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001ef840
@property(retain, nonatomic) NSData *fromDeviceVersion; // @synthesize fromDeviceVersion=_fromDeviceVersion;
@property(nonatomic) _Bool supportsManatee; // @synthesize supportsManatee=_supportsManatee;
@property(retain, nonatomic) NSString *deviceRegion; // @synthesize deviceRegion=_deviceRegion;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001ef6ab
- (unsigned long long)hash;	// IMP=0x00000000001ef5df
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ef466
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ef349
- (void)copyTo:(id)arg1;	// IMP=0x00000000001ef278
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ef1a5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001ef198
- (id)dictionaryRepresentation;	// IMP=0x00000000001eed14
- (id)description;	// IMP=0x00000000001eec65
@property(readonly, nonatomic) _Bool hasFromDeviceVersion;
@property(nonatomic) _Bool hasSupportsManatee;
@property(readonly, nonatomic) _Bool hasDeviceRegion;
@property(readonly, nonatomic) _Bool hasAltDSID;
@property(readonly, nonatomic) _Bool hasHandle;

@end

