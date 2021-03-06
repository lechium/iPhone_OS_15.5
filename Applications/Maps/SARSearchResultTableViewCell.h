//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BackgroundColorButton;
@protocol SARSearchResultTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SARSearchResultTableViewCell
{
    id <SARSearchResultTableViewCellDelegate> _delegate;	// 232 = 0xe8
    BackgroundColorButton *_actionButton;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x00200000006e3a68
@property(readonly, nonatomic) BackgroundColorButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak id <SARSearchResultTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_buttonAction;	// IMP=0x00100000006e398d
- (id)attributedSecondPartDetailString;	// IMP=0x00100000006e3919
- (id)attributedFirstPartDetailString;	// IMP=0x00100000006e379b
- (void)updateTheme;	// IMP=0x00100000006e35c3
- (void)setupPlaceContextContent:(id)arg1;	// IMP=0x00100000006e3589
- (double)trailingMargin;	// IMP=0x00100000006e357b
- (id)titleRegularFont;	// IMP=0x00100000006e3562
- (id)titleFont;	// IMP=0x00100000006e3549
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000006e3109

@end

