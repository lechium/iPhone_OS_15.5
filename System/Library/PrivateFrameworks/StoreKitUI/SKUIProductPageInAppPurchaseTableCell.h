//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SKUIColorScheme, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIProductPageInAppPurchaseTableCell
{
    SKUIColorScheme *_colorScheme;	// 8 = 0x8
    struct UIEdgeInsets _contentInsets;	// 16 = 0x10
    UILabel *_indexLabel;	// 48 = 0x30
    UILabel *_nameLabel;	// 56 = 0x38
    UILabel *_priceLabel;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001c3bb0
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001c3b5b
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001c3b55
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000001c3ab3
- (void)layoutSubviews;	// IMP=0x00000000001c3755
@property(copy, nonatomic) NSString *productName;
@property(copy, nonatomic) NSString *priceString;
@property(copy, nonatomic) NSString *indexString;

@end
