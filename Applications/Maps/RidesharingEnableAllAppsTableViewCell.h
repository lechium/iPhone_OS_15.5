//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BackgroundColorButton, MapsThemeMultiPartLabel;
@protocol RidesharingEnableAllAppsTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface RidesharingEnableAllAppsTableViewCell
{
    id <RidesharingEnableAllAppsTableViewCellDelegate> _delegate;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    BackgroundColorButton *_enableButton;	// 24 = 0x18
    MapsThemeMultiPartLabel *_secondaryLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000071bea2
@property(readonly, nonatomic) MapsThemeMultiPartLabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) BackgroundColorButton *enableButton; // @synthesize enableButton=_enableButton;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <RidesharingEnableAllAppsTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_enableButtonPressed:(id)arg1;	// IMP=0x001000000071bde5
- (void)configureForType:(unsigned long long)arg1;	// IMP=0x001000000071bcf3
- (void)_setupConstraints;	// IMP=0x001000000071b69a
- (void)updateTheme;	// IMP=0x001000000071b51f
- (void)_setupViews;	// IMP=0x001000000071b1c2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000071b150

@end
