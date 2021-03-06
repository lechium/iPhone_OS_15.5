//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBRichTitleCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBActionItem, _SFPBColor, _SFPBImage, _SFPBRichText;

@interface _SFPBRichTitleCardSection : PBCodable <_SFPBRichTitleCardSection, NSSecureCoding>
{
    _Bool _canBeHidden;	// 8 = 0x8
    _Bool _hasTopPadding;	// 9 = 0x9
    _Bool _hasBottomPadding;	// 10 = 0xa
    _Bool _isCentered;	// 11 = 0xb
    _Bool _reviewNewLine;	// 12 = 0xc
    _Bool _hideVerticalDivider;	// 13 = 0xd
    _Bool _titleNoWrap;	// 14 = 0xe
    _Bool _thumbnailCropCircle;	// 15 = 0xf
    _Bool _subtitleIsEmphasized;	// 16 = 0x10
    int _separatorStyle;	// 20 = 0x14
    float _rating;	// 24 = 0x18
    int _auxiliaryBottomTextColor;	// 28 = 0x1c
    int _auxiliaryAlignment;	// 32 = 0x20
    int _titleAlign;	// 36 = 0x24
    int _titleWeight;	// 40 = 0x28
    int _playActionAlign;	// 44 = 0x2c
    NSArray *_punchoutOptions;	// 48 = 0x30
    NSString *_punchoutPickerTitle;	// 56 = 0x38
    NSString *_punchoutPickerDismissText;	// 64 = 0x40
    NSString *_type;	// 72 = 0x48
    _SFPBColor *_backgroundColor;	// 80 = 0x50
    NSString *_title;	// 88 = 0x58
    NSString *_subtitle;	// 96 = 0x60
    NSString *_contentAdvisory;	// 104 = 0x68
    _SFPBImage *_titleImage;	// 112 = 0x70
    NSString *_descriptionText;	// 120 = 0x78
    NSString *_ratingText;	// 128 = 0x80
    _SFPBImage *_reviewGlyph;	// 136 = 0x88
    NSString *_reviewText;	// 144 = 0x90
    NSArray *_moreGlyphs;	// 152 = 0x98
    NSString *_auxiliaryTopText;	// 160 = 0xa0
    NSString *_auxiliaryMiddleText;	// 168 = 0xa8
    NSString *_auxiliaryBottomText;	// 176 = 0xb0
    _SFPBImage *_imageOverlay;	// 184 = 0xb8
    _SFPBActionItem *_playAction;	// 192 = 0xc0
    NSArray *_offers;	// 200 = 0xc8
    NSString *_footnote;	// 208 = 0xd0
    _SFPBRichText *_richSubtitle;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x000000000013dc7c
@property(nonatomic) _Bool subtitleIsEmphasized; // @synthesize subtitleIsEmphasized=_subtitleIsEmphasized;
@property(retain, nonatomic) _SFPBRichText *richSubtitle; // @synthesize richSubtitle=_richSubtitle;
@property(copy, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(copy, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property(nonatomic) int playActionAlign; // @synthesize playActionAlign=_playActionAlign;
@property(retain, nonatomic) _SFPBActionItem *playAction; // @synthesize playAction=_playAction;
@property(retain, nonatomic) _SFPBImage *imageOverlay; // @synthesize imageOverlay=_imageOverlay;
@property(nonatomic) _Bool thumbnailCropCircle; // @synthesize thumbnailCropCircle=_thumbnailCropCircle;
@property(nonatomic) _Bool titleNoWrap; // @synthesize titleNoWrap=_titleNoWrap;
@property(nonatomic) int titleWeight; // @synthesize titleWeight=_titleWeight;
@property(nonatomic) int titleAlign; // @synthesize titleAlign=_titleAlign;
@property(nonatomic) _Bool hideVerticalDivider; // @synthesize hideVerticalDivider=_hideVerticalDivider;
@property(nonatomic) int auxiliaryAlignment; // @synthesize auxiliaryAlignment=_auxiliaryAlignment;
@property(nonatomic) int auxiliaryBottomTextColor; // @synthesize auxiliaryBottomTextColor=_auxiliaryBottomTextColor;
@property(copy, nonatomic) NSString *auxiliaryBottomText; // @synthesize auxiliaryBottomText=_auxiliaryBottomText;
@property(copy, nonatomic) NSString *auxiliaryMiddleText; // @synthesize auxiliaryMiddleText=_auxiliaryMiddleText;
@property(copy, nonatomic) NSString *auxiliaryTopText; // @synthesize auxiliaryTopText=_auxiliaryTopText;
@property(copy, nonatomic) NSArray *moreGlyphs; // @synthesize moreGlyphs=_moreGlyphs;
@property(nonatomic) _Bool reviewNewLine; // @synthesize reviewNewLine=_reviewNewLine;
@property(copy, nonatomic) NSString *reviewText; // @synthesize reviewText=_reviewText;
@property(retain, nonatomic) _SFPBImage *reviewGlyph; // @synthesize reviewGlyph=_reviewGlyph;
@property(copy, nonatomic) NSString *ratingText; // @synthesize ratingText=_ratingText;
@property(nonatomic) float rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(nonatomic) _Bool isCentered; // @synthesize isCentered=_isCentered;
@property(retain, nonatomic) _SFPBImage *titleImage; // @synthesize titleImage=_titleImage;
@property(copy, nonatomic) NSString *contentAdvisory; // @synthesize contentAdvisory=_contentAdvisory;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000013c39a
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000013c2dc
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000013aa7b
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000138b67
- (void)writeTo:(id)arg1;	// IMP=0x00000000001381a1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000138194
- (id)offersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000013811f
- (unsigned long long)offersCount;	// IMP=0x0000000000138102
- (void)addOffers:(id)arg1;	// IMP=0x0000000000138088
- (void)clearOffers;	// IMP=0x000000000013806b
- (id)moreGlyphsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000137ed6
- (unsigned long long)moreGlyphsCount;	// IMP=0x0000000000137eb9
- (void)addMoreGlyphs:(id)arg1;	// IMP=0x0000000000137e3f
- (void)clearMoreGlyphs;	// IMP=0x0000000000137e22
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000137b4f
- (unsigned long long)punchoutOptionsCount;	// IMP=0x0000000000137b32
- (void)addPunchoutOptions:(id)arg1;	// IMP=0x0000000000137ab8
- (void)clearPunchoutOptions;	// IMP=0x0000000000137a9b
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001e11bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

