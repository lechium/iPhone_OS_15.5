//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HFCameraLiveStreamControllerDelegate-Protocol.h>
#import <HomeUI/HUCameraActivityZoneCanvasDelegate-Protocol.h>

@class HMCameraProfile, HUCameraActivityZoneCanvasView, HUCameraLiveStreamViewController, NSArray, NSString, UILabel;

@interface HUCameraActivityZoneEditorViewController : UIViewController <HUCameraActivityZoneCanvasDelegate, HFCameraLiveStreamControllerDelegate>
{
    _Bool _initialSettingDetectsInclusionZones;	// 8 = 0x8
    HMCameraProfile *_cameraProfile;	// 16 = 0x10
    HUCameraActivityZoneCanvasView *_activityZoneCanvas;	// 24 = 0x18
    UILabel *_tutorialLabel;	// 32 = 0x20
    HUCameraLiveStreamViewController *_liveStreamViewController;	// 40 = 0x28
    NSArray *_initialActivityZones;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000091a1a
@property(nonatomic) _Bool initialSettingDetectsInclusionZones; // @synthesize initialSettingDetectsInclusionZones=_initialSettingDetectsInclusionZones;
@property(retain, nonatomic) NSArray *initialActivityZones; // @synthesize initialActivityZones=_initialActivityZones;
@property(retain, nonatomic) HUCameraLiveStreamViewController *liveStreamViewController; // @synthesize liveStreamViewController=_liveStreamViewController;
@property(retain, nonatomic) UILabel *tutorialLabel; // @synthesize tutorialLabel=_tutorialLabel;
@property(retain, nonatomic) HUCameraActivityZoneCanvasView *activityZoneCanvas; // @synthesize activityZoneCanvas=_activityZoneCanvas;
@property(retain, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
- (void)dealloc;	// IMP=0x00000000000918b2
- (void)streamControllerStateDidUpdate:(id)arg1;	// IMP=0x00000000000915bd
- (void)_displayProgressIndicatorWhileLoading;	// IMP=0x0000000000091507
- (void)commitChangesAndDismissEditor;	// IMP=0x0000000000090ea6
@property(readonly, nonatomic) _Bool hasActivityZoneChanges;
- (void)cancelEditing;	// IMP=0x0000000000090740
- (void)invertZones;	// IMP=0x000000000009069f
- (void)viewDidLayoutSubviews;	// IMP=0x000000000009065e
- (void)_updateViewsForTraitCollection;	// IMP=0x0000000000090022
- (void)displayMoveOverlapAlert;	// IMP=0x000000000008ffa2
- (void)displayLineOverlapAlert;	// IMP=0x000000000008ff22
- (void)displayZoneOverlapAlert;	// IMP=0x000000000008fea2
- (void)displayErrorAlert;	// IMP=0x000000000008fe22
- (void)displayAlertWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x000000000008fd4f
- (void)displayUnCommittedChangesAlert;	// IMP=0x000000000008fa03
- (id)_addZoneButton;	// IMP=0x000000000008f95a
- (void)displayActivityZoneState;	// IMP=0x000000000008f821
- (void)_updateTutorialText;	// IMP=0x000000000008f726
- (void)_updateNavigationBar;	// IMP=0x000000000008f665
- (void)_updateToolbar;	// IMP=0x000000000008f366
- (void)_refreshUI;	// IMP=0x000000000008f289
- (void)didAttemptToMovePointToOverlapZoneForCanvas:(id)arg1;	// IMP=0x000000000008f277
- (void)didAttemptToAddOverlappingLineForCanvas:(id)arg1;	// IMP=0x000000000008f265
- (void)didAttemptToCreateOverlappingZoneForCanvas:(id)arg1;	// IMP=0x000000000008f253
- (void)didUpdateActivityZoneCanvas:(id)arg1;	// IMP=0x000000000008f241
- (void)didUpdateActivityZone:(id)arg1;	// IMP=0x000000000008f180
- (void)viewDidLoad;	// IMP=0x000000000008ecae
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000008ea2e
- (id)initWithCameraProfile:(id)arg1;	// IMP=0x000000000008e867

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
