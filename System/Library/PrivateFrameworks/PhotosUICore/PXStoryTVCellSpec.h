//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, UIFont;

@interface PXStoryTVCellSpec
{
    UIFont *_titleFont;	// 8 = 0x8
    UIFont *_subtitleFont;	// 16 = 0x10
    NSDictionary *_titleSupportedCharactersAttributes;	// 24 = 0x18
    NSDictionary *_titleUnsupportedCharactersAttributes;	// 32 = 0x20
    NSDictionary *_subtitleSupportedCharactersAttributes;	// 40 = 0x28
    NSDictionary *_subtitleUnsupportedCharactersAttributes;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000059b5a4
@property(readonly, nonatomic) NSDictionary *subtitleUnsupportedCharactersAttributes; // @synthesize subtitleUnsupportedCharactersAttributes=_subtitleUnsupportedCharactersAttributes;
@property(readonly, nonatomic) NSDictionary *subtitleSupportedCharactersAttributes; // @synthesize subtitleSupportedCharactersAttributes=_subtitleSupportedCharactersAttributes;
@property(readonly, nonatomic) NSDictionary *titleUnsupportedCharactersAttributes; // @synthesize titleUnsupportedCharactersAttributes=_titleUnsupportedCharactersAttributes;
@property(readonly, nonatomic) NSDictionary *titleSupportedCharactersAttributes; // @synthesize titleSupportedCharactersAttributes=_titleSupportedCharactersAttributes;
@property(readonly, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(readonly, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
- (struct UIEdgeInsets)_languageAwareOutsetsForFont:(id)arg1;	// IMP=0x000000000059b50f
- (_Bool)_isSupportedCharacterSetForFontDescriptor:(id)arg1 fontSize:(double)arg2 string:(id)arg3 supportedCharacterAttributes:(id)arg4 leading:(double)arg5;	// IMP=0x000000000059b1fd
- (id)attributedStringForSubtitle:(id)arg1;	// IMP=0x000000000059b076
- (id)attributedStringForTitle:(id)arg1;	// IMP=0x000000000059aeaa
@property(readonly, nonatomic) double memorySubtitleTracking;
@property(readonly, nonatomic) double memorySubtitleLeading;
@property(readonly, nonatomic) UIFont *memorySubtitleFont;
@property(readonly, nonatomic) double memoryTitleTracking;
@property(readonly, nonatomic) double memoryTitleLeading;
@property(readonly, nonatomic) UIFont *memoryTitleFont;
- (id)_setupSubtitleAttributesWithAllCharactersSupported:(_Bool)arg1;	// IMP=0x000000000059aa46
- (id)_setupTitleAttributesWithAllCharactersSupported:(_Bool)arg1;	// IMP=0x000000000059a8d4
- (id)_setupSubtitleFont;	// IMP=0x000000000059a6e5
- (id)_setupTitleFont;	// IMP=0x000000000059a4f6
- (id)initWithExtendedTraitCollection:(id)arg1;	// IMP=0x000000000059a3a6

@end

