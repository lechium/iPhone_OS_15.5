//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HFActionSetBuilder, HFMediaPlaybackActionBuilder, HFPlaybackArchive, HFStaticItem, HUMediaItem, NSArray, NSNumber, SKCloudServiceController;

@interface HUMediaSelectionItemManager : HFItemManager
{
    HFStaticItem *_selectedPlaybackStateItem;	// 8 = 0x8
    HFActionSetBuilder *_actionSetBuilder;	// 16 = 0x10
    HFStaticItem *_playbackStateAdjustVolumeOnlyItem;	// 24 = 0x18
    HFStaticItem *_playbackStatePauseItem;	// 32 = 0x20
    HFStaticItem *_playbackStateResumeItem;	// 40 = 0x28
    HFStaticItem *_playbackStatePlayItem;	// 48 = 0x30
    NSArray *_playbackStateItems;	// 56 = 0x38
    HFStaticItem *_mediaPickerItem;	// 64 = 0x40
    HUMediaItem *_chosenMediaItem;	// 72 = 0x48
    NSArray *_playbackOptionsItems;	// 80 = 0x50
    HFStaticItem *_useCurrentVolumeItem;	// 88 = 0x58
    HFStaticItem *_useCustomVolumeItem;	// 96 = 0x60
    HFStaticItem *_selectedVolumeItem;	// 104 = 0x68
    HFStaticItem *_volumeSliderItem;	// 112 = 0x70
    HFMediaPlaybackActionBuilder *_actionBuilder;	// 120 = 0x78
    NSArray *_mediaPickerRowItems;	// 128 = 0x80
    HFStaticItem *_repeatItem;	// 136 = 0x88
    HFStaticItem *_shuffleItem;	// 144 = 0x90
    NSArray *_customVolumeItems;	// 152 = 0x98
    NSArray *_volumeSliderItems;	// 160 = 0xa0
    SKCloudServiceController *_cloudServiceController;	// 168 = 0xa8
    HFPlaybackArchive *_lastSelectedArchive;	// 176 = 0xb0
    NSNumber *_lastSelectedVolume;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000000001ce50b
@property(retain, nonatomic) NSNumber *lastSelectedVolume; // @synthesize lastSelectedVolume=_lastSelectedVolume;
@property(retain, nonatomic) HFPlaybackArchive *lastSelectedArchive; // @synthesize lastSelectedArchive=_lastSelectedArchive;
@property(retain, nonatomic) SKCloudServiceController *cloudServiceController; // @synthesize cloudServiceController=_cloudServiceController;
@property(retain, nonatomic) NSArray *volumeSliderItems; // @synthesize volumeSliderItems=_volumeSliderItems;
@property(retain, nonatomic) NSArray *customVolumeItems; // @synthesize customVolumeItems=_customVolumeItems;
@property(retain, nonatomic) HFStaticItem *shuffleItem; // @synthesize shuffleItem=_shuffleItem;
@property(retain, nonatomic) HFStaticItem *repeatItem; // @synthesize repeatItem=_repeatItem;
@property(retain, nonatomic) NSArray *mediaPickerRowItems; // @synthesize mediaPickerRowItems=_mediaPickerRowItems;
@property(retain, nonatomic) HFMediaPlaybackActionBuilder *actionBuilder; // @synthesize actionBuilder=_actionBuilder;
@property(retain, nonatomic) HFStaticItem *volumeSliderItem; // @synthesize volumeSliderItem=_volumeSliderItem;
@property(retain, nonatomic) HFStaticItem *selectedVolumeItem; // @synthesize selectedVolumeItem=_selectedVolumeItem;
@property(retain, nonatomic) HFStaticItem *useCustomVolumeItem; // @synthesize useCustomVolumeItem=_useCustomVolumeItem;
@property(retain, nonatomic) HFStaticItem *useCurrentVolumeItem; // @synthesize useCurrentVolumeItem=_useCurrentVolumeItem;
@property(retain, nonatomic) NSArray *playbackOptionsItems; // @synthesize playbackOptionsItems=_playbackOptionsItems;
@property(retain, nonatomic) HUMediaItem *chosenMediaItem; // @synthesize chosenMediaItem=_chosenMediaItem;
@property(retain, nonatomic) HFStaticItem *mediaPickerItem; // @synthesize mediaPickerItem=_mediaPickerItem;
@property(retain, nonatomic) NSArray *playbackStateItems; // @synthesize playbackStateItems=_playbackStateItems;
@property(retain, nonatomic) HFStaticItem *playbackStatePlayItem; // @synthesize playbackStatePlayItem=_playbackStatePlayItem;
@property(retain, nonatomic) HFStaticItem *playbackStateResumeItem; // @synthesize playbackStateResumeItem=_playbackStateResumeItem;
@property(retain, nonatomic) HFStaticItem *playbackStatePauseItem; // @synthesize playbackStatePauseItem=_playbackStatePauseItem;
@property(retain, nonatomic) HFStaticItem *playbackStateAdjustVolumeOnlyItem; // @synthesize playbackStateAdjustVolumeOnlyItem=_playbackStateAdjustVolumeOnlyItem;
@property(readonly, nonatomic) HFActionSetBuilder *actionSetBuilder; // @synthesize actionSetBuilder=_actionSetBuilder;
@property(retain, nonatomic) HFStaticItem *selectedPlaybackStateItem; // @synthesize selectedPlaybackStateItem=_selectedPlaybackStateItem;
- (id)_volumeForMediaAction;	// IMP=0x00000000001ce113
- (id)_itemsToHideInSet:(id)arg1;	// IMP=0x00000000001cdd37
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x00000000001cd6ec
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x00000000001cab44
- (void)mediaVolumeValueChanged:(double)arg1;	// IMP=0x00000000001caa79
- (void)mediaPlaybackOptionsItem:(id)arg1 switchedOn:(_Bool)arg2;	// IMP=0x00000000001ca8ed
@property(retain, nonatomic) HFPlaybackArchive *pickedPlaybackArchive; // @dynamic pickedPlaybackArchive;
- (id)selectedVolumeItemBasedOnActionBuilderState;	// IMP=0x00000000001ca011
- (id)selectedPlaybackStateItemBasedOnActionBuilderState;	// IMP=0x00000000001c9f2c
- (id)initWithDelegate:(id)arg1 mediaPlaybackActionBuilder:(id)arg2;	// IMP=0x00000000001c9e41
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;	// IMP=0x00000000001c9d8c

@end
