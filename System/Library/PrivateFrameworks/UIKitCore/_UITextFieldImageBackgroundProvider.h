//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UITextFieldImageBackgroundView;

__attribute__((visibility("hidden")))
@interface _UITextFieldImageBackgroundProvider
{
    _UITextFieldImageBackgroundView *_backgroundView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000041a325
- (void)layoutIfNeeded;	// IMP=0x000000000041a245
- (void)setNeedsDisplay;	// IMP=0x000000000041a204
- (void)_applyCorrectImage;	// IMP=0x000000000041a12b
- (void)enabledDidChangeAnimated:(_Bool)arg1;	// IMP=0x000000000041a027
- (void)addToTextField:(id)arg1;	// IMP=0x0000000000419fae
- (id)backgroundView;	// IMP=0x0000000000419f99

@end
