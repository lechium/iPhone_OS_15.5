//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableSample, NSData, NSString;

@interface HDCodableECGSample : PBCodable <HDDecoding, NSCopying>
{
    double _averageHeartRateInBPM;	// 8 = 0x8
    long long _privateClassification;	// 16 = 0x10
    long long _symptomsStatus;	// 24 = 0x18
    HDCodableSample *_sample;	// 32 = 0x20
    NSData *_voltagePayload;	// 40 = 0x28
    struct {
        unsigned int averageHeartRateInBPM:1;
        unsigned int privateClassification:1;
        unsigned int symptomsStatus:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000045a020
@property(nonatomic) long long symptomsStatus; // @synthesize symptomsStatus=_symptomsStatus;
@property(retain, nonatomic) NSData *voltagePayload; // @synthesize voltagePayload=_voltagePayload;
@property(nonatomic) double averageHeartRateInBPM; // @synthesize averageHeartRateInBPM=_averageHeartRateInBPM;
@property(nonatomic) long long privateClassification; // @synthesize privateClassification=_privateClassification;
@property(retain, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000459ec2
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000459bc9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000459acb
- (void)copyTo:(id)arg1;	// IMP=0x0000000000459a02
- (void)writeTo:(id)arg1;	// IMP=0x0000000000459935
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000459928
- (id)dictionaryRepresentation;	// IMP=0x00000000004593ca
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasSymptomsStatus;
@property(readonly, nonatomic) _Bool hasVoltagePayload;
@property(nonatomic) _Bool hasAverageHeartRateInBPM;
@property(nonatomic) _Bool hasPrivateClassification;
@property(readonly, nonatomic) _Bool hasSample;
- (_Bool)applyToObject:(id)arg1;	// IMP=0x000000000038c78b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

