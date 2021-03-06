//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBHeroCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBImage, _SFPBRichText;

@interface _SFPBHeroCardSection : PBCodable <_SFPBHeroCardSection, NSSecureCoding>
{
    _Bool _canBeHidden;	// 8 = 0x8
    _Bool _hasTopPadding;	// 9 = 0x9
    _Bool _hasBottomPadding;	// 10 = 0xa
    int _separatorStyle;	// 12 = 0xc
    NSArray *_punchoutOptions;	// 16 = 0x10
    NSString *_punchoutPickerTitle;	// 24 = 0x18
    NSString *_punchoutPickerDismissText;	// 32 = 0x20
    NSString *_type;	// 40 = 0x28
    _SFPBColor *_backgroundColor;	// 48 = 0x30
    _SFPBRichText *_title;	// 56 = 0x38
    _SFPBRichText *_subtitle;	// 64 = 0x40
    NSArray *_buttonItems;	// 72 = 0x48
    _SFPBImage *_image;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000e3bee
@property(retain, nonatomic) _SFPBImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSArray *buttonItems; // @synthesize buttonItems=_buttonItems;
@property(retain, nonatomic) _SFPBRichText *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) _SFPBRichText *title; // @synthesize title=_title;
@property(retain, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000e318e
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000e30d0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000e25d8
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e19e4
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e15a6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e1599
- (id)buttonItemsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e1568
- (unsigned long long)buttonItemsCount;	// IMP=0x00000000000e154b
- (void)addButtonItems:(id)arg1;	// IMP=0x00000000000e14d1
- (void)clearButtonItems;	// IMP=0x00000000000e14b4
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e134b
- (unsigned long long)punchoutOptionsCount;	// IMP=0x00000000000e132e
- (void)addPunchoutOptions:(id)arg1;	// IMP=0x00000000000e12b4
- (void)clearPunchoutOptions;	// IMP=0x00000000000e1297
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001b4586

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

