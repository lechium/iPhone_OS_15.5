//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARSettingsCellSpecifier, CARSettingsGroupCellSpecifier;

@interface CARTextSizePanel
{
    CARSettingsCellSpecifier *_cellSpecifier;	// 8 = 0x8
    CARSettingsGroupCellSpecifier *_groupSpecifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000b688
@property(retain) CARSettingsGroupCellSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
- (void)_updateSelectedIndex;	// IMP=0x001000000000b55f
- (void)viewDidLoad;	// IMP=0x001000000000b530
- (id)cellSpecifiers;	// IMP=0x001000000000b4e0
- (id)cellSpecifier;	// IMP=0x001000000000b311
- (void)invalidate;	// IMP=0x001000000000b2c7
- (id)initWithPanelController:(id)arg1;	// IMP=0x001000000000af22

@end
