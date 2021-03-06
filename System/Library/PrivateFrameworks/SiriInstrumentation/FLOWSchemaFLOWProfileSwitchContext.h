//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface FLOWSchemaFLOWProfileSwitchContext
{
    int _profileSwitchMethod;	// 8 = 0x8
    int _profileSwitchByNameType;	// 12 = 0xc
    int _profileSwitchOutcome;	// 16 = 0x10
    int _profileSwitchFailureReason;	// 20 = 0x14
    unsigned int _profileSwitchDurationInMs;	// 24 = 0x18
    struct {
        unsigned int profileSwitchMethod:1;
        unsigned int profileSwitchByNameType:1;
        unsigned int profileSwitchOutcome:1;
        unsigned int profileSwitchFailureReason:1;
        unsigned int profileSwitchDurationInMs:1;
    } _has;	// 28 = 0x1c
}

@property(nonatomic) unsigned int profileSwitchDurationInMs; // @synthesize profileSwitchDurationInMs=_profileSwitchDurationInMs;
@property(nonatomic) int profileSwitchFailureReason; // @synthesize profileSwitchFailureReason=_profileSwitchFailureReason;
@property(nonatomic) int profileSwitchOutcome; // @synthesize profileSwitchOutcome=_profileSwitchOutcome;
@property(nonatomic) int profileSwitchByNameType; // @synthesize profileSwitchByNameType=_profileSwitchByNameType;
@property(nonatomic) int profileSwitchMethod; // @synthesize profileSwitchMethod=_profileSwitchMethod;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000015e526
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000015e468
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000015e141
- (unsigned long long)hash;	// IMP=0x000000000015e0a7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015df09
- (void)writeTo:(id)arg1;	// IMP=0x000000000015de3b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015de2e
- (void)deleteProfileSwitchDurationInMs;	// IMP=0x000000000015de04
@property(nonatomic) _Bool hasProfileSwitchDurationInMs;
- (void)deleteProfileSwitchFailureReason;	// IMP=0x000000000015dd8f
@property(nonatomic) _Bool hasProfileSwitchFailureReason;
- (void)deleteProfileSwitchOutcome;	// IMP=0x000000000015dd1a
@property(nonatomic) _Bool hasProfileSwitchOutcome;
- (void)deleteProfileSwitchByNameType;	// IMP=0x000000000015dca5
@property(nonatomic) _Bool hasProfileSwitchByNameType;
- (void)deleteProfileSwitchMethod;	// IMP=0x000000000015dc32
@property(nonatomic) _Bool hasProfileSwitchMethod;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034454c

@end

