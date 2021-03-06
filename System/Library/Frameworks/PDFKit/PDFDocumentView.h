//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PDFKit/PDFDocumentPageChangeDelegate-Protocol.h>
#import <PDFKit/PDFPageBackgroundManagerDelegate-Protocol.h>
#import <PDFKit/PDFTextInputDelegate-Protocol.h>

@class NSString, PDFDocumentViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFDocumentView <PDFPageBackgroundManagerDelegate, PDFDocumentPageChangeDelegate, PDFTextInputDelegate>
{
    PDFDocumentViewPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000049001
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000048f10
- (id)pdfView;	// IMP=0x0000000000048eef
- (void)recieveBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2 forPage:(id)arg3;	// IMP=0x0000000000048d9c
- (id)backgroundImageForPage:(id)arg1 withQuality:(int *)arg2;	// IMP=0x0000000000048c30
- (void)didRotatePageNotification:(id)arg1;	// IMP=0x0000000000048af9
- (void)changedBoundsForBoxNotification:(id)arg1;	// IMP=0x0000000000048ad4
- (void)_updateVisibilityDelegateForVisiblePageView:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000489af
- (void)_reAddPageOverlaysStartingAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004877a
- (void)_removePageOverlaysStartingAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000048523
- (void)_shiftPagesAtIndex:(unsigned long long)arg1 downwards:(_Bool)arg2;	// IMP=0x00000000000480cd
- (void)didSwapPage:(id)arg1 atIndex:(unsigned long long)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000047d6b
- (void)willSwapPage:(id)arg1 atIndex:(unsigned long long)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000047bd9
- (void)didRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000479f7
- (void)willRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000004791a
- (void)didInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000004773e
- (void)willInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000047729
- (struct CGPoint)_pixelAlignPageFrameOrigin:(struct CGRect)arg1;	// IMP=0x0000000000047719
- (id)_createPageView:(id)arg1;	// IMP=0x00000000000475d6
- (id)pageBackgroundManager;	// IMP=0x00000000000475bd
- (void)forceUpdateActivePageIndex:(unsigned long long)arg1 withMaxDuration:(double)arg2;	// IMP=0x000000000004756a
- (void)willForceUpdate;	// IMP=0x0000000000047549
- (void)previewRotateShiftPages:(double)arg1;	// IMP=0x0000000000047367
- (void)_updateVisibility;	// IMP=0x0000000000046b13
- (void)updateVisibility;	// IMP=0x0000000000046a6e
- (struct CGSize)documentViewSize;	// IMP=0x0000000000046a53
- (void)layoutDocumentView;	// IMP=0x00000000000463ce
- (id)pageViews;	// IMP=0x00000000000463ad
- (void)removePageViewForPageAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004621c
- (id)createPageViewForPageAtIndex:(unsigned long long)arg1 withFrame:(struct CGRect)arg2;	// IMP=0x0000000000045de1
- (id)pageViewForPageAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000045d3a
- (id)document;	// IMP=0x0000000000045d19
- (void)setDocument:(id)arg1;	// IMP=0x00000000000458e7
- (void)dealloc;	// IMP=0x000000000004583b
- (id)initWithPDFView:(id)arg1;	// IMP=0x0000000000045625

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

