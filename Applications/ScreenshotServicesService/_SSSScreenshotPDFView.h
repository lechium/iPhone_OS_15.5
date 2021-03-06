//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, PDFView, SSSScreenshot, UIActivityIndicatorView, UIView, _SSSScreenshotContentOverlayController;

@interface _SSSScreenshotPDFView
{
    PDFView *_pdfView;	// 8 = 0x8
    UIActivityIndicatorView *_activityIndicatorView;	// 16 = 0x10
    long long _currentVellumPage;	// 24 = 0x18
    struct CGPoint _scrollOffset;	// 32 = 0x20
    double _scrollZoomScale;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000032d9c
- (void)updateViewState;	// IMP=0x0010000000032cdc
@property(readonly, nonatomic) long long currentPDFPage;
@property(readonly, nonatomic) PDFView *_pdfView;
@property(readonly, nonatomic) UIView *viewWithScreenshotImage;
- (void)exitMarkupMode;	// IMP=0x0010000000032bcb
- (void)enterMarkupMode;	// IMP=0x0010000000032b1d
- (MISSING_TYPE *)enterCropMode;	// IMP=0x0010000000032a45
- (void)setupOverlayControllerWithPDFDocument:(id)arg1;	// IMP=0x001000000003293d
- (void)setupPDFData;	// IMP=0x0010000000032788
- (id)undoManager;	// IMP=0x0010000000032733
@property(nonatomic) __weak SSSScreenshot *screenshot;
- (void)setCrop:(struct CGRect)arg1;	// IMP=0x00100000000324ff
- (struct CGSize)intrinsicContentSize;	// IMP=0x0010000000032425
- (void)layoutSubviews;	// IMP=0x0010000000031bc7
- (void)didMoveToWindow;	// IMP=0x0010000000031add
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000003172a

// Remaining properties
@property(retain, nonatomic) _SSSScreenshotContentOverlayController *overlayController;
@property(nonatomic) _Bool screenshotEditsSnapshotted;
@property(nonatomic) double vellumOpacity;

@end

