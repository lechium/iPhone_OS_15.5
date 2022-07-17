//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <MarkupUI/MUContentViewControllerDelegate-Protocol.h>
#import <MarkupUI/PKRulerHostingDelegate-Protocol.h>
#import <MarkupUI/UINavigationBarDelegate-Protocol.h>
#import <MarkupUI/UIToolbarDelegate-Protocol.h>

@class AKController, AKToolbarView, NSData, NSLayoutConstraint, NSString, NSUndoManager, PDFDocument, PDFView, UIBarButtonItem, UIColor, UIImage, UIImageView, UINavigationBar, UINavigationItem, UIScrollView, UIView, UTType;
@protocol MUContentViewControllerProtocol, MarkupViewControllerDelegate;

@interface MarkupViewController : UIViewController <MUContentViewControllerDelegate, UINavigationBarDelegate, UIToolbarDelegate, PKRulerHostingDelegate>
{
    UIColor *_backgroundColor;	// 8 = 0x8
    UIColor *_toolbarItemTintColor;	// 16 = 0x10
    UIColor *_toolbarTintColor;	// 24 = 0x18
    UIColor *_navBarTitleColor;	// 32 = 0x20
    _Bool _showingSignaturesUI;	// 40 = 0x28
    _Bool _pencilAlwaysDraws;	// 41 = 0x29
    _Bool _toolbarHidden;	// 42 = 0x2a
    _Bool _thumbnailViewHidden;	// 43 = 0x2b
    _Bool _showThumbnailViewForMultipage;	// 44 = 0x2c
    _Bool _navigationModeHorizontal;	// 45 = 0x2d
    _Bool _needToPerformFullTeardown;	// 46 = 0x2e
    _Bool _needToPerformDocumentClosedTeardown;	// 47 = 0x2f
    _Bool _observingAKCurrentPageIndex;	// 48 = 0x30
    _Bool _alreadyLoggedSavingForThisDocument;	// 49 = 0x31
    _Bool _needsToolPickerVisibleWhenAnnotationControllerIsAvailable;	// 50 = 0x32
    _Bool _useFancyTransition;	// 51 = 0x33
    _Bool _isAnimatingMarkupExtensionTransition;	// 52 = 0x34
    _Bool _userDidCancel;	// 53 = 0x35
    _Bool _showAsFormSheet;	// 54 = 0x36
    _Bool _encryptPrivateMetadata;	// 55 = 0x37
    _Bool _forcesPDFViewTopAlignment;	// 56 = 0x38
    _Bool _shapeDetectionEnabled;	// 57 = 0x39
    _Bool _allowShakeToUndo;	// 58 = 0x3a
    _Bool _centersIgnoringContentInsets;	// 59 = 0x3b
    _Bool _showShareButtonInToolbar;	// 60 = 0x3c
    long long _toolbarPosition;	// 64 = 0x40
    UINavigationBar *_navBar;	// 72 = 0x48
    UIViewController<MUContentViewControllerProtocol> *_contentViewController;	// 80 = 0x50
    NSString *_sourceContentType;	// 88 = 0x58
    id _sourceContent;	// 96 = 0x60
    id _digestedSourceContent;	// 104 = 0x68
    NSData *_archivedModelData;	// 112 = 0x70
    double _initialContentScale;	// 120 = 0x78
    UIView *_toolbar;	// 128 = 0x80
    AKToolbarView *_modernToolbar;	// 136 = 0x88
    NSLayoutConstraint *_toolbarTopConstraint;	// 144 = 0x90
    NSLayoutConstraint *_toolbarTopAttachedConstraint;	// 152 = 0x98
    NSLayoutConstraint *_toolbarBottomConstraint;	// 160 = 0xa0
    UINavigationItem *_navItem;	// 168 = 0xa8
    UIBarButtonItem *_cancelButton;	// 176 = 0xb0
    UIBarButtonItem *_doneButton;	// 184 = 0xb8
    UIImage *_placeholderImage;	// 192 = 0xc0
    NSString *_preferredFileDisplayName;	// 200 = 0xc8
    UIView *_contentContainerView;	// 208 = 0xd0
    UIView *_transitionDimmingView;	// 216 = 0xd8
    UIView *_whiteView;	// 224 = 0xe0
    NSString *_originalImageDescription;	// 232 = 0xe8
    NSString *_hostProcessBundleIdentifier;	// 240 = 0xf0
    NSUndoManager *_akUndoManager;	// 248 = 0xf8
    id <MarkupViewControllerDelegate> _delegate;	// 256 = 0x100
    UIImageView *_placeholderImageView;	// 264 = 0x108
    unsigned long long _inkStyle;	// 272 = 0x110
}

+ (double)_maxImageDimensionInView;	// IMP=0x00000000000090b8
+ (_Bool)_isInLowMemoryEnvironment;	// IMP=0x000000000000909f
+ (id)markupBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000008fbc
+ (id)cleanImageMetadataFromData:(id)arg1;	// IMP=0x0000000000008eb0
+ (_Bool)hasPrivateImageMetadata:(id)arg1;	// IMP=0x0000000000008e97
+ (id)supportedOutputTypes;	// IMP=0x0000000000005974
- (void).cxx_destruct;	// IMP=0x000000000000e255
@property unsigned long long inkStyle; // @synthesize inkStyle=_inkStyle;
@property(retain) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(nonatomic) _Bool showShareButtonInToolbar; // @synthesize showShareButtonInToolbar=_showShareButtonInToolbar;
@property(nonatomic) _Bool centersIgnoringContentInsets; // @synthesize centersIgnoringContentInsets=_centersIgnoringContentInsets;
@property(nonatomic) __weak id <MarkupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowShakeToUndo; // @synthesize allowShakeToUndo=_allowShakeToUndo;
@property(retain, nonatomic) NSUndoManager *akUndoManager; // @synthesize akUndoManager=_akUndoManager;
@property(nonatomic, getter=isShapeDetectionEnabled) _Bool shapeDetectionEnabled; // @synthesize shapeDetectionEnabled=_shapeDetectionEnabled;
@property(nonatomic) _Bool forcesPDFViewTopAlignment; // @synthesize forcesPDFViewTopAlignment=_forcesPDFViewTopAlignment;
@property(copy, nonatomic) NSString *hostProcessBundleIdentifier; // @synthesize hostProcessBundleIdentifier=_hostProcessBundleIdentifier;
@property _Bool encryptPrivateMetadata; // @synthesize encryptPrivateMetadata=_encryptPrivateMetadata;
@property(copy, nonatomic) NSString *originalImageDescription; // @synthesize originalImageDescription=_originalImageDescription;
@property _Bool showAsFormSheet; // @synthesize showAsFormSheet=_showAsFormSheet;
@property _Bool userDidCancel; // @synthesize userDidCancel=_userDidCancel;
@property _Bool isAnimatingMarkupExtensionTransition; // @synthesize isAnimatingMarkupExtensionTransition=_isAnimatingMarkupExtensionTransition;
@property _Bool useFancyTransition; // @synthesize useFancyTransition=_useFancyTransition;
@property(retain) UIView *whiteView; // @synthesize whiteView=_whiteView;
@property(retain) UIView *transitionDimmingView; // @synthesize transitionDimmingView=_transitionDimmingView;
@property(retain) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(copy, nonatomic) NSString *preferredFileDisplayName; // @synthesize preferredFileDisplayName=_preferredFileDisplayName;
@property(nonatomic) _Bool needsToolPickerVisibleWhenAnnotationControllerIsAvailable; // @synthesize needsToolPickerVisibleWhenAnnotationControllerIsAvailable=_needsToolPickerVisibleWhenAnnotationControllerIsAvailable;
@property(nonatomic) _Bool alreadyLoggedSavingForThisDocument; // @synthesize alreadyLoggedSavingForThisDocument=_alreadyLoggedSavingForThisDocument;
@property(retain) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UINavigationItem *navItem; // @synthesize navItem=_navItem;
@property(retain) NSLayoutConstraint *toolbarBottomConstraint; // @synthesize toolbarBottomConstraint=_toolbarBottomConstraint;
@property(retain) NSLayoutConstraint *toolbarTopAttachedConstraint; // @synthesize toolbarTopAttachedConstraint=_toolbarTopAttachedConstraint;
@property(retain) NSLayoutConstraint *toolbarTopConstraint; // @synthesize toolbarTopConstraint=_toolbarTopConstraint;
@property(retain) AKToolbarView *modernToolbar; // @synthesize modernToolbar=_modernToolbar;
@property(retain, nonatomic) UIView *toolbar; // @synthesize toolbar=_toolbar;
@property double initialContentScale; // @synthesize initialContentScale=_initialContentScale;
@property(retain) NSData *archivedModelData; // @synthesize archivedModelData=_archivedModelData;
@property(retain) id digestedSourceContent; // @synthesize digestedSourceContent=_digestedSourceContent;
@property(retain, nonatomic) id sourceContent; // @synthesize sourceContent=_sourceContent;
@property(retain) NSString *sourceContentType; // @synthesize sourceContentType=_sourceContentType;
@property(getter=isObservingAKCurrentPageIndex) _Bool observingAKCurrentPageIndex; // @synthesize observingAKCurrentPageIndex=_observingAKCurrentPageIndex;
@property _Bool needToPerformDocumentClosedTeardown; // @synthesize needToPerformDocumentClosedTeardown=_needToPerformDocumentClosedTeardown;
@property _Bool needToPerformFullTeardown; // @synthesize needToPerformFullTeardown=_needToPerformFullTeardown;
@property(retain) UIViewController<MUContentViewControllerProtocol> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic, getter=isNavigationModeHorizontal) _Bool navigationModeHorizontal; // @synthesize navigationModeHorizontal=_navigationModeHorizontal;
@property(nonatomic) _Bool showThumbnailViewForMultipage; // @synthesize showThumbnailViewForMultipage=_showThumbnailViewForMultipage;
@property(nonatomic, getter=isThumbnailViewHidden) _Bool thumbnailViewHidden; // @synthesize thumbnailViewHidden=_thumbnailViewHidden;
@property(retain, nonatomic) UINavigationBar *navBar; // @synthesize navBar=_navBar;
@property(nonatomic) long long toolbarPosition; // @synthesize toolbarPosition=_toolbarPosition;
@property(nonatomic, getter=isToolbarHidden) _Bool toolbarHidden; // @synthesize toolbarHidden=_toolbarHidden;
- (id)getMenuElementsForPage:(id)arg1;	// IMP=0x000000000000dc12
- (long long)toolbarController:(id)arg1 positionForBar:(id)arg2;	// IMP=0x000000000000dc01
- (void)_toolbarShareButtonTapped:(id)arg1;	// IMP=0x000000000000db9d
- (long long)positionForBar:(id)arg1;	// IMP=0x000000000000daa5
@property(readonly) struct CGSize adjustedSourceImageSize;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;	// IMP=0x000000000000da86
- (void)controllerWillDismissSignatureManagerView:(id)arg1;	// IMP=0x000000000000da75
- (void)controllerWillShowSignatureManagerView:(id)arg1;	// IMP=0x000000000000da64
- (void)controllerWillDismissSignatureCaptureView:(id)arg1;	// IMP=0x000000000000da53
- (void)controllerWillShowSignatureCaptureView:(id)arg1;	// IMP=0x000000000000da42
- (void)penStrokeCompletedForAnnotationController:(id)arg1;	// IMP=0x000000000000da3c
- (void)annotationController:(id)arg1 detectedEditOfType:(unsigned long long)arg2;	// IMP=0x000000000000da36
- (void)editDetectedForAnnotationController:(id)arg1;	// IMP=0x000000000000da30
- (void)editCheckpointReachedForAnnotationController:(id)arg1;	// IMP=0x000000000000da2a
- (_Bool)contentViewController:(id)arg1 shouldHandleURL:(id)arg2;	// IMP=0x000000000000d99f
- (id)annotationControllerOfContentViewController:(id)arg1 willSetToolbarItems:(id)arg2;	// IMP=0x000000000000d799
- (void)positionSketchOverlay:(id)arg1 forContentViewController:(id)arg2;	// IMP=0x000000000000d36d
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forContentViewController:(id)arg2;	// IMP=0x000000000000d35b
- (id)undoManagerForContentViewController:(id)arg1;	// IMP=0x000000000000d349
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x000000000000d1ac
- (void)_showTextStyleOptions:(id)arg1;	// IMP=0x000000000000d107
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;	// IMP=0x000000000000c9cb
- (void)editTextAnnotation:(id)arg1;	// IMP=0x000000000000c926
- (void)duplicate:(id)arg1;	// IMP=0x000000000000c881
- (void)delete:(id)arg1;	// IMP=0x000000000000c7dc
@property(readonly) _Bool isUsedOnDarkBackground;
- (id)_effectiveNavBarTitleColor;	// IMP=0x000000000000c6f8
@property(copy) UIColor *navBarTitleColor;
- (id)_effectiveToolbarTintColor;	// IMP=0x000000000000c4eb
@property(copy) UIColor *toolbarTintColor;
- (id)_effectiveToolbarItemTintColor;	// IMP=0x000000000000c334
@property(copy) UIColor *toolbarItemTintColor;
- (id)_effectiveBackgroundColor;	// IMP=0x000000000000c143
@property(copy) UIColor *backgroundColor;
- (void)_updateNavBarProperties;	// IMP=0x000000000000bedd
- (void)_updateAppearanceForTraitCollection:(id)arg1;	// IMP=0x000000000000bba3
- (void)_updateConstraintsForBarPosition:(long long)arg1;	// IMP=0x000000000000b7be
- (void)adjustContentInsetsForBars;	// IMP=0x000000000000b05a
- (void)_createCancelDoneNavBar;	// IMP=0x000000000000ab10
- (_Bool)rulerHostWantsSharedRuler;	// IMP=0x000000000000ab08
- (id)rulerHostingView;	// IMP=0x000000000000aaf6
- (void)_setupAnnotationController;	// IMP=0x000000000000a2f5
- (void)_installContentViewControllerForUTI:(id)arg1;	// IMP=0x0000000000009db7
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000009b78
- (void)_stopObservingAnnotationController;	// IMP=0x0000000000009ac7
- (void)_startObservingAnnotationController;	// IMP=0x0000000000009a0d
- (void)_cleanupPlaceholderImage;	// IMP=0x00000000000099a4
- (void)_presentPlaceholderImage;	// IMP=0x00000000000096ff
- (void)_updateundoBarButtonWithController:(id)arg1;	// IMP=0x0000000000009303
- (_Bool)_shouldShowUndoRedoButtonsInNavigationBar;	// IMP=0x0000000000009274
- (void)_setupInitialBaseModelScaleFactorWithScreenSize:(struct CGSize)arg1 windowDecorationSize:(struct CGSize)arg2;	// IMP=0x00000000000091a7
- (_Bool)_sourceImageMayContainBaseImageAndModel;	// IMP=0x000000000000919f
- (void)_bailFailedAnimateEnterMarkup;	// IMP=0x0000000000009199
@property(readonly, nonatomic) AKController *annotationController;
- (id)filteredToolbarItemsForItems:(id)arg1 fromController:(id)arg2;	// IMP=0x0000000000008ef8
- (id)_markupBlackColor;	// IMP=0x0000000000008ec9
@property(nonatomic) unsigned long long currentPDFPageIndex;
@property(readonly, nonatomic) UIView *imageViewCombinedContentView;
@property(readonly, nonatomic) UIScrollView *contentViewScrollView;
@property(nonatomic) _Bool allowsThumbnailViewPageReordering;
@property(nonatomic) long long thumbnailViewStyle;
@property(readonly) __weak UIView *pageLabelView;
@property(readonly) PDFView *pdfView;
@property(readonly) PDFDocument *pdfDocument;
- (void)setSourceContent:(id)arg1 withArchivedModelData:(id)arg2;	// IMP=0x0000000000007ace
- (void)_saveEditing:(id)arg1;	// IMP=0x0000000000007431
@property(nonatomic) _Bool pencilAlwaysDraws; // @synthesize pencilAlwaysDraws=_pencilAlwaysDraws;
@property(nonatomic) _Bool annotationEditingEnabled;
- (void)restoreToolModeForContentType;	// IMP=0x00000000000071e5
@property(nonatomic) _Bool allEditingDisabled;
- (void)_loadSourceContentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006bef
- (void)_updateAndLoadSourceContent:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000672f
- (void)_setData:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000671d
- (_Bool)_writeToDataConsumer:(struct CGDataConsumer *)arg1 embedSourceImageAndEditModel:(_Bool)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000006384
- (_Bool)_writeToDataConsumer:(struct CGDataConsumer *)arg1 embedSourceImageAndEditModel:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000000636c
- (void)revert;	// IMP=0x0000000000006270
- (void)_cancel;	// IMP=0x0000000000006193
- (void)cancel:(id)arg1;	// IMP=0x0000000000005ea0
- (void)done:(id)arg1;	// IMP=0x0000000000005e8c
- (void)finalizeCrop;	// IMP=0x0000000000005e23
- (id)createArchivedModelData;	// IMP=0x0000000000005da7
- (id)dataRepresentationWithError:(id *)arg1;	// IMP=0x0000000000005d8d
- (id)dataRepresentationEmbeddingSourceImageAndEditModel:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000000005a97
- (_Bool)writeToURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000005a7a
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005a60
- (_Bool)writeToURL:(id)arg1 embeddingSourceImageAndEditModel:(_Bool)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000005999
- (_Bool)writeToURL:(id)arg1 embeddingSourceImageAndEditModel:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000005981
@property(readonly, nonatomic) NSString *outputType;
@property(readonly, nonatomic) UTType *outputContentType;
- (void)setData:(id)arg1;	// IMP=0x00000000000057cb
- (void)setData:(id)arg1 withArchivedModelData:(id)arg2;	// IMP=0x00000000000057b6
- (void)setData:(id)arg1 withArchivedModelData:(id)arg2 placeholderImage:(id)arg3;	// IMP=0x00000000000055fc
- (void)setImage:(id)arg1;	// IMP=0x00000000000055e5
- (void)setImage:(id)arg1 withArchivedModelData:(id)arg2;	// IMP=0x00000000000055d0
- (void)setImage:(id)arg1 withArchivedModelData:(id)arg2 placeholderImage:(id)arg3;	// IMP=0x00000000000053f6
- (void)setFileURL:(id)arg1;	// IMP=0x00000000000053df
- (void)_setFileURL:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000520a
- (void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2;	// IMP=0x00000000000051f5
- (void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2 placeholderImage:(id)arg3;	// IMP=0x0000000000004e5d
- (_Bool)isTouchInThumbnailView:(id)arg1;	// IMP=0x0000000000004d39
@property(nonatomic) _Bool fixedThumbnailView;
- (void)_setThumbnailViewHidden:(_Bool)arg1;	// IMP=0x0000000000004b86
- (void)setToolbarHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000004870
- (void)_setLegacyToolbarHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000004548
- (_Bool)_useLegacyToolbar;	// IMP=0x0000000000004460
- (long long)preferredStatusBarStyle;	// IMP=0x0000000000004418
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000042c6
- (struct UIEdgeInsets)sketchOverlayInsets;	// IMP=0x0000000000004209
- (id)undoManager;	// IMP=0x00000000000041f7
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000004179
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000004138
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000004124
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000003ff0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000003f56
- (void)viewDidLoad;	// IMP=0x0000000000003c0e
- (void)documentDidCloseTeardown;	// IMP=0x000000000000374f
- (void)fullTeardown;	// IMP=0x00000000000036de
- (void)willBeginLoadingNewDocument;	// IMP=0x0000000000003699
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000003691
- (void)dealloc;	// IMP=0x0000000000003653
- (void)_commonInit;	// IMP=0x0000000000003488
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000000343c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000033f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
