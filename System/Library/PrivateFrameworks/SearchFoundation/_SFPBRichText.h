//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBRichText-Protocol.h>

@class NSArray, NSData, NSString, _SFPBGraphicalFloat, _SFPBText;

@interface _SFPBRichText : PBCodable <_SFPBRichText, NSSecureCoding>
{
    _SFPBText *_text;	// 8 = 0x8
    _SFPBGraphicalFloat *_starRating;	// 16 = 0x10
    NSString *_contentAdvisory;	// 24 = 0x18
    NSArray *_icons;	// 32 = 0x20
    NSArray *_formattedTextPieces;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000806b9
@property(copy, nonatomic) NSArray *formattedTextPieces; // @synthesize formattedTextPieces=_formattedTextPieces;
@property(copy, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(copy, nonatomic) NSString *contentAdvisory; // @synthesize contentAdvisory=_contentAdvisory;
@property(retain, nonatomic) _SFPBGraphicalFloat *starRating; // @synthesize starRating=_starRating;
@property(retain, nonatomic) _SFPBText *text; // @synthesize text=_text;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000080089
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000007ffcb
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000007f8fd
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007f29c
- (void)writeTo:(id)arg1;	// IMP=0x000000000007efe3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007efd6
- (id)formattedTextPiecesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007efb9
- (unsigned long long)formattedTextPiecesCount;	// IMP=0x000000000007ef9c
- (void)addFormattedTextPieces:(id)arg1;	// IMP=0x000000000007ef22
- (void)clearFormattedTextPieces;	// IMP=0x000000000007ef05
- (id)iconsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007eeb4
- (unsigned long long)iconsCount;	// IMP=0x000000000007ee97
- (void)addIcons:(id)arg1;	// IMP=0x000000000007ee1d
- (void)clearIcons;	// IMP=0x000000000007ee00
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001d96d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
