//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface CDASchemaCDAElectionAdvertisingStartStarted
{
    int _state;	// 8 = 0x8
    float _advertisementInterval;	// 12 = 0xc
    float _advertisementDelay;	// 16 = 0x10
    struct {
        unsigned int state:1;
        unsigned int advertisementInterval:1;
        unsigned int advertisementDelay:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) float advertisementDelay; // @synthesize advertisementDelay=_advertisementDelay;
@property(nonatomic) float advertisementInterval; // @synthesize advertisementInterval=_advertisementInterval;
@property(nonatomic) int state; // @synthesize state=_state;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000643aa
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000642ec
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000064012
- (unsigned long long)hash;	// IMP=0x0000000000063dd5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000063c8d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000063bf9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000063bec
- (void)deleteAdvertisementDelay;	// IMP=0x0000000000063bc1
@property(nonatomic) _Bool hasAdvertisementDelay;
- (void)deleteAdvertisementInterval;	// IMP=0x0000000000063b49
@property(nonatomic) _Bool hasAdvertisementInterval;
- (void)deleteState;	// IMP=0x0000000000063ad4
@property(nonatomic) _Bool hasState;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003336fa

@end
