//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/SXFullscreenCanvasShowable-Protocol.h>
#import <Silex/SXFullscreenCaptionDataSource-Protocol.h>
#import <Silex/SXImageViewDelegate-Protocol.h>
#import <Silex/SXMosaicGalleryLayouterDataSource-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSMutableArray, NSMutableSet, NSString, SXFullscreenCanvasController, SXMediaViewEvent, SXMosaicGalleryLayouter, UIView;
@protocol SXGalleryItemImageViewFactory;

@interface SXMosaicGalleryComponentView <SXMosaicGalleryLayouterDataSource, SXFullscreenCanvasShowable, SXImageViewDelegate, SXFullscreenCaptionDataSource, SXViewportChangeListener>
{
    _Bool _loadedAtleastOneImage;	// 8 = 0x8
    _Bool _layoutRequired;	// 9 = 0x9
    id <SXGalleryItemImageViewFactory> _imageViewFactory;	// 16 = 0x10
    SXFullscreenCanvasController *_fullScreenCanvasController;	// 24 = 0x18
    UIView *_galleryView;	// 32 = 0x20
    NSMutableArray *_imageViews;	// 40 = 0x28
    NSMutableArray *_visibleImageViews;	// 48 = 0x30
    SXMediaViewEvent *_mediaViewEvent;	// 56 = 0x38
    SXMosaicGalleryLayouter *_galleryLayouter;	// 64 = 0x40
    NSMutableSet *_exposedGalleryItems;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000005e828
@property(nonatomic, getter=isLayoutRequired) _Bool layoutRequired; // @synthesize layoutRequired=_layoutRequired;
@property(retain, nonatomic) NSMutableSet *exposedGalleryItems; // @synthesize exposedGalleryItems=_exposedGalleryItems;
@property(retain, nonatomic) SXMosaicGalleryLayouter *galleryLayouter; // @synthesize galleryLayouter=_galleryLayouter;
@property(nonatomic) _Bool loadedAtleastOneImage; // @synthesize loadedAtleastOneImage=_loadedAtleastOneImage;
@property(retain, nonatomic) SXMediaViewEvent *mediaViewEvent; // @synthesize mediaViewEvent=_mediaViewEvent;
@property(readonly, nonatomic) NSMutableArray *visibleImageViews; // @synthesize visibleImageViews=_visibleImageViews;
@property(readonly, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) UIView *galleryView; // @synthesize galleryView=_galleryView;
@property(readonly, nonatomic) SXFullscreenCanvasController *fullScreenCanvasController; // @synthesize fullScreenCanvasController=_fullScreenCanvasController;
@property(readonly, nonatomic) id <SXGalleryItemImageViewFactory> imageViewFactory; // @synthesize imageViewFactory=_imageViewFactory;
- (_Bool)allowHierarchyRemoval;	// IMP=0x000000000005e692
- (void)willSubmitMediaExposureEvent:(id)arg1;	// IMP=0x000000000005e561
- (_Bool)shouldSubmitMediaExposureEventForExposedBounds:(struct CGRect)arg1;	// IMP=0x000000000005e519
- (void)finishMediaViewEvent;	// IMP=0x000000000005e3a9
- (void)createMediaViewEventForGalleryItem:(id)arg1;	// IMP=0x000000000005e1f1
- (unsigned long long)analyticsGalleryType;	// IMP=0x000000000005e1e6
- (unsigned long long)analyticsMediaType;	// IMP=0x000000000005e1db
- (void)submitEvents;	// IMP=0x000000000005e19a
- (id)contentSizeCategoryForCaption:(id)arg1;	// IMP=0x000000000005e120
- (id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2;	// IMP=0x000000000005e061
- (id)textStyleForIdentifier:(id)arg1;	// IMP=0x000000000005dfbd
- (id)textRulesForCaption:(id)arg1;	// IMP=0x000000000005df43
- (id)textResizerForCaption:(id)arg1;	// IMP=0x000000000005dc09
- (void)forceImageViewFullscreen:(id)arg1;	// IMP=0x000000000005db5d
- (id)imageViewForLocation:(struct CGPoint)arg1;	// IMP=0x000000000005d9a4
- (_Bool)fullScreenCanvasController:(id)arg1 showable:(id)arg2 gestureRecognizerShouldBegin:(id)arg3;	// IMP=0x000000000005d961
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didHideViewWithIndex:(unsigned long long)arg3;	// IMP=0x000000000005d8c2
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 willShowViewWithIndex:(unsigned long long)arg3;	// IMP=0x000000000005d799
- (_Bool)fullScreenCanvasController:(id)arg1 willShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3;	// IMP=0x000000000005d662
- (void)fullScreenCanvasController:(id)arg1 willHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;	// IMP=0x000000000005d4a8
- (unsigned long long)fullScreenCanvasController:(id)arg1 viewIndexForPoint:(struct CGPoint)arg2 inShowable:(id)arg3;	// IMP=0x000000000005d2fe
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 shouldTransferToOriginalViewWithIndex:(unsigned long long)arg3;	// IMP=0x000000000005d1f9
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didShowViewWithIndex:(unsigned long long)arg3;	// IMP=0x000000000005cfa3
- (void)fullScreenCanvasController:(id)arg1 shouldAddGestureView:(id)arg2 forShowable:(id)arg3;	// IMP=0x000000000005cef8
- (id)fullScreenCanvasController:(id)arg1 originalViewForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;	// IMP=0x000000000005ce99
- (struct CGRect)fullScreenCanvasController:(id)arg1 originalFrameForShowable:(id)arg2 onCanvasView:(id)arg3 viewIndex:(unsigned long long)arg4;	// IMP=0x000000000005cda9
- (unsigned long long)fullScreenCanvasController:(id)arg1 numberOfViewsForShowable:(id)arg2;	// IMP=0x000000000005cd56
- (struct CGRect)fullScreenCanvasController:(id)arg1 fullScreenFrameForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 withinRect:(struct CGRect)arg4;	// IMP=0x000000000005cb03
- (void)fullScreenCanvasController:(id)arg1 didShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3;	// IMP=0x000000000005ca64
- (void)fullScreenCanvasController:(id)arg1 didHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;	// IMP=0x000000000005c9d0
- (id)fullScreenCanvasController:(id)arg1 captionForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;	// IMP=0x000000000005c868
- (id)fullScreenCanvasController:(id)arg1 canvasViewControllerForShowable:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000005c7ce
- (_Bool)requestInteractivityFocusForFullScreenCanvasController:(id)arg1;	// IMP=0x000000000005c77b
- (id)documentColumnLayoutForGalleryLayouter:(id)arg1;	// IMP=0x000000000005c769
- (_Bool)galleryLayouter:(id)arg1 viewIsCurrentlyFullscreenForItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000005c6eb
- (id)galleryLayouter:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000005c5fb
- (struct CGSize)galleryLayouter:(id)arg1 dimensionsForItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000005c4e5
- (unsigned long long)numberOfItemsForGalleryLayouter:(id)arg1;	// IMP=0x000000000005c477
- (void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2;	// IMP=0x000000000005c460
- (void)imageView:(id)arg1 didLoadImage:(id)arg2 ofQuality:(int)arg3;	// IMP=0x000000000005c449
- (id)imageViewForItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005c1f3
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;	// IMP=0x000000000005c0de
- (void)renderContentsInDrawableRect;	// IMP=0x000000000005bcd9
- (void)visibleBoundsChanged;	// IMP=0x000000000005b961
- (void)discardContents;	// IMP=0x000000000005b76d
- (void)renderContents;	// IMP=0x000000000005b72c
- (void)presentComponentWithChanges:(CDStruct_12a35e6e)arg1;	// IMP=0x000000000005b5a3
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 mediaSharingPolicyProvider:(id)arg7 imageViewFactory:(id)arg8 canvasControllerFactory:(id)arg9;	// IMP=0x000000000005b3cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

