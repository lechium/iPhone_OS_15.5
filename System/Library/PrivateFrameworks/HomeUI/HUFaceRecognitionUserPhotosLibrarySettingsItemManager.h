//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HFStaticItem, HFStaticItemProvider, HMHome, HMUser, HUFaceRecognitionUserPhotosLibrarySettingsModule;

@interface HUFaceRecognitionUserPhotosLibrarySettingsItemManager : HFItemManager
{
    HFStaticItem *_addNamesInPhotosLibraryItem;	// 8 = 0x8
    HUFaceRecognitionUserPhotosLibrarySettingsModule *_photosLibrarySettingsModule;	// 16 = 0x10
    HMHome *_overrideHome;	// 24 = 0x18
    HFStaticItemProvider *_staticItemProvider;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001b1a3e
@property(retain, nonatomic) HFStaticItemProvider *staticItemProvider; // @synthesize staticItemProvider=_staticItemProvider;
@property(readonly, nonatomic) HMHome *overrideHome; // @synthesize overrideHome=_overrideHome;
@property(readonly, nonatomic) HUFaceRecognitionUserPhotosLibrarySettingsModule *photosLibrarySettingsModule; // @synthesize photosLibrarySettingsModule=_photosLibrarySettingsModule;
@property(retain, nonatomic) HFStaticItem *addNamesInPhotosLibraryItem; // @synthesize addNamesInPhotosLibraryItem=_addNamesInPhotosLibraryItem;
- (id)setSharePhotosLibraryEnabled:(_Bool)arg1;	// IMP=0x00000000001b194c
- (id)setImportPhotosLibraryEnabled:(_Bool)arg1;	// IMP=0x00000000001b18c6
- (id)_homeFuture;	// IMP=0x00000000001b1863
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x00000000001b16c2
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x00000000001b13c0
- (id)_buildItemModulesForHome:(id)arg1;	// IMP=0x00000000001b135b
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000001b12a6
@property(readonly, nonatomic) HMUser *user;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;	// IMP=0x00000000001b0f2c

@end
