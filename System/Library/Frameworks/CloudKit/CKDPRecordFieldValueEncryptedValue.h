//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKit/NSCopying-Protocol.h>

@class CKDPDate, CKDPLocationCoordinate, CKDPRecordReference, NSMutableArray, NSString;

@interface CKDPRecordFieldValueEncryptedValue : PBCodable <NSCopying>
{
    struct {
        double *list;
        unsigned long long count;
        unsigned long long size;
    } _doubleListValues;	// 8 = 0x8
    struct {
        long long *list;
        unsigned long long count;
        unsigned long long size;
    } _signedListValues;	// 32 = 0x20
    double _doubleValue;	// 56 = 0x38
    long long _signedValue;	// 64 = 0x40
    NSMutableArray *_dateListValues;	// 72 = 0x48
    CKDPDate *_dateValue;	// 80 = 0x50
    NSMutableArray *_locationListValues;	// 88 = 0x58
    CKDPLocationCoordinate *_locationValue;	// 96 = 0x60
    CKDPRecordReference *_referenceValue;	// 104 = 0x68
    NSMutableArray *_stringListValues;	// 112 = 0x70
    NSString *_stringValue;	// 120 = 0x78
    struct {
        unsigned int doubleValue:1;
        unsigned int signedValue:1;
    } _has;	// 128 = 0x80
}

+ (Class)locationListValueType;	// IMP=0x00000000000089cc
+ (Class)stringListValueType;	// IMP=0x00000000000088fa
+ (Class)dateListValueType;	// IMP=0x0000000000008828
- (void).cxx_destruct;	// IMP=0x000000000000af92
@property(retain, nonatomic) NSMutableArray *locationListValues; // @synthesize locationListValues=_locationListValues;
@property(retain, nonatomic) NSMutableArray *stringListValues; // @synthesize stringListValues=_stringListValues;
@property(retain, nonatomic) NSMutableArray *dateListValues; // @synthesize dateListValues=_dateListValues;
@property(retain, nonatomic) CKDPRecordReference *referenceValue; // @synthesize referenceValue=_referenceValue;
@property(retain, nonatomic) CKDPLocationCoordinate *locationValue; // @synthesize locationValue=_locationValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) CKDPDate *dateValue; // @synthesize dateValue=_dateValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) long long signedValue; // @synthesize signedValue=_signedValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000a969
- (unsigned long long)hash;	// IMP=0x000000000000a736
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000a4c6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009f71
- (void)copyTo:(id)arg1;	// IMP=0x0000000000009bcc
- (void)writeTo:(id)arg1;	// IMP=0x00000000000097cd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000097c0
- (id)dictionaryRepresentation;	// IMP=0x0000000000008a8c
- (id)description;	// IMP=0x00000000000089dd
- (id)locationListValueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000089af
- (unsigned long long)locationListValuesCount;	// IMP=0x0000000000008992
- (void)addLocationListValue:(id)arg1;	// IMP=0x0000000000008928
- (void)clearLocationListValues;	// IMP=0x000000000000890b
- (id)stringListValueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000088dd
- (unsigned long long)stringListValuesCount;	// IMP=0x00000000000088c0
- (void)addStringListValue:(id)arg1;	// IMP=0x0000000000008856
- (void)clearStringListValues;	// IMP=0x0000000000008839
- (id)dateListValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000880b
- (unsigned long long)dateListValuesCount;	// IMP=0x00000000000087ee
- (void)addDateListValue:(id)arg1;	// IMP=0x0000000000008784
- (void)clearDateListValues;	// IMP=0x0000000000008767
- (void)setDoubleListValues:(double *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000008750
- (double)doubleListValueAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000008681
- (void)addDoubleListValue:(double)arg1;	// IMP=0x0000000000008670
- (void)clearDoubleListValues;	// IMP=0x000000000000865f
@property(readonly, nonatomic) double *doubleListValues;
@property(readonly, nonatomic) unsigned long long doubleListValuesCount;
- (void)setSignedListValues:(long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000008625
- (long long)signedListValueAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000008558
- (void)addSignedListValue:(long long)arg1;	// IMP=0x0000000000008544
- (void)clearSignedListValues;	// IMP=0x0000000000008533
@property(readonly, nonatomic) long long *signedListValues;
@property(readonly, nonatomic) unsigned long long signedListValuesCount;
@property(readonly, nonatomic) _Bool hasReferenceValue;
@property(readonly, nonatomic) _Bool hasLocationValue;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(readonly, nonatomic) _Bool hasDateValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasSignedValue;
- (void)dealloc;	// IMP=0x00000000000083dc

@end

