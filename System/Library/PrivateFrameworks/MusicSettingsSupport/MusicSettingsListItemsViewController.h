//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListItemsController.h>

#import <MusicSettingsSupport/MusicSettingsSupportController-Protocol.h>

@class NSArray, NSString;

@interface MusicSettingsListItemsViewController : PSListItemsController <MusicSettingsSupportController>
{
    NSArray *_allSpecifiers;	// 216 = 0xd8
    NSString *_stringsTable;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00000000000025eb
@property(copy, nonatomic) NSString *stringsTable; // @synthesize stringsTable=_stringsTable;
@property(copy, nonatomic) NSArray *allSpecifiers; // @synthesize allSpecifiers=_allSpecifiers;
- (void)updateVisibleSpecifiers;	// IMP=0x00000000000025a1
- (id)valueForMusicCapability:(id)arg1;	// IMP=0x0000000000002599
- (id)itemsFromParent;	// IMP=0x0000000000002314
- (void)listItemSelected:(id)arg1;	// IMP=0x000000000000212a
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000001f8e
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3;	// IMP=0x0000000000001eda

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
