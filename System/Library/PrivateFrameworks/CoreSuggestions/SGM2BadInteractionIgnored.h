//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestions/NSCopying-Protocol.h>

@class NSString;

@interface SGM2BadInteractionIgnored : PBCodable <NSCopying>
{
    NSString *_key;	// 8 = 0x8
    int _reason;	// 16 = 0x10
    struct {
        unsigned int reason:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000002482
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000240b
- (unsigned long long)hash;	// IMP=0x00000000000023b8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000022f7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000225f
- (void)copyTo:(id)arg1;	// IMP=0x00000000000021fc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000002198
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000218b
- (id)dictionaryRepresentation;	// IMP=0x00000000000020b2
- (id)description;	// IMP=0x0000000000002003
- (int)StringAsReason:(id)arg1;	// IMP=0x0000000000001fa1
- (id)reasonAsString:(int)arg1;	// IMP=0x0000000000001f4c
@property(nonatomic) _Bool hasReason;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) _Bool hasKey;

@end

