//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/UITextFieldDelegate-Protocol.h>

@class HFZoneModule, HMRoom, HUEditableTextCollectionListCell, NSString, UICollectionViewListCell, UITextField;

@interface HUZoneModuleController <UITextFieldDelegate>
{
    HMRoom *_room;	// 8 = 0x8
    UICollectionViewListCell *_currentZoneItemCell;	// 16 = 0x10
    HUEditableTextCollectionListCell *_createNewZoneCell;	// 24 = 0x18
    UITextField *_editingTextField;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000d08e5
@property(nonatomic) __weak UITextField *editingTextField; // @synthesize editingTextField=_editingTextField;
@property(nonatomic) __weak HUEditableTextCollectionListCell *createNewZoneCell; // @synthesize createNewZoneCell=_createNewZoneCell;
@property(nonatomic) __weak UICollectionViewListCell *currentZoneItemCell; // @synthesize currentZoneItemCell=_currentZoneItemCell;
@property(retain, nonatomic) HMRoom *room; // @synthesize room=_room;
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000000000d0824
- (_Bool)textFieldShouldEndEditing:(id)arg1;	// IMP=0x00000000000d0775
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000000d06ed
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00000000000d06bd
- (id)finishZoneNameEditing;	// IMP=0x00000000000d0630
- (id)_createNewZoneWithName:(id)arg1;	// IMP=0x00000000000cfdf5
- (_Bool)_validateNewZoneName:(id)arg1;	// IMP=0x00000000000cfda6
- (void)_configureCurrentZonesItem:(id)arg1 forCell:(id)arg2;	// IMP=0x00000000000cfbff
- (void)_configureZoneBuilderItem:(id)arg1 forCell:(id)arg2;	// IMP=0x00000000000cfad6
- (void)_configureZoneItem:(id)arg1 forCell:(id)arg2;	// IMP=0x00000000000cf92a
- (void)_configureCreateNewZoneItem:(id)arg1 forCell:(id)arg2;	// IMP=0x00000000000cf869
- (void)_updateCreateNewZoneCellText:(_Bool)arg1;	// IMP=0x00000000000cf51e
- (id)_didSelectZoneBuilderItem:(id)arg1;	// IMP=0x00000000000cf2e0
- (id)_didSelectZoneItem:(id)arg1;	// IMP=0x00000000000cefba
- (unsigned long long)didSelectItem:(id)arg1;	// IMP=0x00000000000ceddf
- (void)configureCell:(id)arg1 forItem:(id)arg2;	// IMP=0x00000000000cec12
- (Class)collectionCellClassForItem:(id)arg1;	// IMP=0x00000000000ceb54
- (id)initWithModule:(id)arg1 room:(id)arg2;	// IMP=0x00000000000ce9d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HFZoneModule *module; // @dynamic module;
@property(readonly) Class superclass;

@end

