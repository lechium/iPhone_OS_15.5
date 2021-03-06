//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface HKHealthWrapCodablePayloadHeader : PBCodable <NSCopying>
{
    long long _endDate;	// 8 = 0x8
    long long _startDate;	// 16 = 0x10
    NSData *_applicationData;	// 24 = 0x18
    NSString *_channel;	// 32 = 0x20
    NSMutableArray *_keyValuePairs;	// 40 = 0x28
    NSString *_payloadIdentifier;	// 48 = 0x30
    NSString *_payloadType;	// 56 = 0x38
    NSData *_subjectUUID;	// 64 = 0x40
    struct {
        unsigned int endDate:1;
        unsigned int startDate:1;
    } _has;	// 72 = 0x48
}

+ (Class)keyValuePairsType;	// IMP=0x000000000019d14e
- (void).cxx_destruct;	// IMP=0x000000000019e658
@property(retain, nonatomic) NSMutableArray *keyValuePairs; // @synthesize keyValuePairs=_keyValuePairs;
@property(retain, nonatomic) NSData *applicationData; // @synthesize applicationData=_applicationData;
@property(retain, nonatomic) NSString *payloadIdentifier; // @synthesize payloadIdentifier=_payloadIdentifier;
@property(nonatomic) long long endDate; // @synthesize endDate=_endDate;
@property(nonatomic) long long startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSData *subjectUUID; // @synthesize subjectUUID=_subjectUUID;
@property(retain, nonatomic) NSString *payloadType; // @synthesize payloadType=_payloadType;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000019e322
- (unsigned long long)hash;	// IMP=0x000000000019e20c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019e013
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019dd3d
- (void)copyTo:(id)arg1;	// IMP=0x000000000019db94
- (void)writeTo:(id)arg1;	// IMP=0x000000000019d98d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000019d980
- (id)dictionaryRepresentation;	// IMP=0x000000000019d20e
- (id)description;	// IMP=0x000000000019d15f
- (id)keyValuePairsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000019d131
- (unsigned long long)keyValuePairsCount;	// IMP=0x000000000019d114
- (void)addKeyValuePairs:(id)arg1;	// IMP=0x000000000019d0aa
- (void)clearKeyValuePairs;	// IMP=0x000000000019d08d
@property(readonly, nonatomic) _Bool hasApplicationData;
@property(readonly, nonatomic) _Bool hasPayloadIdentifier;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasStartDate;
@property(readonly, nonatomic) _Bool hasSubjectUUID;
@property(readonly, nonatomic) _Bool hasPayloadType;
@property(readonly, nonatomic) _Bool hasChannel;

@end

