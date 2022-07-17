//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class ICQInternetPrivacyViewModel, NSString, UIImageView, UILabel, UIScrollView, UIStackView;

@interface ICQInternetPrivacySheet : UIViewController
{
    UIScrollView *_scrollView;	// 8 = 0x8
    UIStackView *_stackView;	// 16 = 0x10
    UIImageView *_iconView;	// 24 = 0x18
    NSString *_headerText;	// 32 = 0x20
    UILabel *_heaerLabel;	// 40 = 0x28
    NSString *_bodyText;	// 48 = 0x30
    UILabel *_bodyLabel;	// 56 = 0x38
    ICQInternetPrivacyViewModel *_viewModel;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000004cb78
@property(nonatomic) __weak ICQInternetPrivacyViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(copy, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
@property(retain, nonatomic) UILabel *heaerLabel; // @synthesize heaerLabel=_heaerLabel;
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (_Bool)_deviceIsiPad;	// IMP=0x000000000004c9fe
- (void)doneButtonTapped:(id)arg1;	// IMP=0x000000000004c9e5
- (void)addBodyText;	// IMP=0x000000000004c79f
- (void)addHeaderText;	// IMP=0x000000000004c663
- (id)createTextViewWithText:(id)arg1;	// IMP=0x000000000004c57a
- (void)addHeaderIcon;	// IMP=0x000000000004c4bc
- (void)setupStack;	// IMP=0x000000000004c03b
- (void)setupScrollView;	// IMP=0x000000000004bc50
- (void)setupUI;	// IMP=0x000000000004bb34
- (void)viewDidLoad;	// IMP=0x000000000004baf3
- (void)setTextForIdentifier:(id)arg1;	// IMP=0x000000000004b6f4
- (id)initWithIdentifier:(id)arg1 viewModel:(id)arg2;	// IMP=0x000000000004b658

@end
