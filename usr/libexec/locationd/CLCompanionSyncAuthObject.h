//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface CLCompanionSyncAuthObject : PBCodable
{
    unsigned int _authMask;	// 8 = 0x8
    NSMutableArray *_interestZones;	// 16 = 0x10
    NSString *_clientKey;	// 24 = 0x18
    unsigned int _correctiveCompensationMask;	// 32 = 0x20
    int _notification;	// 36 = 0x24
    int _operationType;	// 40 = 0x28
    NSMutableArray *_vectorClocks;	// 48 = 0x30
    _Bool _clearClient;	// 56 = 0x38
    struct {
        unsigned int authMask:1;
        unsigned int correctiveCompensationMask:1;
        unsigned int notification:1;
        unsigned int clearClient:1;
    } _has;	// 60 = 0x3c
}

+ (Class)interestZonesType;	// IMP=0x004000000053f30c
+ (Class)vectorClocksType;	// IMP=0x001000000053f257
@property(retain, nonatomic) NSMutableArray *interestZones; // @synthesize interestZones=_interestZones;
@property(retain, nonatomic) NSMutableArray *vectorClocks; // @synthesize vectorClocks=_vectorClocks;
@property(nonatomic) int operationType; // @synthesize operationType=_operationType;
@property(nonatomic) unsigned int correctiveCompensationMask; // @synthesize correctiveCompensationMask=_correctiveCompensationMask;
@property(retain, nonatomic) NSString *clientKey; // @synthesize clientKey=_clientKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000540909
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000054063d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000005402bb
- (void)copyTo:(id)arg1;	// IMP=0x00100000005400f6
- (void)writeTo:(id)arg1;	// IMP=0x001000000053fe59
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000053fe4c
- (id)dictionaryRepresentation;	// IMP=0x001000000053f394
@property(readonly, copy) NSString *description;
- (id)interestZonesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000053f2ef
- (unsigned long long);	// IMP=0x001000000053f2d2
- (void)addInterestZones:(id)arg1;	// IMP=0x001000000053f285
- (void)clearInterestZones;	// IMP=0x001000000053f268
- (id)vectorClocksAtIndex:(unsigned long long)arg1;	// IMP=0x001000000053f23a
- (unsigned long long)vectorClocksCount;	// IMP=0x001000000053f21d
- (void)addVectorClocks:(id)arg1;	// IMP=0x001000000053f1d0
- (void)clearVectorClocks;	// IMP=0x001000000053f1b3
- (int)StringAsOperationType:(id)arg1;	// IMP=0x001000000053f147
- (id)operationTypeAsString:(int)arg1;	// IMP=0x001000000053f0f9
- (int)StringAsNotification:(id)arg1;	// IMP=0x001000000053f092
- (id)notificationAsString:(int)arg1;	// IMP=0x001000000053f045
@property(nonatomic) _Bool hasNotification;
@property(nonatomic) int notification; // @synthesize notification=_notification;
@property(nonatomic) _Bool hasClearClient;
@property(nonatomic) _Bool clearClient; // @synthesize clearClient=_clearClient;
@property(nonatomic) _Bool hasCorrectiveCompensationMask;
@property(nonatomic) _Bool hasAuthMask;
@property(nonatomic) unsigned int authMask; // @synthesize authMask=_authMask;
- (void)dealloc;	// IMP=0x001000000053ee58
- (void)setChangeType:(long long)arg1;	// IMP=0x001000000068d560
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *sequencer;
- (void)setObjectIdentifier:(id)arg1;	// IMP=0x001000000068d522
@property(readonly, nonatomic) NSString *objectIdentifier;
- (void)setSyncId:(id)arg1;	// IMP=0x001000000068d4fa
- (id)syncId;	// IMP=0x001000000068d4e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
