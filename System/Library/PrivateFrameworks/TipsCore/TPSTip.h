//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsCore/NSCopying-Protocol.h>
#import <TipsCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString, TPSActionableContent, TPSAssets, TPSFullTipContent, TPSWidgetContent;

@interface TPSTip <NSCopying, NSSecureCoding>
{
    _Bool _siriSuggestion;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    long long _subContentType;	// 24 = 0x18
    NSString *_eyebrow;	// 32 = 0x20
    TPSFullTipContent *_fullContent;	// 40 = 0x28
    TPSActionableContent *_miniContent;	// 48 = 0x30
    TPSWidgetContent *_widgetContent;	// 56 = 0x38
    NSArray *_collectionIdentifiers;	// 64 = 0x40
}

+ (void)getValuesFromOpenURLSchemeQueryItems:(id)arg1 tipIdentifier:(id *)arg2 collectionIdentifier:(id *)arg3 referrer:(id *)arg4;	// IMP=0x000000000004a7f2
+ (long long)contentTypeForDictionary:(id)arg1;	// IMP=0x000000000004a737
+ (id)tipIdFromDictionary:(id)arg1;	// IMP=0x000000000004a71b
+ (id)URLSchemeWithTipIdentifier:(id)arg1 collectionIdentifier:(id)arg2 referrer:(id)arg3;	// IMP=0x000000000004a533
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004a52b
- (void).cxx_destruct;	// IMP=0x000000000004bb3b
@property(copy, nonatomic) NSArray *collectionIdentifiers; // @synthesize collectionIdentifiers=_collectionIdentifiers;
@property(copy, nonatomic) TPSWidgetContent *widgetContent; // @synthesize widgetContent=_widgetContent;
@property(copy, nonatomic) TPSActionableContent *miniContent; // @synthesize miniContent=_miniContent;
@property(copy, nonatomic) TPSFullTipContent *fullContent; // @synthesize fullContent=_fullContent;
@property(copy, nonatomic) NSString *eyebrow; // @synthesize eyebrow=_eyebrow;
@property(nonatomic) long long subContentType; // @synthesize subContentType=_subContentType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic, getter=isSiriSuggestion) _Bool siriSuggestion; // @synthesize siriSuggestion=_siriSuggestion;
- (id)debugDescription;	// IMP=0x000000000004b70e
- (id)URLSchemeWithReferrer:(id)arg1;	// IMP=0x000000000004b63b
- (_Bool)hasWidgetContent;	// IMP=0x000000000004b608
- (void)addCollectionIdentifier:(id)arg1;	// IMP=0x000000000004b53b
- (void)updateWithContentDictionary:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000004b35f
@property(readonly, copy, nonatomic) TPSAssets *fullContentAssets; // @dynamic fullContentAssets;
@property(readonly, nonatomic, getter=isWelcome) _Bool welcome; // @dynamic welcome;
@property(readonly, nonatomic, getter=isSoftwareWelcome) _Bool softwareWelcome;
@property(readonly, nonatomic, getter=isHardwareWelcome) _Bool hardwareWelcome;
@property(readonly, nonatomic, getter=isOutro) _Bool outro;
@property(readonly, nonatomic, getter=isIntro) _Bool intro;
@property(readonly, nonatomic, getter=isTip) _Bool tip;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004aff8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004add7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004ac45
- (id)initWithDictionary:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000004ab28
- (id)shareText;	// IMP=0x00000000000476fe
- (id)footnoteContent;	// IMP=0x00000000000476ae
- (id)bodyContent;	// IMP=0x000000000004765e
- (id)bodyText;	// IMP=0x000000000004760e
- (id)webURLPath;	// IMP=0x0000000000047606
- (id)summary;	// IMP=0x00000000000475b6
- (id)actions;	// IMP=0x0000000000047566
- (_Bool)hasVideo;	// IMP=0x0000000000047522
- (_Bool)hasImage;	// IMP=0x00000000000474de
- (id)shortTitle;	// IMP=0x000000000004748e
- (id)title;	// IMP=0x000000000004743e
- (id)eyebrowText;	// IMP=0x000000000004742c
- (_Bool)textContainsHTML;	// IMP=0x0000000000047424
- (_Bool)containsLinks;	// IMP=0x00000000000473e0

@end

