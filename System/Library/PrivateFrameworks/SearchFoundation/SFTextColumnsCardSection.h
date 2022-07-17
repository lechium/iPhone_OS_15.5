//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFTextColumnsCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFCard, SFColor, SFCommand, SFUserReportRequest;

@interface SFTextColumnsCardSection <SFTextColumnsCardSection, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int titleWeight:1;
    } _has;	// 8 = 0x8
    _Bool _canBeHidden;	// 12 = 0xc
    _Bool _hasTopPadding;	// 13 = 0xd
    _Bool _hasBottomPadding;	// 14 = 0xe
    int _separatorStyle;	// 16 = 0x10
    NSArray *_punchoutOptions;	// 24 = 0x18
    NSString *_punchoutPickerTitle;	// 32 = 0x20
    NSString *_punchoutPickerDismissText;	// 40 = 0x28
    NSString *_type;	// 48 = 0x30
    SFColor *_backgroundColor;	// 56 = 0x38
    NSString *_title;	// 64 = 0x40
    unsigned long long _titleWeight;	// 72 = 0x48
    NSArray *_columns;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001d8a2f
- (void).cxx_destruct;	// IMP=0x00000000001d89a9
@property(copy, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(nonatomic) unsigned long long titleWeight; // @synthesize titleWeight=_titleWeight;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) SFColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d848e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d8313
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d81c4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d8112
- (_Bool)hasTitleWeight;	// IMP=0x00000000001d80fd
- (_Bool)hasSeparatorStyle;	// IMP=0x00000000001d80cc
- (_Bool)hasHasBottomPadding;	// IMP=0x00000000001d809c
- (_Bool)hasHasTopPadding;	// IMP=0x00000000001d806d
- (_Bool)hasCanBeHidden;	// IMP=0x00000000001d8040
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001c36ac

// Remaining properties
@property(retain, nonatomic) NSString *cardSectionDetail;
@property(copy, nonatomic) NSString *cardSectionId;
@property(retain, nonatomic) SFCommand *command;
@property(retain, nonatomic) NSString *commandDetail;
@property(copy, nonatomic) NSArray *commands;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSArray *embeddedCards;
@property(nonatomic) _Bool hideDivider;
@property(retain, nonatomic) SFCard *nextCard;
@property(copy, nonatomic) NSArray *parameterKeyPaths;
@property(copy, nonatomic) NSArray *previewButtonItems;
@property(retain, nonatomic) NSString *previewButtonItemsTitle;
@property(retain, nonatomic) SFCommand *previewCommand;
@property(copy, nonatomic) NSString *resultIdentifier;
@property(readonly) Class superclass;
@property(retain, nonatomic) SFUserReportRequest *userReportRequest;

@end
