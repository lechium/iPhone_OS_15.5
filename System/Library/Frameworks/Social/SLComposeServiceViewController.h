//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <Social/UINavigationControllerDelegate-Protocol.h>
#import <Social/UITextViewDelegate-Protocol.h>

@class NSMutableArray, NSNumber, NSObject, NSString, SLSheetContentView, SLSheetMasklayer, SLSheetNavigationController, SLSheetPreviewImageSource, SLSheetRootViewController, UIAlertController, UIImage, UITextView, UIView;
@protocol SLSheetViewHostProtocol;

@interface SLComposeServiceViewController : UIViewController <UINavigationControllerDelegate, UITextViewDelegate>
{
    NSObject<SLSheetViewHostProtocol> *_hostProxy;	// 8 = 0x8
    unsigned long long _unfulfilledItemProviderRepresentations;	// 16 = 0x10
    NSMutableArray *_attachments;	// 24 = 0x18
    UIImage *_serviceIconImage;	// 32 = 0x20
    NSNumber *_charactersRemaining;	// 40 = 0x28
    SLSheetContentView *_contentView;	// 48 = 0x30
    SLSheetMasklayer *_vignetteLayer;	// 56 = 0x38
    UIAlertController *_alertController;	// 64 = 0x40
    _Bool _isShowingLocationDeniedAlert;	// 72 = 0x48
    _Bool _isPresentingActionViewController;	// 73 = 0x49
    _Bool _autoCompletionViewControllerAffectsSheetSize;	// 74 = 0x4a
    SLSheetPreviewImageSource *_previewImageSource;	// 80 = 0x50
    UIView *_maskView;	// 88 = 0x58
    _Bool _didFirstSheetActionLoad;	// 96 = 0x60
    _Bool _didCallPresentSheet;	// 97 = 0x61
    _Bool _triggerPresentationAnimationOnKeyboard;	// 98 = 0x62
    _Bool _hasPresentedSheet;	// 99 = 0x63
    _Bool _inPostButtonTapped;	// 100 = 0x64
    _Bool _waitingForAnimateAlongsideTransitionBlock;	// 101 = 0x65
    struct CGRect _sheetFrameStartingRotation;	// 104 = 0x68
    UIViewController *_viewControllerForTrackingSheetSize;	// 136 = 0x88
    _Bool _preventSheetPositionChanges;	// 144 = 0x90
    _Bool _wasPresented;	// 145 = 0x91
    _Bool _suppressKeyboard;	// 146 = 0x92
    NSString *_placeholder;	// 152 = 0x98
    UIViewController *_autoCompletionViewController;	// 160 = 0xa0
    NSMutableArray *_constraints;	// 168 = 0xa8
    SLSheetRootViewController *_sheetRootViewController;	// 176 = 0xb0
    SLSheetNavigationController *_navigationController;	// 184 = 0xb8
    unsigned long long _maxImageAttachmentSize;	// 192 = 0xc0
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x000000000003cb72
+ (id)_imageAttachmentLoadDownsamplePreviewQueue;	// IMP=0x0000000000036990
+ (_Bool)_preventsAppearanceProxyCustomization;	// IMP=0x0000000000035758
- (void).cxx_destruct;	// IMP=0x000000000003f37e
@property(nonatomic) unsigned long long maxImageAttachmentSize; // @synthesize maxImageAttachmentSize=_maxImageAttachmentSize;
@property(nonatomic) _Bool suppressKeyboard; // @synthesize suppressKeyboard=_suppressKeyboard;
@property(readonly) _Bool wasPresented; // @synthesize wasPresented=_wasPresented;
@property(nonatomic) _Bool preventSheetPositionChanges; // @synthesize preventSheetPositionChanges=_preventSheetPositionChanges;
@property(retain, nonatomic) SLSheetNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) SLSheetRootViewController *sheetRootViewController; // @synthesize sheetRootViewController=_sheetRootViewController;
@property(retain) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) SLSheetContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIViewController *autoCompletionViewController; // @synthesize autoCompletionViewController=_autoCompletionViewController;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void)networkActivityIndicatorNotification:(id)arg1;	// IMP=0x000000000003f1ec
- (void)shouldShowNetworkActivityIndicator:(_Bool)arg1;	// IMP=0x000000000003f176
- (void)didReceiveMemoryWarning;	// IMP=0x000000000003f12e
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000003f0ff
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000003f0e2
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000003f057
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000003eec0
- (void)viewDidLoad;	// IMP=0x000000000003ee3f
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x000000000003ee37
- (_Bool)shouldAutorotate;	// IMP=0x000000000003ee2f
- (void)_convertExtensionItemProvidersToAttachments:(id)arg1;	// IMP=0x000000000003e2ad
- (void)loadView;	// IMP=0x000000000003d45f
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000003cb7a
- (void)setHostProxy:(id)arg1;	// IMP=0x000000000003cb5e
- (void)_willAppearInRemoteViewController;	// IMP=0x000000000003ca80
- (double)_sheetMinBottomMarginForVerticalSizeClass;	// IMP=0x000000000003c98a
- (struct CGRect)sheetFrameForViewController:(id)arg1 topSpaceProportion:(double)arg2 topSpaceOffset:(double)arg3;	// IMP=0x000000000003c2c6
- (struct CGRect)sheetFrameForViewController:(id)arg1;	// IMP=0x000000000003c0f6
- (struct CGSize)_intrinsicSheetSize;	// IMP=0x000000000003bcd1
@property(readonly) UIView *sheetView;
- (void)_positionVignetteForSheetFrame:(struct CGRect)arg1;	// IMP=0x000000000003b993
- (void)setSheetFrame:(struct CGRect)arg1;	// IMP=0x000000000003b892
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000003b7b8
- (void)updateKeyboardSize;	// IMP=0x000000000003b782
- (void)keyboardDidChange:(id)arg1;	// IMP=0x000000000003b70b
- (void)_animateSheetCancelFinished;	// IMP=0x000000000003b69f
- (void)animateSheetCancelWithDuration:(double)arg1;	// IMP=0x000000000003b318
- (void)presentationAnimationDidFinish;	// IMP=0x000000000003b312
- (void)_animateSheetPresentationFinished;	// IMP=0x000000000003b2ca
- (void)animateSheetPresentationWithDuration:(double)arg1;	// IMP=0x000000000003ad52
- (void)_presentSheet;	// IMP=0x000000000003acf1
- (void)_animateCardSendFinished;	// IMP=0x000000000003ac6b
- (void)animateCardSendOrientation:(long long)arg1;	// IMP=0x000000000003a73f
- (void)presentSettingsAlertWithTitle:(id)arg1 message:(id)arg2 targetURL:(id)arg3;	// IMP=0x000000000003a739
- (void)postButtonTapped:(id)arg1;	// IMP=0x000000000003a64c
- (void)cancelButtonTapped:(id)arg1;	// IMP=0x000000000003a616
- (void)setServiceIconImage:(id)arg1;	// IMP=0x000000000003a59b
- (void)setTitle:(id)arg1;	// IMP=0x000000000003a507
- (void)setPostButtonTitle:(id)arg1;	// IMP=0x000000000003a495
- (void)reloadSheetActions;	// IMP=0x000000000003a039
- (void)pushActionViewController:(id)arg1;	// IMP=0x000000000003a027
- (void)popConfigurationViewController;	// IMP=0x0000000000039faa
- (void)_animateVignetteMaskFromSheetFrame:(struct CGRect)arg1 toSheetFrame:(struct CGRect)arg2 duration:(double)arg3;	// IMP=0x0000000000039e40
- (void)_positionSheetViewAnimatedForViewController:(id)arg1;	// IMP=0x0000000000039be6
- (void)_presentedViewControllerContentSizeDidChange;	// IMP=0x0000000000039b15
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000039a51
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000399a7
- (void)_setViewControllerForTrackingSheetSize:(id)arg1;	// IMP=0x0000000000039929
- (void)pushConfigurationViewController:(id)arg1;	// IMP=0x000000000003987f
- (void)reloadConfigurationItems;	// IMP=0x00000000000397a1
- (id)sheetActions;	// IMP=0x0000000000039794
- (id)configurationItems;	// IMP=0x0000000000039787
- (void)didSendWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000000039781
- (void)cancel;	// IMP=0x0000000000039767
- (void)send;	// IMP=0x0000000000039744
- (void)didSelectCancel;	// IMP=0x0000000000039697
- (void)didSelectPost;	// IMP=0x0000000000039632
- (void)createPreviewIfNeeded;	// IMP=0x000000000003962c
- (id)loadPreviewView;	// IMP=0x0000000000038477
- (long long)_previewDisplayFormat;	// IMP=0x0000000000038319
- (void)_adjustContentViewIntrinsicHeightForPreviewView;	// IMP=0x00000000000380e2
- (void)_loadPreviewView;	// IMP=0x0000000000037fd7
- (void)_downsampleImageAttachment:(id)arg1;	// IMP=0x0000000000037af0
- (void)_imageAttachmentDataDidLoad:(id)arg1;	// IMP=0x0000000000037696
- (void)_loadImageAttachmentData:(id)arg1;	// IMP=0x0000000000036a13
- (id)URLAttachments;	// IMP=0x00000000000368b8
- (void)validateContent;	// IMP=0x000000000003676b
- (_Bool)_areAttachmentsReady;	// IMP=0x00000000000365d1
- (void)_addAttachment:(id)arg1;	// IMP=0x0000000000036514
- (void)addAttachment:(id)arg1;	// IMP=0x0000000000036502
- (_Bool)isContentValid;	// IMP=0x00000000000364fa
- (id)attachments;	// IMP=0x00000000000364e5
- (void)textViewDidChange:(id)arg1;	// IMP=0x00000000000364d3
- (void)setPlaceholderText:(id)arg1;	// IMP=0x00000000000364c1
- (id)text;	// IMP=0x0000000000036388
@property(readonly, nonatomic) NSString *contentText;
@property(readonly, nonatomic) UITextView *textView;
- (void)_updateContentViewWithCharactersRemaining;	// IMP=0x0000000000036067
@property(retain, nonatomic) NSNumber *charactersRemaining;
- (void)hideKeyboardWithAnimationTime:(double)arg1;	// IMP=0x0000000000035f67
- (void)showKeyboardWithAnimationTime:(double)arg1;	// IMP=0x0000000000035ed6
- (void)hideKeyboardAnimated:(_Bool)arg1;	// IMP=0x0000000000035e51
- (void)showKeyboardAnimated:(_Bool)arg1;	// IMP=0x0000000000035db5
- (void)keyboardWillShow:(id)arg1;	// IMP=0x0000000000035d6b
- (void)keyboardWillHide:(id)arg1;	// IMP=0x0000000000035d65
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000035a67
- (void)updateSheetForVerticalSizeClass;	// IMP=0x000000000003596d
- (void)positionSheetView;	// IMP=0x00000000000358e4
- (void)_positionSheetViewForViewController:(id)arg1;	// IMP=0x00000000000357a1
- (id)previewImageSource;	// IMP=0x0000000000035760
- (void)dealloc;	// IMP=0x00000000000356ba
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000035632
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000035585
- (id)initWithServiceIconImage:(id)arg1;	// IMP=0x0000000000035502
- (void)_performCommonInitialization:(id)arg1;	// IMP=0x00000000000352d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
