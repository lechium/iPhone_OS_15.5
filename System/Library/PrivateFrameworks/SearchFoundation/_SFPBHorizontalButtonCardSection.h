//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBHorizontalButtonCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor;

@interface _SFPBHorizontalButtonCardSection : PBCodable <_SFPBHorizontalButtonCardSection, NSSecureCoding>
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
    NSArray *_buttonCardSections;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000fb226
@property(copy, nonatomic) NSArray *buttonCardSections; // @synthesize buttonCardSections=_buttonCardSections;
@property(retain, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000fa97e
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000fa8c0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000f9fd6
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f972e
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f93a2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f9395
- (id)buttonCardSectionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f9378
- (unsigned long long)buttonCardSectionsCount;	// IMP=0x00000000000f935b
- (void)addButtonCardSections:(id)arg1;	// IMP=0x00000000000f92e1
- (void)clearButtonCardSections;	// IMP=0x00000000000f92c4
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f9183
- (unsigned long long)punchoutOptionsCount;	// IMP=0x00000000000f9166
- (void)addPunchoutOptions:(id)arg1;	// IMP=0x00000000000f90ec
- (void)clearPunchoutOptions;	// IMP=0x00000000000f90cf
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001d8a37

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

