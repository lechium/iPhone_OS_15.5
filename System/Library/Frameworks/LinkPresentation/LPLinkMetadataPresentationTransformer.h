//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPImage, LPLinkMetadata, NSString, NSURL;

@interface LPLinkMetadataPresentationTransformer : NSObject
{
    _Bool _complete;	// 8 = 0x8
    _Bool _allowsTapToLoad;	// 9 = 0x9
    _Bool _allowsTapping;	// 10 = 0xa
    _Bool _allowsPlaybackControls;	// 11 = 0xb
    _Bool _allowsPlayback;	// 12 = 0xc
    _Bool _hasOverriddenBackgroundColor;	// 13 = 0xd
    LPLinkMetadata *_metadata;	// 16 = 0x10
    NSURL *_URL;	// 24 = 0x18
    unsigned long long _preferredSizeClass;	// 32 = 0x20
    LPImage *_sourceContextIcon;	// 40 = 0x28
    NSString *_sourceBundleIdentifier;	// 48 = 0x30
    double _scaleFactor;	// 56 = 0x38
    NSString *_preferredContentSizeCategory;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000009c4bd
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(copy, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(retain, nonatomic) LPImage *sourceContextIcon; // @synthesize sourceContextIcon=_sourceContextIcon;
@property(nonatomic) unsigned long long preferredSizeClass; // @synthesize preferredSizeClass=_preferredSizeClass;
@property(nonatomic) _Bool hasOverriddenBackgroundColor; // @synthesize hasOverriddenBackgroundColor=_hasOverriddenBackgroundColor;
@property(nonatomic) _Bool allowsPlayback; // @synthesize allowsPlayback=_allowsPlayback;
@property(nonatomic) _Bool allowsPlaybackControls; // @synthesize allowsPlaybackControls=_allowsPlaybackControls;
@property(nonatomic) _Bool allowsTapping; // @synthesize allowsTapping=_allowsTapping;
@property(nonatomic) _Bool allowsTapToLoad; // @synthesize allowsTapToLoad=_allowsTapToLoad;
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) unsigned long long effectiveSizeClass;
- (void)_populateProperties:(id)arg1 withPrimaryIcon:(id)arg2 iconProperties:(id)arg3;	// IMP=0x000000000009c357
- (void)_populateProperties:(id)arg1 withPrimaryIcon:(id)arg2 iconProperties:(id)arg3 canBecomeImage:(_Bool)arg4;	// IMP=0x000000000009c1b2
- (void)_populateProperties:(id)arg1 withPrimaryIcon:(id)arg2;	// IMP=0x000000000009c19d
- (void)_populateProperties:(id)arg1 withPrimaryImage:(id)arg2;	// IMP=0x000000000009c0b2
- (_Bool)_prefersLeadingIconWithStyle:(long long)arg1;	// IMP=0x000000000009c049
- (_Bool)_prefersImageAsIconWithStyle:(long long)arg1;	// IMP=0x000000000009bfe0
- (_Bool)_prefersIconAsImage;	// IMP=0x000000000009bfc6
- (unsigned long long)_rowConfigurationForStyle:(long long)arg1;	// IMP=0x000000000009bfac
@property(readonly, nonatomic) _Bool hasMedia;
- (_Bool)hasMediaWithProperties:(id)arg1;	// IMP=0x000000000009bde0
- (id)presentationProperties;	// IMP=0x000000000009afbf
- (id)unspecializedPresentationPropertiesForStyle:(long long)arg1;	// IMP=0x000000000009a8e8
- (id)unspecializedPresentationProperties;	// IMP=0x000000000009a8b7
- (id)commonPresentationPropertiesForStyle:(long long)arg1;	// IMP=0x000000000009a80f
- (id)backgroundColorForStyle:(long long)arg1;	// IMP=0x000000000009a6f0
- (id)arAssetForStyle:(long long)arg1;	// IMP=0x000000000009a697
- (id)audioForStyle:(long long)arg1;	// IMP=0x000000000009a681
- (id)videoForStyle:(long long)arg1;	// IMP=0x000000000009a625
- (id)imageForStyle:(long long)arg1 icon:(id *)arg2 alternateImages:(id *)arg3;	// IMP=0x0000000000099fb9
- (id)_lastResortIcon;	// IMP=0x0000000000099b32
- (id)quotedTextForStyle:(long long)arg1;	// IMP=0x0000000000099ad2
- (id)quotedTextForStyleIgnoringAllowsQuotedText:(long long)arg1;	// IMP=0x00000000000999c1
- (_Bool)_hasNonMicroblogQuotedTextForStyle:(long long)arg1;	// IMP=0x000000000009994a
- (id)domainNameForIndicator;	// IMP=0x00000000000997bc
- (id)summaryForStyle:(long long)arg1;	// IMP=0x00000000000996db
- (id)subtitleForStyle:(long long)arg1;	// IMP=0x00000000000994a1
- (_Bool)shouldUseAppClipPresentation;	// IMP=0x0000000000099409
- (id)domainName;	// IMP=0x000000000009939c
- (id)titleForStyle:(long long)arg1;	// IMP=0x000000000009917c
- (id)mainCaptionBarForStyle:(long long)arg1;	// IMP=0x0000000000098cbe
- (long long)rendererStyle;	// IMP=0x000000000009883d
@property(readonly, copy, nonatomic) NSURL *canonicalURL;
@property(readonly, copy, nonatomic) NSURL *originalURL;
- (id)init;	// IMP=0x0000000000098750

@end

