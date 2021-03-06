//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UIActivityIndicatorMessageLabel
{
    NSDictionary *_regularTextAttributes;	// 120 = 0x78
    NSDictionary *_effectiveTextAttributes;	// 128 = 0x80
}

+ (id)defaultRegularContentSizeTextAttributes;	// IMP=0x0000000000cc678d
- (void).cxx_destruct;	// IMP=0x0000000000cc6f89
@property(readonly, copy, nonatomic) NSDictionary *effectiveTextAttributes; // @synthesize effectiveTextAttributes=_effectiveTextAttributes;
@property(copy, nonatomic) NSDictionary *regularTextAttributes; // @synthesize regularTextAttributes=_regularTextAttributes;
- (void)_ensureCapableOfCalculatingBaselineOffsets;	// IMP=0x0000000000cc6ece
- (id)_validatedAttributedString:(id)arg1;	// IMP=0x0000000000cc6df8
- (double)_effectiveVerticalSpacingToSpinner;	// IMP=0x0000000000cc6d7d
- (id)_effectiveAttributesDerivedFromRegularTextAttributes:(id)arg1;	// IMP=0x0000000000cc6bf5
- (void)setEffectiveTextAttributes:(id)arg1;	// IMP=0x0000000000cc6b27
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000cc6aab
- (void)setAttributedText:(id)arg1;	// IMP=0x0000000000cc69db
- (void)setText:(id)arg1;	// IMP=0x0000000000cc6962
@property(readonly, nonatomic) double verticalSpacingToSpinner;
- (id)initWithRegularTextAttributes:(id)arg1;	// IMP=0x0000000000cc685a

@end

