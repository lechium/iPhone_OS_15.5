//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>
#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, UITapGestureRecognizer, UIWindow;

@interface PXDiagnosticsController : NSObject <PXSettingsKeyObserver, UIGestureRecognizerDelegate>
{
    UIWindow *__window;	// 8 = 0x8
    NSArray *__diagnosticsServicesClasses;	// 16 = 0x10
    UITapGestureRecognizer *__gestureRecognizer;	// 24 = 0x18
}

+ (id)sharedController;	// IMP=0x00000000007236a8
- (void).cxx_destruct;	// IMP=0x000000000072360a
@property(retain, nonatomic, setter=_setGestureRecognizer:) UITapGestureRecognizer *_gestureRecognizer; // @synthesize _gestureRecognizer=__gestureRecognizer;
@property(readonly, nonatomic) NSArray *_diagnosticsServicesClasses; // @synthesize _diagnosticsServicesClasses=__diagnosticsServicesClasses;
@property(readonly, nonatomic) UIWindow *_window; // @synthesize _window=__window;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x0000000000723590
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000723532
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x0000000000723520
- (void)_executeService:(id)arg1;	// IMP=0x00000000007233bc
- (id)_currentRootViewController;	// IMP=0x000000000072332e
- (void)_presentContextualViewControllerFromPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x000000000072325a
- (void)presentContextualDiagnostics;	// IMP=0x00000000007231a1
- (void)_handleGestureRecognizer:(id)arg1;	// IMP=0x00000000007230ed
- (void)_updateGestureRecognizer;	// IMP=0x0000000000722eff
- (void)_loadDiagnosticsServicesClasses;	// IMP=0x0000000000722ec7
- (void)presentContextualViewControllerForServices:(id)arg1;	// IMP=0x0000000000722a1f
- (id)consoleDescriptionForServices:(id)arg1;	// IMP=0x00000000007227c2
- (id)servicesWithItemProviders:(id)arg1;	// IMP=0x00000000007225f5
- (id)currentItemProviders;	// IMP=0x00000000007224f8
- (void)setupOnInternalDevicesWithWindow:(id)arg1;	// IMP=0x0000000000722448

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
