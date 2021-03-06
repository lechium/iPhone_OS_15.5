//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOSuggestionItem : PBCodable <NSCopying>
{
    NSString *_suggestionString;	// 8 = 0x8
    int _tappingCount;	// 16 = 0x10
    _Bool _eventuallyVisible;	// 20 = 0x14
    _Bool _initiallyVisible;	// 21 = 0x15
    struct {
        unsigned int has_tappingCount:1;
        unsigned int has_eventuallyVisible:1;
        unsigned int has_initiallyVisible:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000010aba9d
- (void).cxx_destruct;	// IMP=0x00000000010abf93
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000010abee6
- (unsigned long long)hash;	// IMP=0x00000000010abe3f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010abce5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010abc15
- (void)copyTo:(id)arg1;	// IMP=0x00000000010abb68
- (void)writeTo:(id)arg1;	// IMP=0x00000000010abab9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010abaaa
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000010aba3d
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000010aba2b
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000010ab7be
- (id)jsonRepresentation;	// IMP=0x00000000010ab7af
- (id)dictionaryRepresentation;	// IMP=0x00000000010ab5bd
- (id)description;	// IMP=0x00000000010ab50e
@property(nonatomic) _Bool hasTappingCount;
@property(nonatomic) int tappingCount;
@property(nonatomic) _Bool hasEventuallyVisible;
@property(nonatomic) _Bool eventuallyVisible;
@property(nonatomic) _Bool hasInitiallyVisible;
@property(nonatomic) _Bool initiallyVisible;
@property(retain, nonatomic) NSString *suggestionString;
@property(readonly, nonatomic) _Bool hasSuggestionString;

@end

