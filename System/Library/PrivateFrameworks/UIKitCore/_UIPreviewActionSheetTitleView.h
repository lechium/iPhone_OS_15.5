//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface _UIPreviewActionSheetTitleView
{
    NSString *_title;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000bf8549
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_contentSizeChanged:(id)arg1;	// IMP=0x0000000000bf84e5
- (void)_updateLabelFont;	// IMP=0x0000000000bf844f
- (void)dealloc;	// IMP=0x0000000000bf83da
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000bf83c6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000bf8397
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;	// IMP=0x0000000000bf8011

@end

