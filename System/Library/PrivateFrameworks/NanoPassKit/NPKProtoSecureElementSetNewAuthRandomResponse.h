//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoSecureElementSetNewAuthRandomResponse : PBCodable <NSCopying>
{
    NSData *_challengeResponse;	// 8 = 0x8
    NSData *_cryptogram;	// 16 = 0x10
    _Bool _pending;	// 24 = 0x18
    _Bool _success;	// 25 = 0x19
    CDStruct_5ee4970e _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000055c4c
@property(retain, nonatomic) NSData *challengeResponse; // @synthesize challengeResponse=_challengeResponse;
@property(retain, nonatomic) NSData *cryptogram; // @synthesize cryptogram=_cryptogram;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000055b42
- (unsigned long long)hash;	// IMP=0x0000000000055aa4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005596c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005588e
- (void)copyTo:(id)arg1;	// IMP=0x00000000000557ee
- (void)writeTo:(id)arg1;	// IMP=0x0000000000055741
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000055734
- (id)dictionaryRepresentation;	// IMP=0x000000000005530f
- (id)description;	// IMP=0x0000000000055260
@property(readonly, nonatomic) _Bool hasChallengeResponse;
@property(readonly, nonatomic) _Bool hasCryptogram;
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasPending;

@end
