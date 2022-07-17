//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKController, AKGeometryHelper, AKLayerPresentationManager, AKPageModelController, UIView;

@interface AKPageControllerForTesting
{
    AKController *_testingController;	// 8 = 0x8
    unsigned long long _testingPageIndex;	// 16 = 0x10
    AKPageModelController *_testingPageModelController;	// 24 = 0x18
    AKLayerPresentationManager *_testingLayerPresentationManager;	// 32 = 0x20
    AKGeometryHelper *_testingGeometryHelper;	// 40 = 0x28
    UIView *_testingOverlayView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000cc9cf
@property(retain) UIView *testingOverlayView; // @synthesize testingOverlayView=_testingOverlayView;
@property(retain) AKGeometryHelper *testingGeometryHelper; // @synthesize testingGeometryHelper=_testingGeometryHelper;
@property(retain) AKLayerPresentationManager *testingLayerPresentationManager; // @synthesize testingLayerPresentationManager=_testingLayerPresentationManager;
@property(retain) AKPageModelController *testingPageModelController; // @synthesize testingPageModelController=_testingPageModelController;
@property unsigned long long testingPageIndex; // @synthesize testingPageIndex=_testingPageIndex;
@property(retain) AKController *testingController; // @synthesize testingController=_testingController;
- (double)modelBaseScaleFactor;	// IMP=0x00000000000cc8dc
- (struct CGRect)maxPageRect;	// IMP=0x00000000000cc8c2
- (struct CGRect)convertRectFromModelToOverlay:(struct CGRect)arg1;	// IMP=0x00000000000cc8aa
- (struct CGRect)convertRectFromOverlayToModel:(struct CGRect)arg1;	// IMP=0x00000000000cc892
- (struct CGPoint)convertPointFromModelToOverlay:(struct CGPoint)arg1;	// IMP=0x00000000000cc88c
- (struct CGPoint)convertPointFromOverlayToModel:(struct CGPoint)arg1;	// IMP=0x00000000000cc886
- (id)overlayView;	// IMP=0x00000000000cc874
- (id)geometryHelper;	// IMP=0x00000000000cc862
- (id)layerPresentationManager;	// IMP=0x00000000000cc850
- (id)pageModelController;	// IMP=0x00000000000cc83e
- (unsigned long long)pageIndex;	// IMP=0x00000000000cc82c
- (id)controller;	// IMP=0x00000000000cc81a
- (id)init;	// IMP=0x00000000000cc7eb

@end
