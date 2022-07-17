//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUIServices/SBFLegibilitySettingsProvider-Protocol.h>
#import <SpringBoardUIServices/SBFLegibilitySettingsProviderDelegate-Protocol.h>
#import <SpringBoardUIServices/SBSUIWallpaperPreviewViewDelegate-Protocol.h>

@class AVURLAsset, NSDictionary, NSString, NSTimer, SBFWallpaperConfiguration, SBFWallpaperConfigurationManager, SBFWallpaperCoreAnalyticsLogger, SBFWallpaperOptions, SBSUIProgressHUD, UIImage, _SBSUIOrientedImageView, _UILegibilitySettings;
@protocol SBFLegibilitySettingsProviderDelegate, SBSUIWallpaperPreviewViewControllerDelegate;

@interface SBSUIWallpaperPreviewViewController : UIViewController <SBFLegibilitySettingsProviderDelegate, SBSUIWallpaperPreviewViewDelegate, SBFLegibilitySettingsProvider>
{
    NSTimer *_dateTimer;	// 8 = 0x8
    SBFWallpaperConfigurationManager *_wallpaperConfigurationManager;	// 16 = 0x10
    SBFWallpaperConfiguration *_initialConfiguration;	// 24 = 0x18
    UIImage *_wallpaperImage;	// 32 = 0x20
    NSDictionary *_wallpaperImageDict;	// 40 = 0x28
    NSDictionary *_proceduralWallpaper;	// 48 = 0x30
    NSDictionary *_proceduralWallpaperOptions;	// 56 = 0x38
    _Bool _allowScrolling;	// 64 = 0x40
    long long _variant;	// 72 = 0x48
    NSString *_name;	// 80 = 0x50
    _Bool _colorSamplingEnabled;	// 88 = 0x58
    AVURLAsset *_video;	// 96 = 0x60
    NSDictionary *_videoDict;	// 104 = 0x68
    double _stillTimeInVideo;	// 112 = 0x70
    SBFWallpaperOptions *_options;	// 120 = 0x78
    NSDictionary *_optionsDict;	// 128 = 0x80
    _Bool _enableButtons;	// 136 = 0x88
    _Bool _disableContents;	// 137 = 0x89
    _Bool _disableParallax;	// 138 = 0x8a
    SBSUIProgressHUD *_hud;	// 144 = 0x90
    _SBSUIOrientedImageView *_homeScreenPreviewView;	// 152 = 0x98
    SBFWallpaperCoreAnalyticsLogger *_wallpaperCoreAnalyticsLogger;	// 160 = 0xa0
    _Bool _motionEnabled;	// 168 = 0xa8
    _Bool _irisEnabled;	// 169 = 0xa9
    id <SBFLegibilitySettingsProviderDelegate> _delegate;	// 176 = 0xb0
    id <SBSUIWallpaperPreviewViewControllerDelegate> _previewDelegate;	// 184 = 0xb8
    double _zoomScale;	// 192 = 0xc0
    double _parallaxFactor;	// 200 = 0xc8
    SBFWallpaperConfiguration *_wallpaperConfiguration;	// 208 = 0xd0
    struct CGRect _cropRect;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x000000000004ac85
@property(copy, nonatomic) SBFWallpaperConfiguration *wallpaperConfiguration; // @synthesize wallpaperConfiguration=_wallpaperConfiguration;
@property(nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) _Bool irisEnabled; // @synthesize irisEnabled=_irisEnabled;
@property(nonatomic) _Bool motionEnabled; // @synthesize motionEnabled=_motionEnabled;
@property(readonly) UIImage *wallpaperImage; // @synthesize wallpaperImage=_wallpaperImage;
@property(nonatomic) __weak id <SBSUIWallpaperPreviewViewControllerDelegate> previewDelegate; // @synthesize previewDelegate=_previewDelegate;
@property(nonatomic) __weak id <SBFLegibilitySettingsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)colorSamplingEnabled;	// IMP=0x000000000004ab3d
- (void)setColorSamplingEnabled:(_Bool)arg1;	// IMP=0x000000000004ab2d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000004aa97
- (void)_startDateTimer;	// IMP=0x000000000004aa40
- (void)_stopDateTimer;	// IMP=0x000000000004aa08
- (void)_updateDateView;	// IMP=0x000000000004a93f
- (id)_dateView;	// IMP=0x000000000004a8ef
- (void)_logWallpaperChangeForLocations:(long long)arg1;	// IMP=0x000000000004a3a2
- (void)_enableIrisOrParallaxIfEligible;	// IMP=0x000000000004a2b9
- (void)_displaySettingWallpaperHUD;	// IMP=0x000000000004a1ae
- (id)_wallpaperViewIfLoaded;	// IMP=0x000000000004a15e
- (id)_wallpaperView;	// IMP=0x000000000004a10e
- (id)_previewViewIfLoaded;	// IMP=0x000000000004a0fc
- (id)_previewView;	// IMP=0x000000000004a0ea
- (id)_colorWallpaperViewWithFrame:(struct CGRect)arg1 variant:(long long)arg2 configuration:(id)arg3;	// IMP=0x000000000004a050
- (id)_proceduralWallpaperViewWithFrame:(struct CGRect)arg1 variant:(long long)arg2 configuration:(id)arg3;	// IMP=0x0000000000049fbc
- (id)_wallpaperViewWithFrame:(struct CGRect)arg1 variant:(long long)arg2 options:(id)arg3;	// IMP=0x000000000004978c
- (id)_wallpaperViewWithFrame:(struct CGRect)arg1 image:(id)arg2 video:(id)arg3 videoURL:(id)arg4 stillTimeInVideo:(double)arg5 supportsCropping:(_Bool)arg6 variant:(long long)arg7 needsWallpaperDimming:(_Bool)arg8;	// IMP=0x0000000000049460
- (id)_wallpaperViewWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000048edd
- (void)userDidTapOnSetButton:(id)arg1;	// IMP=0x0000000000048d2d
- (void)userDidTapOnCancelButton:(id)arg1;	// IMP=0x0000000000048ce1
- (void)userDidTapOnParallaxButton:(id)arg1;	// IMP=0x0000000000048cae
- (void)userDidTapOnIrisButton:(id)arg1;	// IMP=0x0000000000048c7b
- (void)providerLegibilitySettingsChanged:(id)arg1;	// IMP=0x0000000000048baa
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
- (void)setMotionEnabled:(_Bool)arg1 updateParallaxOnWallpaperView:(_Bool)arg2;	// IMP=0x0000000000048a0d
@property(readonly, copy, nonatomic) SBFWallpaperOptions *wallpaperOptions;
- (void)_applyHomeScreenPreview;	// IMP=0x0000000000048511
- (void)_setProceduralWallpaperForLocationsOnMainThread:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004839b
- (void)_setImageWallpaperForLocationsOnMainThread:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000476f9
- (void)setImageWallpaperForLocations:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000047607
- (void)_setWallpaperImagesOnMainThread:(id)arg1 options:(id)arg2 locations:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000047403
- (void)setWallpaperImages:(id)arg1 options:(id)arg2 locations:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000471e9
- (void)setWallpaperImages:(id)arg1 options:(id)arg2 locations:(long long)arg3;	// IMP=0x00000000000471d4
- (void)_setWallpaperForLocationsOnMainThread:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000470f9
- (void)setWallpaperForLocations:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000047007
- (void)setWallpaperForLocations:(long long)arg1;	// IMP=0x0000000000046ff3
- (double)_parallaxFactor;	// IMP=0x0000000000046f8c
- (long long)_wallpaperType;	// IMP=0x0000000000046f4f
- (id)_wallpaperTypeDescription;	// IMP=0x0000000000046db1
- (id)wallpaperConfigurationManager;	// IMP=0x0000000000046d1f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000468d0
- (_Bool)prefersStatusBarHidden;	// IMP=0x00000000000468c8
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000467f8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000046728
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000466e7
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000046691
- (void)loadView;	// IMP=0x0000000000046229
- (void)dealloc;	// IMP=0x0000000000046191
- (id)initWithScrollableImage:(id)arg1 video:(id)arg2 time:(double)arg3;	// IMP=0x00000000000460a0
- (id)initWithScrollableImage:(id)arg1;	// IMP=0x0000000000046089
- (id)initWithImages:(id)arg1 videos:(id)arg2 variant:(long long)arg3 options:(id)arg4 disableSegmentedControl:(_Bool)arg5 enableButtons:(_Bool)arg6 disableContents:(_Bool)arg7 disableParallax:(_Bool)arg8;	// IMP=0x0000000000045d08
- (id)initWithImages:(id)arg1 videos:(id)arg2 variant:(long long)arg3 options:(id)arg4 disableSegmentedControl:(_Bool)arg5 enableButtons:(_Bool)arg6 disableContents:(_Bool)arg7;	// IMP=0x0000000000045cd6
- (id)initWithImage:(id)arg1 video:(id)arg2 variant:(long long)arg3 options:(id)arg4 disableSegmentedControl:(_Bool)arg5 enableButtons:(_Bool)arg6 disableContents:(_Bool)arg7;	// IMP=0x0000000000045abe
- (id)initWithImage:(id)arg1 name:(id)arg2 video:(id)arg3 time:(double)arg4;	// IMP=0x0000000000045985
- (id)initWithImage:(id)arg1 name:(id)arg2;	// IMP=0x000000000004596d
- (id)initWithProceduralWallpaper:(id)arg1 options:(id)arg2 variant:(long long)arg3 disableSegmentedControl:(_Bool)arg4 enableButtons:(_Bool)arg5 disableContents:(_Bool)arg6;	// IMP=0x00000000000457f9
- (id)initWithProceduralWallpaper:(id)arg1 options:(id)arg2;	// IMP=0x00000000000456b7
- (id)initWithWallpaperVariant:(long long)arg1;	// IMP=0x0000000000045644
- (id)initWithImage:(id)arg1;	// IMP=0x000000000004534e
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000452fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
