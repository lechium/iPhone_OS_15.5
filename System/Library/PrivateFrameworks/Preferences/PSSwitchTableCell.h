//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIActivityIndicatorView;

@interface PSSwitchTableCell
{
    UIActivityIndicatorView *_activityIndicator;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000000b422e
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000b41be
- (void)layoutSubviews;	// IMP=0x00000000000b4048
- (_Bool)shouldUseModernLayout;	// IMP=0x00000000000b4002
- (void)setValue:(id)arg1;	// IMP=0x00000000000b3f6c
- (void)reloadWithSpecifier:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000b3ebe
- (id)controlValue;	// IMP=0x00000000000b3e7b
@property(nonatomic) _Bool loading;
- (void)setCellEnabled:(_Bool)arg1;	// IMP=0x00000000000b3b02
- (_Bool)canReload;	// IMP=0x00000000000b3ab4
- (id)newControl;	// IMP=0x00000000000b3a67
- (void)prepareForReuse;	// IMP=0x00000000000b3a27
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x00000000000b3975
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x00000000000b38f9

@end

