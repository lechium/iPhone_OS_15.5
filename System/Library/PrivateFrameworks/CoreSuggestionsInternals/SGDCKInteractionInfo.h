//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@class NSData, NSString;

@interface SGDCKInteractionInfo : PBCodable <NSCopying>
{
    NSString *_intentResponseUserActivityString;	// 8 = 0x8
    NSString *_interactionBundleId;	// 16 = 0x10
    NSString *_interactionGroupId;	// 24 = 0x18
    NSString *_interactionId;	// 32 = 0x20
    NSString *_interactionTeamId;	// 40 = 0x28
    NSData *_reservationContainerReference;	// 48 = 0x30
    NSData *_reservationItemReferences;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001fc67e
@property(retain, nonatomic) NSString *interactionTeamId; // @synthesize interactionTeamId=_interactionTeamId;
@property(retain, nonatomic) NSString *intentResponseUserActivityString; // @synthesize intentResponseUserActivityString=_intentResponseUserActivityString;
@property(retain, nonatomic) NSData *reservationContainerReference; // @synthesize reservationContainerReference=_reservationContainerReference;
@property(retain, nonatomic) NSData *reservationItemReferences; // @synthesize reservationItemReferences=_reservationItemReferences;
@property(retain, nonatomic) NSString *interactionBundleId; // @synthesize interactionBundleId=_interactionBundleId;
@property(retain, nonatomic) NSString *interactionGroupId; // @synthesize interactionGroupId=_interactionGroupId;
@property(retain, nonatomic) NSString *interactionId; // @synthesize interactionId=_interactionId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001fc478
- (unsigned long long)hash;	// IMP=0x00000000001fc3a6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001fc1de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001fc079
- (void)copyTo:(id)arg1;	// IMP=0x00000000001fbf76
- (void)writeTo:(id)arg1;	// IMP=0x00000000001fbe88
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001fbe7b
- (id)dictionaryRepresentation;	// IMP=0x00000000001fbd35
- (id)description;	// IMP=0x00000000001fbc86
@property(readonly, nonatomic) _Bool hasInteractionTeamId;
@property(readonly, nonatomic) _Bool hasIntentResponseUserActivityString;
@property(readonly, nonatomic) _Bool hasReservationContainerReference;
@property(readonly, nonatomic) _Bool hasReservationItemReferences;
@property(readonly, nonatomic) _Bool hasInteractionBundleId;
@property(readonly, nonatomic) _Bool hasInteractionGroupId;
@property(readonly, nonatomic) _Bool hasInteractionId;

@end

