//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSParsecSearchSimpleResult-Protocol.h>

@class NSArray, NSNumber, NSString, WBSParsecImageRepresentation, WBSParsecSearchMapsResultFeedbackSender;
@protocol WBSParsecSearchSession;

@interface WBSParsecSearchSimpleResult <WBSParsecSearchSimpleResult>
{
    WBSParsecImageRepresentation *_titleGlyph;	// 8 = 0x8
    NSArray *_moreIconRepresentations;	// 16 = 0x10
    _Bool _descriptionTextCanWrap;	// 24 = 0x18
    _Bool _hasSingleLineDescriptionAndTitle;	// 25 = 0x19
    WBSParsecSearchMapsResultFeedbackSender *_mapsFeedbackSender;	// 32 = 0x20
    id <WBSParsecSearchSession> _parsecSearchSession;	// 40 = 0x28
    NSNumber *_titleMaximumNumberOfLines;	// 48 = 0x30
    NSString *_descriptionLeadInText;	// 56 = 0x38
    NSNumber *_descriptionMaximumNumberOfLines;	// 64 = 0x40
    NSString *_footnote;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001069af
@property(readonly, nonatomic) _Bool hasSingleLineDescriptionAndTitle; // @synthesize hasSingleLineDescriptionAndTitle=_hasSingleLineDescriptionAndTitle;
@property(readonly, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(readonly, nonatomic) _Bool descriptionTextCanWrap; // @synthesize descriptionTextCanWrap=_descriptionTextCanWrap;
@property(readonly, nonatomic) NSNumber *descriptionMaximumNumberOfLines; // @synthesize descriptionMaximumNumberOfLines=_descriptionMaximumNumberOfLines;
@property(readonly, nonatomic) NSString *descriptionLeadInText; // @synthesize descriptionLeadInText=_descriptionLeadInText;
@property(readonly, nonatomic) NSNumber *titleMaximumNumberOfLines; // @synthesize titleMaximumNumberOfLines=_titleMaximumNumberOfLines;
@property(retain, nonatomic) id <WBSParsecSearchSession> parsecSearchSession; // @synthesize parsecSearchSession=_parsecSearchSession;
@property(retain, nonatomic) WBSParsecSearchMapsResultFeedbackSender *mapsFeedbackSender; // @synthesize mapsFeedbackSender=_mapsFeedbackSender;
- (id)titleGlyphWithSession:(id)arg1;	// IMP=0x0000000000106891
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001065ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
