//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, PBUnknownFields;

@interface GEOTrafficBannerTextButton : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOFormattedString *_text;	// 16 = 0x10
    int _action;	// 24 = 0x18
    int _buttonDisplay;	// 28 = 0x1c
    struct {
        unsigned int has_action:1;
        unsigned int has_buttonDisplay:1;
    } _flags;	// 32 = 0x20
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000969819
- (void).cxx_destruct;	// IMP=0x0000000000969d0a
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000969ca4
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000969be6
- (unsigned long long)hash;	// IMP=0x0000000000969b5a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000969a3b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000969970
- (void)copyTo:(id)arg1;	// IMP=0x00000000009698de
- (void)writeTo:(id)arg1;	// IMP=0x0000000000969835
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000969826
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000009697b9
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000009697a7
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000096948a
- (id)jsonRepresentation;	// IMP=0x0000000000969378
- (id)dictionaryRepresentation;	// IMP=0x000000000096905a
- (id)description;	// IMP=0x0000000000968fab
- (int)StringAsButtonDisplay:(id)arg1;	// IMP=0x0000000000968f19
- (id)buttonDisplayAsString:(int)arg1;	// IMP=0x0000000000968eb3
@property(nonatomic) _Bool hasButtonDisplay;
@property(nonatomic) int buttonDisplay;
- (int)StringAsAction:(id)arg1;	// IMP=0x0000000000968db9
- (id)actionAsString:(int)arg1;	// IMP=0x0000000000968d53
@property(nonatomic) _Bool hasAction;
@property(nonatomic) int action;
@property(retain, nonatomic) GEOFormattedString *text;
@property(readonly, nonatomic) _Bool hasText;

@end
