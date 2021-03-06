//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

#import <HomeUI/HFCameraImageObserver-Protocol.h>

@class CALayer, HMCameraClip, HUClipScrubberTimeController, HURecordingEventCellFamiliarFacesView, UIView;

@interface HUCameraEventRecordingCell : UICollectionViewCell <HFCameraImageObserver>
{
    _Bool _portraitMode;	// 8 = 0x8
    _Bool _hasFamiliarFaces;	// 9 = 0x9
    unsigned long long _displayMode;	// 16 = 0x10
    HMCameraClip *_recordingEvent;	// 24 = 0x18
    CALayer *_badgeLayer;	// 32 = 0x20
    UIView *_posterFramesContainerView;	// 40 = 0x28
    UIView *_dayBoundaryView;	// 48 = 0x30
    HUClipScrubberTimeController *_timeController;	// 56 = 0x38
    HURecordingEventCellFamiliarFacesView *_familiarFacesView;	// 64 = 0x40
}

+ (id)backgroundColor;	// IMP=0x0000000000146385
- (void).cxx_destruct;	// IMP=0x00000000001476ae
@property(nonatomic) _Bool hasFamiliarFaces; // @synthesize hasFamiliarFaces=_hasFamiliarFaces;
@property(retain, nonatomic) HURecordingEventCellFamiliarFacesView *familiarFacesView; // @synthesize familiarFacesView=_familiarFacesView;
@property(nonatomic) __weak HUClipScrubberTimeController *timeController; // @synthesize timeController=_timeController;
@property(nonatomic) _Bool portraitMode; // @synthesize portraitMode=_portraitMode;
@property(retain, nonatomic) UIView *dayBoundaryView; // @synthesize dayBoundaryView=_dayBoundaryView;
@property(retain, nonatomic) UIView *posterFramesContainerView; // @synthesize posterFramesContainerView=_posterFramesContainerView;
@property(retain, nonatomic) CALayer *badgeLayer; // @synthesize badgeLayer=_badgeLayer;
@property(nonatomic) __weak HMCameraClip *recordingEvent; // @synthesize recordingEvent=_recordingEvent;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
- (id)accessibilityLabel;	// IMP=0x00000000001470e3
- (void)prepareForReuse;	// IMP=0x0000000000146fc7
- (void)preparePosterFrameViewsForReuse;	// IMP=0x0000000000146eda
- (void)hideFamiliarFaces;	// IMP=0x0000000000146e6d
- (void)showFamiliarFacesWithMaxWidth:(double)arg1;	// IMP=0x0000000000146d8e
- (void)updateFamiliarFaces;	// IMP=0x0000000000146b8c
- (void)drawEventMarkers;	// IMP=0x0000000000146a4e
- (void)displayReachabilityErrorUI;	// IMP=0x00000000001469d8
- (void)addDayBoundaryIfNeeded;	// IMP=0x00000000001467ca
- (void)addPosterFrameViews;	// IMP=0x000000000014659a
- (unsigned long long)numberOfFramesNeeded;	// IMP=0x000000000014651d
- (void)updateWithCameraClipEvent:(id)arg1 mode:(unsigned long long)arg2 portraitMode:(_Bool)arg3 timeController:(id)arg4;	// IMP=0x00000000001463af
- (id)_badgeImageForSignificantEventReasons:(id)arg1;	// IMP=0x0000000000146263
- (void)_updateBadgeLayerWithImage:(id)arg1 inRect:(struct CGRect)arg2;	// IMP=0x000000000014610a
- (void)updateBadgeLayerWithEvents:(id)arg1 inRect:(struct CGRect)arg2;	// IMP=0x0000000000145516
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000145319

@end

