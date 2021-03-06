//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPPBFeedbackMetadata : PBCodable <NSCopying>
{
    unsigned long long _unixTimestampSec;	// 8 = 0x8
    NSString *_clientBundleId;	// 16 = 0x10
    NSString *_clientIdentifier;	// 24 = 0x18
    NSString *_mappingId;	// 32 = 0x20
    _Bool _isMapped;	// 40 = 0x28
    struct {
        unsigned int unixTimestampSec:1;
        unsigned int isMapped:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000000013c3b9
@property(nonatomic) _Bool isMapped; // @synthesize isMapped=_isMapped;
@property(nonatomic) unsigned long long unixTimestampSec; // @synthesize unixTimestampSec=_unixTimestampSec;
@property(retain, nonatomic) NSString *mappingId; // @synthesize mappingId=_mappingId;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) NSString *clientBundleId; // @synthesize clientBundleId=_clientBundleId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000013c268
- (unsigned long long)hash;	// IMP=0x000000000013c1ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013c051
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013bf4f
- (void)copyTo:(id)arg1;	// IMP=0x000000000013be8e
- (void)writeTo:(id)arg1;	// IMP=0x000000000013bdc4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000013bdb7
- (id)dictionaryRepresentation;	// IMP=0x000000000013bc49
- (id)description;	// IMP=0x000000000013bb9a
@property(nonatomic) _Bool hasIsMapped;
@property(nonatomic) _Bool hasUnixTimestampSec;
@property(readonly, nonatomic) _Bool hasMappingId;
@property(readonly, nonatomic) _Bool hasClientIdentifier;
@property(readonly, nonatomic) _Bool hasClientBundleId;

@end

