//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (MKAttributedFormat)
+ (void)_handleFormattingError:(id)arg1 forString:(id)arg2;	// IMP=0x000000000026019b
+ (id)_mapkit_attributedStringWithBindingFormat:(id)arg1 replacements:(id)arg2 attributes:(id)arg3;	// IMP=0x000000000025ffa7
+ (id)_mapkit_attributedStringWithBindingFormat:(id)arg1 replacements:(id)arg2 defaultReplacementAttributes:(id)arg3 startTokenDelimiter:(id)arg4 endTokenDelimiter:(id)arg5 error:(id *)arg6;	// IMP=0x000000000025f83f
+ (id)_mapkit_attributedStringWithBindingFormat:(id)arg1 replacements:(id)arg2 attributes:(id)arg3 error:(id *)arg4;	// IMP=0x000000000025f743
+ (id)_mapkit_attributedLiveTransitStringFromAttributedDepartureString:(id)arg1 liveStatus:(long long)arg2 darkMode:(_Bool)arg3 symbolOverrideColor:(id)arg4;	// IMP=0x00000000002677f6
+ (id)_mapkit_attributedLiveTransitStringFromDepartureString:(id)arg1 departure:(id)arg2 textAttributes:(id)arg3 darkMode:(_Bool)arg4 symbolOverrideColor:(id)arg5;	// IMP=0x00000000002676fc
+ (id)_mapkit_attributedLiveTransitStringFromDepartureString:(id)arg1 departure:(id)arg2 darkMode:(_Bool)arg3;	// IMP=0x00000000002676d3
+ (id)_mapkit_attributedTransitStringForServerFormattedString:(id)arg1 defaultAttributes:(id)arg2 variableOverrides:(id)arg3 options:(CDStruct_57af2063)arg4;	// IMP=0x00000000002675aa
+ (id)_mapkit_attributedTransitStringForServerFormattedString:(id)arg1 defaultAttributes:(id)arg2 variableOverrides:(id)arg3;	// IMP=0x00000000002674cf
+ (id)_mapkit_attributedTransitStringForServerFormattedString:(id)arg1 defaultAttributes:(id)arg2;	// IMP=0x00000000002674ba
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1;	// IMP=0x00000000002600f5
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 defaultReplacementAttributes:(id)arg2;	// IMP=0x000000000026004f
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 defaultReplacementAttributes:(id)arg2 startTokenDelimiter:(id)arg3 endTokenDelimiter:(id)arg4 error:(id *)arg5;	// IMP=0x000000000025f945
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 defaultReplacementAttributes:(id)arg2 error:(id *)arg3;	// IMP=0x000000000025f812
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 error:(id *)arg2;	// IMP=0x000000000025f7fb
@end
