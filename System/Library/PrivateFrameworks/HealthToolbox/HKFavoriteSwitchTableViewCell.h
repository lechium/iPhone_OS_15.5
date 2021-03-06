//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKSwitchTableViewCell.h>

#import <HealthToolbox/HKSwitchTableViewCellDelegate-Protocol.h>
#import <HealthToolbox/WDFavoriteDisplayTypesControllerObserver-Protocol.h>

@class HKDisplayType, NSString, WDFavoriteDisplayTypesController;

__attribute__((visibility("hidden")))
@interface HKFavoriteSwitchTableViewCell : HKSwitchTableViewCell <HKSwitchTableViewCellDelegate, WDFavoriteDisplayTypesControllerObserver>
{
    WDFavoriteDisplayTypesController *_favoriteDisplayTypesController;	// 8 = 0x8
    HKDisplayType *_displayType;	// 16 = 0x10
}

+ (id)defaultReuseIdentifier;	// IMP=0x000000000002d9ae
- (void).cxx_destruct;	// IMP=0x000000000002df05
@property(retain, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) WDFavoriteDisplayTypesController *favoriteDisplayTypesController; // @synthesize favoriteDisplayTypesController=_favoriteDisplayTypesController;
- (void)favoriteDisplayTypesControllerDidUpdate:(id)arg1;	// IMP=0x000000000002dd90
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;	// IMP=0x000000000002dd1b
- (void)updateSwitchValue;	// IMP=0x000000000002db39
- (void)dealloc;	// IMP=0x000000000002da91
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000002d9bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

