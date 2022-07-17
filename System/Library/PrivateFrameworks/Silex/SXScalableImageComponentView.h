//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/SXDragManagerDataSource-Protocol.h>
#import <Silex/SXFullscreenCanvasShowable-Protocol.h>
#import <Silex/SXFullscreenCaptionDataSource-Protocol.h>
#import <Silex/SXImageViewDelegate-Protocol.h>

@class NSString, SXDragManager, SXFullscreenCanvasController, SXImageResource, SXImageView, SXMediaViewEvent, UIView;
@protocol SXFullscreenCanvasControllerFactory, SXImageViewFactory, SXMediaSharingPolicyProvider;

@interface SXScalableImageComponentView <SXFullscreenCanvasShowable, SXImageViewDelegate, SXFullscreenCaptionDataSource, SXDragManagerDataSource>
{
    id <SXImageViewFactory> _imageViewFactory;	// 8 = 0x8
    id <SXFullscreenCanvasControllerFactory> _canvasControllerFactory;	// 16 = 0x10
    id <SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;	// 24 = 0x18
    SXDragManager *_dragManager;	// 32 = 0x20
    SXImageView *_imageView;	// 40 = 0x28
    SXImageResource *_imageResource;	// 48 = 0x30
    SXFullscreenCanvasController *_fullScreenCanvasController;	// 56 = 0x38
    SXMediaViewEvent *_activeViewEvent;	// 64 = 0x40
    UIView *_gestureView;	// 72 = 0x48
    struct CGRect _previousContentFrame;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000007c780
@property(nonatomic) __weak UIView *gestureView; // @synthesize gestureView=_gestureView;
@property(nonatomic) struct CGRect previousContentFrame; // @synthesize previousContentFrame=_previousContentFrame;
@property(retain, nonatomic) SXMediaViewEvent *activeViewEvent; // @synthesize activeViewEvent=_activeViewEvent;
@property(retain, nonatomic) SXFullscreenCanvasController *fullScreenCanvasController; // @synthesize fullScreenCanvasController=_fullScreenCanvasController;
@property(retain, nonatomic) SXImageResource *imageResource; // @synthesize imageResource=_imageResource;
@property(readonly, nonatomic) SXImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SXDragManager *dragManager; // @synthesize dragManager=_dragManager;
@property(readonly, nonatomic) id <SXMediaSharingPolicyProvider> mediaSharingPolicyProvider; // @synthesize mediaSharingPolicyProvider=_mediaSharingPolicyProvider;
@property(readonly, nonatomic) id <SXFullscreenCanvasControllerFactory> canvasControllerFactory; // @synthesize canvasControllerFactory=_canvasControllerFactory;
@property(readonly, nonatomic) id <SXImageViewFactory> imageViewFactory; // @synthesize imageViewFactory=_imageViewFactory;
- (_Bool)allowHierarchyRemoval;	// IMP=0x000000000007c5bf
@property(readonly, copy) NSString *description;
- (void)finishMediaViewEvent;	// IMP=0x000000000007c421
- (void)createMediaViewEvent;	// IMP=0x000000000007c342
- (unsigned long long)analyticsMediaType;	// IMP=0x000000000007c337
- (void)submitEvents;	// IMP=0x000000000007c2f6
- (id)contentSizeCategoryForCaption:(id)arg1;	// IMP=0x000000000007c27c
- (id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2;	// IMP=0x000000000007c1bd
- (id)textStyleForIdentifier:(id)arg1;	// IMP=0x000000000007c119
- (id)textRulesForCaption:(id)arg1;	// IMP=0x000000000007c09f
- (id)textResizerForCaption:(id)arg1;	// IMP=0x000000000007bd65
- (_Bool)usesThumbnailWithImageIdentifier:(id)arg1;	// IMP=0x000000000007bcd0
- (struct CGRect)transitionContentFrame;	// IMP=0x000000000007bc72
- (id)transitionContentView;	// IMP=0x000000000007bc60
- (_Bool)gestureShouldBegin:(id)arg1;	// IMP=0x000000000007bbe9
- (id)dragManager:(id)arg1 dragableAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000007bbd7
- (id)viewForDragManager:(id)arg1;	// IMP=0x000000000007bbc5
- (void)layoutImageView;	// IMP=0x000000000007bad6
- (_Bool)fullScreenCanvasController:(id)arg1 showable:(id)arg2 gestureRecognizerShouldBegin:(id)arg3;	// IMP=0x000000000007ba93
- (unsigned long long)fullScreenCanvasController:(id)arg1 viewIndexForPoint:(struct CGPoint)arg2 inShowable:(id)arg3;	// IMP=0x000000000007ba8b
- (id)fullScreenCanvasController:(id)arg1 originalViewForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;	// IMP=0x000000000007ba79
- (struct CGRect)fullScreenCanvasController:(id)arg1 originalFrameForShowable:(id)arg2 onCanvasView:(id)arg3 viewIndex:(unsigned long long)arg4;	// IMP=0x000000000007b9ce
- (unsigned long long)fullScreenCanvasController:(id)arg1 numberOfViewsForShowable:(id)arg2;	// IMP=0x000000000007b9c3
- (void)fullScreenCanvasController:(id)arg1 shouldAddGestureView:(id)arg2 forShowable:(id)arg3;	// IMP=0x000000000007b8db
- (struct CGRect)fullScreenCanvasController:(id)arg1 fullScreenFrameForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 withinRect:(struct CGRect)arg4;	// IMP=0x000000000007b73c
- (void)fullScreenCanvasController:(id)arg1 willHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;	// IMP=0x000000000007b6f0
- (void)fullScreenCanvasController:(id)arg1 didHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;	// IMP=0x000000000007b5f2
- (void)fullScreenCanvasController:(id)arg1 willReturnToFullscreenForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;	// IMP=0x000000000007b5a6
- (_Bool)fullScreenCanvasController:(id)arg1 willShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3;	// IMP=0x000000000007b46d
- (id)fullScreenCanvasController:(id)arg1 captionForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;	// IMP=0x000000000007b301
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 shouldTransferToOriginalViewWithIndex:(unsigned long long)arg3;	// IMP=0x000000000007b27c
- (id)fullScreenCanvasController:(id)arg1 canvasViewControllerForShowable:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000007b1e2
- (_Bool)requestInteractivityFocusForFullScreenCanvasController:(id)arg1;	// IMP=0x000000000007b18f
- (void)imageView:(id)arg1 didLoadImage:(id)arg2 ofQuality:(int)arg3;	// IMP=0x000000000007b178
- (void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2;	// IMP=0x000000000007b0d9
- (void)visibilityStateDidChangeFromState:(long long)arg1;	// IMP=0x000000000007b00f
- (void)discardContents;	// IMP=0x000000000007af30
- (void)renderContents;	// IMP=0x000000000007aebd
- (void)presentComponentWithChanges:(CDStruct_12a35e6e)arg1;	// IMP=0x000000000007ac1f
- (void)loadComponent:(id)arg1;	// IMP=0x000000000007a986
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 imageViewFactory:(id)arg7 canvasControllerFactory:(id)arg8 mediaSharingPolicyProvider:(id)arg9;	// IMP=0x000000000007a896

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
