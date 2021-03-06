//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKMuninView, MKViewWithHairline, MuninTrayHeaderViewController, MuninVibrantBackgroundButton, NSDateFormatter, NSLayoutConstraint, NSString, UILabel, UILayoutGuide, UIScrollView, UIStackView, UIView;
@protocol MuninActionCoordination, MuninTrayContaineeViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MuninTrayContaineeViewController
{
    _Bool _visible;	// 8 = 0x8
    id <MuninActionCoordination> _actionCoordinator;	// 16 = 0x10
    id <MuninTrayContaineeViewControllerDelegate> _delegate;	// 24 = 0x18
    NSDateFormatter *_dateFormatter;	// 32 = 0x20
    MKMuninView *_muninView;	// 40 = 0x28
    MuninTrayHeaderViewController *_headerViewController;	// 48 = 0x30
    UIScrollView *_scrollView;	// 56 = 0x38
    UIView *_containerView;	// 64 = 0x40
    UILayoutGuide *_containerLayoutGuide;	// 72 = 0x48
    UIStackView *_buttonStackView;	// 80 = 0x50
    MuninVibrantBackgroundButton *_toggleLabelsButton;	// 88 = 0x58
    MuninVibrantBackgroundButton *_shareButton;	// 96 = 0x60
    MuninVibrantBackgroundButton *_reportAnIssueButton;	// 104 = 0x68
    UILabel *_lastUpdatedLabel;	// 112 = 0x70
    MKViewWithHairline *_grabberSafeAreaView;	// 120 = 0x78
    NSLayoutConstraint *_grabberSafeAreaHeightConstraint;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00200000002b9bdb
@property(retain, nonatomic) NSLayoutConstraint *grabberSafeAreaHeightConstraint; // @synthesize grabberSafeAreaHeightConstraint=_grabberSafeAreaHeightConstraint;
@property(retain, nonatomic) MKViewWithHairline *grabberSafeAreaView; // @synthesize grabberSafeAreaView=_grabberSafeAreaView;
@property(retain, nonatomic) UILabel *lastUpdatedLabel; // @synthesize lastUpdatedLabel=_lastUpdatedLabel;
@property(retain, nonatomic) MuninVibrantBackgroundButton *reportAnIssueButton; // @synthesize reportAnIssueButton=_reportAnIssueButton;
@property(retain, nonatomic) MuninVibrantBackgroundButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) MuninVibrantBackgroundButton *toggleLabelsButton; // @synthesize toggleLabelsButton=_toggleLabelsButton;
@property(retain, nonatomic) UIStackView *buttonStackView; // @synthesize buttonStackView=_buttonStackView;
@property(retain, nonatomic) UILayoutGuide *containerLayoutGuide; // @synthesize containerLayoutGuide=_containerLayoutGuide;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MuninTrayHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(retain, nonatomic) MKMuninView *muninView; // @synthesize muninView=_muninView;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <MuninTrayContaineeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MuninActionCoordination> actionCoordinator; // @synthesize actionCoordinator=_actionCoordinator;
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000002b9953
- (void)_updateLabelsButton;	// IMP=0x00100000002b97f8
- (void)_setupViews;	// IMP=0x00100000002b9017
- (void)_setupConstraints;	// IMP=0x00100000002b7cae
- (void)reportAnIssueButtonTapped:(id)arg1;	// IMP=0x00100000002b7c39
- (void)shareButtonTapped:(id)arg1;	// IMP=0x00100000002b7bc4
- (void)toggleLabelsButtonTapped:(id)arg1;	// IMP=0x00100000002b7b42
- (void)trayHeaderDidReceiveTap;	// IMP=0x00100000002b7a89
- (void)trayHeaderButtonDidTouchUpInside:(id)arg1;	// IMP=0x00100000002b7a83
- (void)_captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3;	// IMP=0x00100000002b7930
- (void)willChangeContainerStyle:(unsigned long long)arg1;	// IMP=0x00100000002b7820
- (void)willChangeLayout:(unsigned long long)arg1;	// IMP=0x00100000002b7739
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x00100000002b761f
- (id)contentView;	// IMP=0x00100000002b760a
- (id)headerView;	// IMP=0x00100000002b75ed
- (double)headerHeight;	// IMP=0x00100000002b74f3
- (long long)preferredUserInterfaceStyle;	// IMP=0x00100000002b74e8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000002b7465
- (void)viewDidLoad;	// IMP=0x00100000002b73da
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000002b7277
@property(readonly, nonatomic) _Bool supportsMuninPIP;
- (void)updateLocation;	// IMP=0x00100000002b6ea8
- (id)initWithMuninView:(id)arg1;	// IMP=0x00100000002b6d75
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000002b6d6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

