//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKCodableMetadataDictionary, HKCodableSummarySupplementaryValue, NSData, NSString;

@interface HKCodableSummaryCurrentValue : PBCodable <NSCopying>
{
    long long _latestSupportedVersion;	// 8 = 0x8
    long long _minimumSupportedVersion;	// 16 = 0x10
    NSString *_kindRawValue;	// 24 = 0x18
    HKCodableMetadataDictionary *_metadataDictionary;	// 32 = 0x20
    NSData *_queryConfigurationData;	// 40 = 0x28
    HKCodableSummarySupplementaryValue *_supplementaryValue;	// 48 = 0x30
    NSData *_valueData;	// 56 = 0x38
    CDStruct_514b95f0 _has;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001610fc
@property(nonatomic) long long minimumSupportedVersion; // @synthesize minimumSupportedVersion=_minimumSupportedVersion;
@property(nonatomic) long long latestSupportedVersion; // @synthesize latestSupportedVersion=_latestSupportedVersion;
@property(retain, nonatomic) HKCodableMetadataDictionary *metadataDictionary; // @synthesize metadataDictionary=_metadataDictionary;
@property(retain, nonatomic) NSData *queryConfigurationData; // @synthesize queryConfigurationData=_queryConfigurationData;
@property(retain, nonatomic) HKCodableSummarySupplementaryValue *supplementaryValue; // @synthesize supplementaryValue=_supplementaryValue;
@property(retain, nonatomic) NSString *kindRawValue; // @synthesize kindRawValue=_kindRawValue;
@property(retain, nonatomic) NSData *valueData; // @synthesize valueData=_valueData;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000160ef1
- (unsigned long long)hash;	// IMP=0x0000000000160e05
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000160c4e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000160af7
- (void)copyTo:(id)arg1;	// IMP=0x00000000001609f5
- (void)writeTo:(id)arg1;	// IMP=0x00000000001608f1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001608e4
- (id)dictionaryRepresentation;	// IMP=0x000000000016031c
- (id)description;	// IMP=0x000000000016026d
@property(nonatomic) _Bool hasMinimumSupportedVersion;
@property(nonatomic) _Bool hasLatestSupportedVersion;
@property(readonly, nonatomic) _Bool hasMetadataDictionary;
@property(readonly, nonatomic) _Bool hasQueryConfigurationData;
@property(readonly, nonatomic) _Bool hasSupplementaryValue;
@property(readonly, nonatomic) _Bool hasKindRawValue;
@property(readonly, nonatomic) _Bool hasValueData;

@end

