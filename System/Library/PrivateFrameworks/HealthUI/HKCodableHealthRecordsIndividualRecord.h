//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HKCodableHealthRecordsIndividualRecord : PBCodable <NSCopying>
{
    double _dateData;	// 8 = 0x8
    NSMutableArray *_codes;	// 16 = 0x10
    NSString *_providerURI;	// 24 = 0x18
    NSString *_recordTitle;	// 32 = 0x20
    NSString *_recordUUID;	// 40 = 0x28
    NSString *_textualValue;	// 48 = 0x30
    NSString *_ucumUnitString;	// 56 = 0x38
    NSMutableArray *_valueWithRanges;	// 64 = 0x40
    CDStruct_4140be0d _has;	// 72 = 0x48
}

+ (Class)valueWithRangeType;	// IMP=0x00000000001120b7
+ (Class)codeType;	// IMP=0x0000000000111f89
- (void).cxx_destruct;	// IMP=0x0000000000113b99
@property(retain, nonatomic) NSString *recordUUID; // @synthesize recordUUID=_recordUUID;
@property(retain, nonatomic) NSString *providerURI; // @synthesize providerURI=_providerURI;
@property(retain, nonatomic) NSString *ucumUnitString; // @synthesize ucumUnitString=_ucumUnitString;
@property(retain, nonatomic) NSString *textualValue; // @synthesize textualValue=_textualValue;
@property(retain, nonatomic) NSMutableArray *valueWithRanges; // @synthesize valueWithRanges=_valueWithRanges;
@property(nonatomic) double dateData; // @synthesize dateData=_dateData;
@property(retain, nonatomic) NSString *recordTitle; // @synthesize recordTitle=_recordTitle;
@property(retain, nonatomic) NSMutableArray *codes; // @synthesize codes=_codes;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000113776
- (unsigned long long)hash;	// IMP=0x000000000011357e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000113374
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000112f60
- (void)copyTo:(id)arg1;	// IMP=0x0000000000112d35
- (void)writeTo:(id)arg1;	// IMP=0x0000000000112a61
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000112a54
- (id)dictionaryRepresentation;	// IMP=0x00000000001121cb
- (id)description;	// IMP=0x000000000011211c
@property(readonly, nonatomic) _Bool hasRecordUUID;
@property(readonly, nonatomic) _Bool hasProviderURI;
@property(readonly, nonatomic) _Bool hasUcumUnitString;
@property(readonly, nonatomic) _Bool hasTextualValue;
- (id)valueWithRangeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000011209a
- (unsigned long long)valueWithRangesCount;	// IMP=0x000000000011207d
- (void)addValueWithRange:(id)arg1;	// IMP=0x0000000000112013
- (void)clearValueWithRanges;	// IMP=0x0000000000111ff6
@property(nonatomic) _Bool hasDateData;
@property(readonly, nonatomic) _Bool hasRecordTitle;
- (id)codeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000111f6c
- (unsigned long long)codesCount;	// IMP=0x0000000000111f4f
- (void)addCode:(id)arg1;	// IMP=0x0000000000111ee5
- (void)clearCodes;	// IMP=0x0000000000111ec8

@end
