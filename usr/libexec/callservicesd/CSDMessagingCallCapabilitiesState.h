//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class TUCallCapabilitiesState;

@interface CSDMessagingCallCapabilitiesState : PBCodable
{
    _Bool _faceTimeAudioAvailable;	// 8 = 0x8
    _Bool _faceTimeVideoAvailable;	// 9 = 0x9
    struct {
        unsigned int faceTimeAudioAvailable:1;
        unsigned int faceTimeVideoAvailable:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool faceTimeVideoAvailable; // @synthesize faceTimeVideoAvailable=_faceTimeVideoAvailable;
@property(nonatomic) _Bool faceTimeAudioAvailable; // @synthesize faceTimeAudioAvailable=_faceTimeAudioAvailable;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000118ca2
- (unsigned long long)hash;	// IMP=0x0010000000118c5c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000118b8e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000118b11
- (void)copyTo:(id)arg1;	// IMP=0x0010000000118ab7
- (void)writeTo:(id)arg1;	// IMP=0x0010000000118a44
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000118a37
- (id)dictionaryRepresentation;	// IMP=0x00100000001186b2
- (id)description;	// IMP=0x0010000000118603
@property(nonatomic) _Bool hasFaceTimeVideoAvailable;
@property(nonatomic) _Bool hasFaceTimeAudioAvailable;
@property(readonly, nonatomic) TUCallCapabilitiesState *state;
- (id)initWithCallCapabilitiesState:(id)arg1;	// IMP=0x0010000000115120

@end

