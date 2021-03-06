//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestions/NSCopying-Protocol.h>

@class NSString;

@interface SGM2SelfIdPatternMatched : PBCodable <NSCopying>
{
    NSString *_key;	// 8 = 0x8
    unsigned int _messageIndex;	// 16 = 0x10
    int _nameClass;	// 20 = 0x14
    unsigned int _nameTokens;	// 24 = 0x18
    NSString *_patternHash;	// 32 = 0x20
    int _patternType;	// 40 = 0x28
    struct {
        unsigned int messageIndex:1;
        unsigned int nameClass:1;
        unsigned int nameTokens:1;
        unsigned int patternType:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000000001b0b4
@property(nonatomic) unsigned int messageIndex; // @synthesize messageIndex=_messageIndex;
@property(nonatomic) unsigned int nameTokens; // @synthesize nameTokens=_nameTokens;
@property(retain, nonatomic) NSString *patternHash; // @synthesize patternHash=_patternHash;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001af7d
- (unsigned long long)hash;	// IMP=0x000000000001ae9d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ad2f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001ac1c
- (void)copyTo:(id)arg1;	// IMP=0x000000000001ab3e
- (void)writeTo:(id)arg1;	// IMP=0x000000000001aa56
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001aa49
- (id)dictionaryRepresentation;	// IMP=0x000000000001a7ff
- (id)description;	// IMP=0x000000000001a750
@property(nonatomic) _Bool hasMessageIndex;
- (int)StringAsNameClass:(id)arg1;	// IMP=0x000000000001a679
- (id)nameClassAsString:(int)arg1;	// IMP=0x000000000001a613
@property(nonatomic) _Bool hasNameClass;
@property(nonatomic) int nameClass; // @synthesize nameClass=_nameClass;
@property(nonatomic) _Bool hasNameTokens;
@property(readonly, nonatomic) _Bool hasPatternHash;
- (int)StringAsPatternType:(id)arg1;	// IMP=0x000000000001a4e9
- (id)patternTypeAsString:(int)arg1;	// IMP=0x000000000001a494
@property(nonatomic) _Bool hasPatternType;
@property(nonatomic) int patternType; // @synthesize patternType=_patternType;
@property(readonly, nonatomic) _Bool hasKey;

@end

