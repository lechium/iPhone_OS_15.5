//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <Preferences/PSHeaderFooterView-Protocol.h>

@class UILabel;

@interface PSKeychainSyncHeaderView : UIView <PSHeaderFooterView>
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_detailLabel;	// 16 = 0x10
    _Bool _usesCompactLayout;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004dd99
@property(nonatomic) _Bool usesCompactLayout; // @synthesize usesCompactLayout=_usesCompactLayout;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;	// IMP=0x000000000004da89
- (void)layoutSubviews;	// IMP=0x000000000004d82b
- (void)setTitleText:(id)arg1;	// IMP=0x000000000004d7f2
- (void)setDetailText:(id)arg1;	// IMP=0x000000000004d7b9
- (id)initWithSpecifier:(id)arg1;	// IMP=0x000000000004d389

@end
