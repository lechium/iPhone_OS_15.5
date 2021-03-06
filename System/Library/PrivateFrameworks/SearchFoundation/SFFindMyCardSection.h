//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFFindMyCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFCard, SFColor, SFCommand, SFPerson, SFUserReportRequest;

@interface SFFindMyCardSection <SFFindMyCardSection, NSSecureCoding, NSCopying>
{
    SFPerson *_person;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001af861
- (void).cxx_destruct;	// IMP=0x00000000001af84e
@property(retain, nonatomic) SFPerson *person; // @synthesize person=_person;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001af713
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001af6ae
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001af55f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001af4ad
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001bf12c

// Remaining properties
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) _Bool canBeHidden;
@property(retain, nonatomic) NSString *cardSectionDetail;
@property(copy, nonatomic) NSString *cardSectionId;
@property(retain, nonatomic) SFCommand *command;
@property(retain, nonatomic) NSString *commandDetail;
@property(copy, nonatomic) NSArray *commands;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSArray *embeddedCards;
@property(nonatomic) _Bool hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(nonatomic) _Bool hideDivider;
@property(retain, nonatomic) SFCard *nextCard;
@property(copy, nonatomic) NSArray *parameterKeyPaths;
@property(copy, nonatomic) NSArray *previewButtonItems;
@property(retain, nonatomic) NSString *previewButtonItemsTitle;
@property(retain, nonatomic) SFCommand *previewCommand;
@property(copy, nonatomic) NSArray *punchoutOptions;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSString *resultIdentifier;
@property(nonatomic) int separatorStyle;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *type;
@property(retain, nonatomic) SFUserReportRequest *userReportRequest;

@end

