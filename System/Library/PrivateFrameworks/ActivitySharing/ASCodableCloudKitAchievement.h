//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class ASCodableCloudKitSample, NSString;

@interface ASCodableCloudKitAchievement : PBCodable <NSCopying>
{
    double _completedDate;	// 8 = 0x8
    double _doubleValue;	// 16 = 0x10
    long long _intValue;	// 24 = 0x18
    long long _workoutActivityType;	// 32 = 0x20
    NSString *_definitionIdentifier;	// 40 = 0x28
    ASCodableCloudKitSample *_sample;	// 48 = 0x30
    NSString *_templateUniqueName;	// 56 = 0x38
    struct {
        unsigned int completedDate:1;
        unsigned int doubleValue:1;
        unsigned int intValue:1;
        unsigned int workoutActivityType:1;
    } _has;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000003fa93
@property(retain, nonatomic) NSString *templateUniqueName; // @synthesize templateUniqueName=_templateUniqueName;
@property(retain, nonatomic) NSString *definitionIdentifier; // @synthesize definitionIdentifier=_definitionIdentifier;
@property(nonatomic) long long workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;
@property(nonatomic) long long intValue; // @synthesize intValue=_intValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) double completedDate; // @synthesize completedDate=_completedDate;
@property(retain, nonatomic) ASCodableCloudKitSample *sample; // @synthesize sample=_sample;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003f8c7
- (unsigned long long)hash;	// IMP=0x000000000003f5fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003f445
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003f301
- (void)copyTo:(id)arg1;	// IMP=0x000000000003f201
- (void)writeTo:(id)arg1;	// IMP=0x000000000003f0f5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003f0e8
- (id)dictionaryRepresentation;	// IMP=0x000000000003ea6c
- (id)description;	// IMP=0x000000000003e9bd
@property(readonly, nonatomic) _Bool hasTemplateUniqueName;
@property(readonly, nonatomic) _Bool hasDefinitionIdentifier;
@property(nonatomic) _Bool hasWorkoutActivityType;
@property(nonatomic) _Bool hasIntValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasCompletedDate;
@property(readonly, nonatomic) _Bool hasSample;

@end
