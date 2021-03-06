//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SecureBackupTermsInfo : PBCodable
{
    NSString *_altDSID;	// 8 = 0x8
    NSString *_countryCode;	// 16 = 0x10
    NSString *_icloudVersion;	// 24 = 0x18
    NSString *_metadata;	// 32 = 0x20
    NSString *_version;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000011a91
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *icloudVersion; // @synthesize icloudVersion=_icloudVersion;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000011915
- (unsigned long long)hash;	// IMP=0x0010000000011872
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000011712
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000115fa
- (void)copyTo:(id)arg1;	// IMP=0x0010000000011537
- (void)writeTo:(id)arg1;	// IMP=0x0010000000011483
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000011476
- (id)dictionaryRepresentation;	// IMP=0x00100000000111f7
- (id)description;	// IMP=0x0010000000011148
@property(readonly, nonatomic) _Bool hasAltDSID;
@property(readonly, nonatomic) _Bool hasMetadata;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(readonly, nonatomic) _Bool hasIcloudVersion;
@property(readonly, nonatomic) _Bool hasVersion;

@end

