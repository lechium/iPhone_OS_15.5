//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableSample, NSData, NSString;

@interface HDCodableFitnessFriendAchievement : PBCodable <HDDecoding, NSCopying>
{
    double _completedDate;	// 8 = 0x8
    double _doubleValue;	// 16 = 0x10
    long long _intValue;	// 24 = 0x18
    NSData *_friendUUID;	// 32 = 0x20
    HDCodableSample *_sample;	// 40 = 0x28
    NSString *_templateUniqueName;	// 48 = 0x30
    struct {
        unsigned int completedDate:1;
        unsigned int doubleValue:1;
        unsigned int intValue:1;
    } _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000023255
@property(retain, nonatomic) NSString *templateUniqueName; // @synthesize templateUniqueName=_templateUniqueName;
@property(nonatomic) long long intValue; // @synthesize intValue=_intValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) double completedDate; // @synthesize completedDate=_completedDate;
@property(retain, nonatomic) NSData *friendUUID; // @synthesize friendUUID=_friendUUID;
@property(retain, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000069ad92
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000069a974
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000069a849
- (void)copyTo:(id)arg1;	// IMP=0x000000000069a765
- (void)writeTo:(id)arg1;	// IMP=0x0000000000023169
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000069a758
- (id)dictionaryRepresentation;	// IMP=0x000000000069a568
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasTemplateUniqueName;
@property(nonatomic) _Bool hasIntValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasCompletedDate;
@property(readonly, nonatomic) _Bool hasFriendUUID;
@property(readonly, nonatomic) _Bool hasSample;
- (_Bool)applyToObject:(id)arg1;	// IMP=0x000000000002e026

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

