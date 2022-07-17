//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlay/CPBannerDelegate-Protocol.h>
#import <CarPlay/CPBarButtonProviding-Protocol.h>
#import <CarPlay/CPMapButtonDelegate-Protocol.h>
#import <CarPlay/CPMapClientTemplateDelegate-Protocol.h>
#import <CarPlay/CPNavigationAlertUpdating-Protocol.h>

@class CPBarButton, CPNavigationAlert, NAFuture, NSArray, NSMutableDictionary, NSString, UIColor;
@protocol CPBannerProviding, CPMapTemplateDelegate, CPNavigationSessionProviding;

@interface CPMapTemplate <CPMapButtonDelegate, CPMapClientTemplateDelegate, CPBannerDelegate, CPNavigationAlertUpdating, CPBarButtonProviding>
{
    _Bool _automaticallyHidesNavigationBar;	// 8 = 0x8
    _Bool _hidesButtonsWithNavigationBar;	// 9 = 0x9
    UIColor *_guidanceBackgroundColor;	// 16 = 0x10
    unsigned long long _tripEstimateStyle;	// 24 = 0x18
    NSArray *_mapButtons;	// 32 = 0x20
    id <CPMapTemplateDelegate> _mapDelegate;	// 40 = 0x28
    CPNavigationAlert *_currentNavigationAlert;	// 48 = 0x30
    NSMutableDictionary *_postedBannerObjects;	// 56 = 0x38
    NAFuture *_navigationSessionProviderFuture;	// 64 = 0x40
    id <CPBannerProviding> _bannerProvider;	// 72 = 0x48
    id <CPNavigationSessionProviding> _navigationSessionProvider;	// 80 = 0x50
    NSArray *_tripPreviews;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001e051
- (void).cxx_destruct;	// IMP=0x0000000000023068
@property(readonly, copy, nonatomic) NSArray *tripPreviews; // @synthesize tripPreviews=_tripPreviews;
@property(retain, nonatomic) id <CPNavigationSessionProviding> navigationSessionProvider; // @synthesize navigationSessionProvider=_navigationSessionProvider;
@property(retain, nonatomic) id <CPBannerProviding> bannerProvider; // @synthesize bannerProvider=_bannerProvider;
@property(retain, nonatomic) NAFuture *navigationSessionProviderFuture; // @synthesize navigationSessionProviderFuture=_navigationSessionProviderFuture;
@property(retain, nonatomic) NSMutableDictionary *postedBannerObjects; // @synthesize postedBannerObjects=_postedBannerObjects;
@property(readonly, nonatomic) CPNavigationAlert *currentNavigationAlert; // @synthesize currentNavigationAlert=_currentNavigationAlert;
@property(nonatomic) __weak id <CPMapTemplateDelegate> mapDelegate; // @synthesize mapDelegate=_mapDelegate;
@property(nonatomic) _Bool hidesButtonsWithNavigationBar; // @synthesize hidesButtonsWithNavigationBar=_hidesButtonsWithNavigationBar;
@property(nonatomic) _Bool automaticallyHidesNavigationBar; // @synthesize automaticallyHidesNavigationBar=_automaticallyHidesNavigationBar;
@property(retain, nonatomic) NSArray *mapButtons; // @synthesize mapButtons=_mapButtons;
@property(nonatomic) unsigned long long tripEstimateStyle; // @synthesize tripEstimateStyle=_tripEstimateStyle;
@property(retain, nonatomic) UIColor *guidanceBackgroundColor; // @synthesize guidanceBackgroundColor=_guidanceBackgroundColor;
- (void)_updateBannerIfNecessaryForManeuver:(id)arg1 travelEstimates:(id)arg2;	// IMP=0x0000000000022d84
- (void)_postBannerIfNecessaryForNavigationAlert:(id)arg1;	// IMP=0x0000000000022bf4
- (void)_postBannerIfNecessaryForManeuver:(id)arg1;	// IMP=0x0000000000022a62
- (void)bannerTappedWithIdentifier:(id)arg1;	// IMP=0x00000000000226dd
- (void)bannerDidDisappearWithIdentifier:(id)arg1;	// IMP=0x000000000002266b
- (void)bannerDidAppearWithIdentifier:(id)arg1;	// IMP=0x0000000000022665
- (long long)_displayStyleForManeuver:(id)arg1;	// IMP=0x00000000000225c4
- (void)clientTripCanceledByExternalNavigation;	// IMP=0x0000000000022498
- (void)clientNavigationAlertDidDisappear:(id)arg1 context:(unsigned long long)arg2;	// IMP=0x00000000000222b1
- (void)clientNavigationAlertWillDisappear:(id)arg1 context:(unsigned long long)arg2;	// IMP=0x0000000000022133
- (void)clientNavigationAlertDidAppear:(id)arg1;	// IMP=0x0000000000021fbf
- (void)clientNavigationAlertWillAppear:(id)arg1;	// IMP=0x0000000000021e4b
- (void)clientPanWithDirection:(long long)arg1;	// IMP=0x0000000000021c3e
- (void)clientPanGestureEndedWithVelocity:(struct CGPoint)arg1;	// IMP=0x0000000000021b0e
- (void)clientPanGestureWithDeltaPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;	// IMP=0x00000000000219b2
- (void)clientPanGestureBegan;	// IMP=0x00000000000218ae
- (void)clientPanEndedWithDirection:(long long)arg1;	// IMP=0x000000000002179a
- (void)clientPanBeganWithDirection:(long long)arg1;	// IMP=0x0000000000021686
- (void)clientPanViewDidDisappear;	// IMP=0x0000000000021582
- (void)clientPanViewWillDisappear;	// IMP=0x000000000002147e
- (void)clientPanViewDidAppear;	// IMP=0x000000000002137a
- (void)clientTripAlreadyStartedException;	// IMP=0x000000000002131b
@property(readonly, nonatomic, getter=isPanningInterfaceVisible) _Bool panningInterfaceVisible;
- (void)dismissPanningInterfaceAnimated:(_Bool)arg1;	// IMP=0x00000000000210b7
- (void)showPanningInterfaceAnimated:(_Bool)arg1;	// IMP=0x0000000000021010
- (void)startTripIdentifier:(id)arg1 usingRouteIdentifier:(id)arg2;	// IMP=0x0000000000020deb
- (void)previewTripIdentifier:(id)arg1 usingRouteIdentifier:(id)arg2;	// IMP=0x0000000000020bc6
- (void)_resolveTrip:(id)arg1 routeChoice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000020892
- (void)handleActionForControlIdentifier:(id)arg1;	// IMP=0x000000000002016c
- (void)_updateNavigationAlert:(id)arg1;	// IMP=0x000000000001fc9b
- (void)dismissNavigationAlertAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001fa99
- (void)presentNavigationAlert:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001f8ee
- (_Bool)mapButton:(id)arg1 setFocusedImage:(id)arg2;	// IMP=0x000000000001f78a
- (_Bool)mapButton:(id)arg1 setImageSet:(id)arg2;	// IMP=0x000000000001f626
- (_Bool)mapButton:(id)arg1 setHidden:(_Bool)arg2;	// IMP=0x000000000001f4de
- (id)startNavigationSessionForTrip:(id)arg1;	// IMP=0x000000000001efc8
- (void)updateTravelEstimates:(id)arg1 forTrip:(id)arg2 withTimeRemainingColor:(unsigned long long)arg3;	// IMP=0x000000000001ee4e
- (void)updateTravelEstimates:(id)arg1 forTrip:(id)arg2;	// IMP=0x000000000001ee39
- (void)hideTripPreviews;	// IMP=0x000000000001ed9e
- (void)showRouteChoicesPreviewForTrip:(id)arg1 textConfiguration:(id)arg2;	// IMP=0x000000000001eb54
- (void)showTripPreviews:(id)arg1 selectedTrip:(id)arg2 textConfiguration:(id)arg3;	// IMP=0x000000000001e8ac
- (void)showTripPreviews:(id)arg1 textConfiguration:(id)arg2;	// IMP=0x000000000001e895
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001e2c1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e111
- (id)init;	// IMP=0x000000000001e059

// Remaining properties
@property(retain, nonatomic) CPBarButton *backButton;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property(readonly) Class superclass;
@property(retain, nonatomic) NAFuture *templateProviderFuture; // @dynamic templateProviderFuture;
@property(retain, nonatomic) NSArray *trailingNavigationBarButtons;

@end
