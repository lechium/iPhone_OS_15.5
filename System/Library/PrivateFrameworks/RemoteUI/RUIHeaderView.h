//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

#import <RemoteUI/RUIHeader-Protocol.h>

@class NSString, RUILinkLabel, UIColor, UIImageView, UILabel;

@interface RUIHeaderView : UIView <RUIHeader>
{
    UILabel *_navTitleLabel;	// 8 = 0x8
    UILabel *_navSubHeaderLabel;	// 16 = 0x10
    UILabel *_headerLabel;	// 24 = 0x18
    RUILinkLabel *_detailHeaderLabel;	// 32 = 0x20
    UILabel *_subHeaderLabel;	// 40 = 0x28
    UIImageView *_iconView;	// 48 = 0x30
    int _imageAlignment;	// 56 = 0x38
    _Bool _isFirstSection;	// 60 = 0x3c
    _Bool _customIconSize;	// 61 = 0x3d
    _Bool _hasLargeIcon;	// 62 = 0x3e
    double _imageLabelPadding;	// 64 = 0x40
    double _subHeaderTopMarginValue;	// 72 = 0x48
    UIColor *_headerLabelColor;	// 80 = 0x50
    struct UIEdgeInsets _margins;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000004f68
@property(copy, nonatomic) UIColor *headerLabelColor; // @synthesize headerLabelColor=_headerLabelColor;
@property(nonatomic) double imageLabelPadding; // @synthesize imageLabelPadding=_imageLabelPadding;
@property(nonatomic) double subHeaderTopMarginValue; // @synthesize subHeaderTopMarginValue=_subHeaderTopMarginValue;
@property(nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
- (id)navSubHeaderLabel;	// IMP=0x0000000000004d85
- (void)setNavSubHeaderTitle:(id)arg1;	// IMP=0x0000000000004d06
- (id)navTitleLabel;	// IMP=0x0000000000004bb9
- (void)setNavTitle:(id)arg1;	// IMP=0x0000000000004b3a
- (double)headerHeightForWidth:(double)arg1 inView:(id)arg2;	// IMP=0x0000000000003786
- (void)layoutSubviews;	// IMP=0x0000000000002993
- (_Bool)_hasIcon;	// IMP=0x00000000000028df
- (void)setSectionIsFirst:(_Bool)arg1;	// IMP=0x00000000000028bc
- (void)setImageAlignment:(int)arg1;	// IMP=0x0000000000002840
- (void)setImageSize:(struct CGSize)arg1;	// IMP=0x000000000000279a
- (void)setIconImage:(id)arg1;	// IMP=0x000000000000264a
- (id)iconImage;	// IMP=0x000000000000262d
- (void)setDetailHeaderColor:(id)arg1;	// IMP=0x00000000000025ad
- (void)setDetailText:(id)arg1 attributes:(id)arg2;	// IMP=0x0000000000002574
- (id)detailHeaderLabel;	// IMP=0x000000000000255f
- (void)setSubHeaderTopMargin:(double)arg1;	// IMP=0x000000000000253b
- (void)setSubHeaderColor:(id)arg1;	// IMP=0x00000000000024c3
- (void)setSubHeaderAlignment:(long long)arg1;	// IMP=0x0000000000002466
- (void)setSubHeaderText:(id)arg1 attributes:(id)arg2;	// IMP=0x00000000000023e7
- (id)subHeaderLabel;	// IMP=0x00000000000022ad
- (void)setHeaderColor:(id)arg1;	// IMP=0x0000000000002289
- (void)setHeaderAlignment:(long long)arg1;	// IMP=0x0000000000002250
- (void)setText:(id)arg1 attributes:(id)arg2;	// IMP=0x000000000000208f
- (id)headerLabel;	// IMP=0x000000000000207a
- (void)setHeaderMargin:(struct UIEdgeInsets)arg1;	// IMP=0x000000000000205c
- (id)initWithAttributes:(id)arg1;	// IMP=0x0000000000001d62
- (double)_headerOffsetInView:(id)arg1;	// IMP=0x0000000000001ce6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
