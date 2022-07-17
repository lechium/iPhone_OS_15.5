//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettings.h>

@interface PUPhotosGridSettings : PXSettings
{
    _Bool _badgeAllItemsAsFavorites;	// 8 = 0x8
    _Bool _displayAllItemsAsBursts;	// 9 = 0x9
    _Bool _allowDynamicDetailsTitles;	// 10 = 0xa
    _Bool _forceJPEGThumbnailsInDefaultGrid;	// 11 = 0xb
    _Bool _flashDegradedImages;	// 12 = 0xc
    _Bool _useFloatingHeaders;	// 13 = 0xd
    _Bool _swipeSelectionEnabled;	// 14 = 0xe
    _Bool _shouldExitEditingModeAfterDuplication;	// 15 = 0xf
    _Bool _showTimelineScrubbers;	// 16 = 0x10
    _Bool _simulateGlobalFooterImportantInformationUpdates;	// 17 = 0x11
    double _defaultItemSideSize;	// 24 = 0x18
    double _maximumSpacing;	// 32 = 0x20
    double _simulatedDetailsAttributesLoadingDelay;	// 40 = 0x28
    long long _numberColumnsInDefaultGrid;	// 48 = 0x30
    long long _numberOfColumnsInWideGrid;	// 56 = 0x38
    double _magnifierRevealPreviewScale;	// 64 = 0x40
    double _previewRevealProgressToFreezeMagnifier;	// 72 = 0x48
    double _minimumDistanceToUnfreeze;	// 80 = 0x50
    double _leftScrubberRate;	// 88 = 0x58
    double _rightScrubberRate;	// 96 = 0x60
    long long _globalFooterVisibility;	// 104 = 0x68
}

+ (id)settingsControllerModule;	// IMP=0x0000000000339925
+ (id)sharedInstance;	// IMP=0x00000000003398f5
@property(nonatomic) _Bool simulateGlobalFooterImportantInformationUpdates; // @synthesize simulateGlobalFooterImportantInformationUpdates=_simulateGlobalFooterImportantInformationUpdates;
@property(nonatomic) long long globalFooterVisibility; // @synthesize globalFooterVisibility=_globalFooterVisibility;
@property(nonatomic) double rightScrubberRate; // @synthesize rightScrubberRate=_rightScrubberRate;
@property(nonatomic) double leftScrubberRate; // @synthesize leftScrubberRate=_leftScrubberRate;
@property(nonatomic) _Bool showTimelineScrubbers; // @synthesize showTimelineScrubbers=_showTimelineScrubbers;
@property(nonatomic) _Bool shouldExitEditingModeAfterDuplication; // @synthesize shouldExitEditingModeAfterDuplication=_shouldExitEditingModeAfterDuplication;
@property(nonatomic) double minimumDistanceToUnfreeze; // @synthesize minimumDistanceToUnfreeze=_minimumDistanceToUnfreeze;
@property(nonatomic) double previewRevealProgressToFreezeMagnifier; // @synthesize previewRevealProgressToFreezeMagnifier=_previewRevealProgressToFreezeMagnifier;
@property(nonatomic) double magnifierRevealPreviewScale; // @synthesize magnifierRevealPreviewScale=_magnifierRevealPreviewScale;
@property(nonatomic, getter=isSwipeSelectionEnabled) _Bool swipeSelectionEnabled; // @synthesize swipeSelectionEnabled=_swipeSelectionEnabled;
@property(nonatomic) _Bool useFloatingHeaders; // @synthesize useFloatingHeaders=_useFloatingHeaders;
@property(nonatomic) _Bool flashDegradedImages; // @synthesize flashDegradedImages=_flashDegradedImages;
@property(nonatomic) long long numberOfColumnsInWideGrid; // @synthesize numberOfColumnsInWideGrid=_numberOfColumnsInWideGrid;
@property(nonatomic) long long numberColumnsInDefaultGrid; // @synthesize numberColumnsInDefaultGrid=_numberColumnsInDefaultGrid;
@property(nonatomic) _Bool forceJPEGThumbnailsInDefaultGrid; // @synthesize forceJPEGThumbnailsInDefaultGrid=_forceJPEGThumbnailsInDefaultGrid;
@property(nonatomic) double simulatedDetailsAttributesLoadingDelay; // @synthesize simulatedDetailsAttributesLoadingDelay=_simulatedDetailsAttributesLoadingDelay;
@property(nonatomic) _Bool allowDynamicDetailsTitles; // @synthesize allowDynamicDetailsTitles=_allowDynamicDetailsTitles;
@property(nonatomic) _Bool displayAllItemsAsBursts; // @synthesize displayAllItemsAsBursts=_displayAllItemsAsBursts;
@property(nonatomic) _Bool badgeAllItemsAsFavorites; // @synthesize badgeAllItemsAsFavorites=_badgeAllItemsAsFavorites;
@property(nonatomic) double maximumSpacing; // @synthesize maximumSpacing=_maximumSpacing;
@property(nonatomic) double defaultItemSideSize; // @synthesize defaultItemSideSize=_defaultItemSideSize;
- (void)setDefaultValues;	// IMP=0x0000000000339478
- (id)parentSettings;	// IMP=0x000000000033945f

@end
