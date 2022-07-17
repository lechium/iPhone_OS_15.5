//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariShared/WBSParsecModel.h>

@class NSArray, NSString, NSURL, WBSParsecImageRepresentation;

@interface WBSParsecActionButton : WBSParsecModel
{
    _Bool _forStreamingResult;	// 8 = 0x8
    _Bool _overlay;	// 9 = 0x9
    NSString *_type;	// 16 = 0x10
    NSString *_label;	// 24 = 0x18
    NSString *_labelAlignment;	// 32 = 0x20
    NSString *_itunesLabel;	// 40 = 0x28
    NSString *_offerType;	// 48 = 0x30
    NSString *_completion;	// 56 = 0x38
    NSString *_itunesCompletion;	// 64 = 0x40
    NSString *_mediaKind;	// 72 = 0x48
    NSArray *_itunesContentIdentifiers;	// 80 = 0x50
    WBSParsecImageRepresentation *_baseIcon;	// 88 = 0x58
    WBSParsecImageRepresentation *_icon;	// 96 = 0x60
    NSString *_punchoutAppName;	// 104 = 0x68
    NSString *_punchoutAppBundleIdentifier;	// 112 = 0x70
    NSURL *_punchoutURL;	// 120 = 0x78
}

+ (id)schema;	// IMP=0x000000000013a656
- (void).cxx_destruct;	// IMP=0x000000000013b0d8
@property(readonly, nonatomic) NSURL *punchoutURL; // @synthesize punchoutURL=_punchoutURL;
@property(readonly, copy, nonatomic) NSString *punchoutAppBundleIdentifier; // @synthesize punchoutAppBundleIdentifier=_punchoutAppBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *punchoutAppName; // @synthesize punchoutAppName=_punchoutAppName;
@property(readonly, nonatomic) WBSParsecImageRepresentation *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) WBSParsecImageRepresentation *baseIcon; // @synthesize baseIcon=_baseIcon;
@property(readonly, nonatomic, getter=isOverlay) _Bool overlay; // @synthesize overlay=_overlay;
@property(readonly, nonatomic, getter=isForStreamingResult) _Bool forStreamingResult; // @synthesize forStreamingResult=_forStreamingResult;
@property(readonly, copy, nonatomic) NSArray *itunesContentIdentifiers; // @synthesize itunesContentIdentifiers=_itunesContentIdentifiers;
@property(readonly, copy, nonatomic) NSString *mediaKind; // @synthesize mediaKind=_mediaKind;
@property(readonly, copy, nonatomic) NSString *itunesCompletion; // @synthesize itunesCompletion=_itunesCompletion;
@property(readonly, copy, nonatomic) NSString *completion; // @synthesize completion=_completion;
@property(readonly, copy, nonatomic) NSString *offerType; // @synthesize offerType=_offerType;
@property(readonly, copy, nonatomic) NSString *itunesLabel; // @synthesize itunesLabel=_itunesLabel;
@property(readonly, copy, nonatomic) NSString *labelAlignment; // @synthesize labelAlignment=_labelAlignment;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic, getter=isForAppleMusicResult) _Bool forAppleMusicResult;
- (id)initWithDictionary:(id)arg1 mediaKind:(id)arg2;	// IMP=0x000000000013a9a8

@end
