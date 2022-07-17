//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariInteractedWithGeneratedPasswordEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _generatedPasswordInteractionType;	// 16 = 0x10
    struct {
        unsigned int timestamp:1;
        unsigned int generatedPasswordInteractionType:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004e257
- (unsigned long long)hash;	// IMP=0x000000000004e211
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004e15e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004e0df
- (void)copyTo:(id)arg1;	// IMP=0x000000000004e083
- (void)writeTo:(id)arg1;	// IMP=0x000000000004e011
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004e004
- (id)dictionaryRepresentation;	// IMP=0x000000000004dc5b
- (id)description;	// IMP=0x000000000004dbac
- (int)StringAsGeneratedPasswordInteractionType:(id)arg1;	// IMP=0x000000000004db1a
- (id)generatedPasswordInteractionTypeAsString:(int)arg1;	// IMP=0x000000000004dab4
@property(nonatomic) _Bool hasGeneratedPasswordInteractionType;
@property(nonatomic) int generatedPasswordInteractionType; // @synthesize generatedPasswordInteractionType=_generatedPasswordInteractionType;
@property(nonatomic) _Bool hasTimestamp;

@end
