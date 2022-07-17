//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARDebugCollectionConfig, CARSettingsCellSpecifier, NSArray;

@interface CARDebugSettingsCollectionPanel
{
    CARSettingsCellSpecifier *_cellSpecifier;	// 8 = 0x8
    NSArray *_colors;	// 16 = 0x10
    CARDebugCollectionConfig *_config;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000020e7a
@property(retain, nonatomic) CARDebugCollectionConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (double)minimumInteritemSpacing;	// IMP=0x0010000000020c4e
- (double)minimumLineSpacing;	// IMP=0x0010000000020bfe
- (struct UIEdgeInsets)sectionInset;	// IMP=0x0010000000020ba0
- (unsigned long long)numberOfRows;	// IMP=0x0010000000020b5c
- (unsigned long long)numberOfColumns;	// IMP=0x0010000000020b18
- (id)cellSpecifiers;	// IMP=0x001000000002087b
- (void)_refreshConfig;	// IMP=0x0010000000020826
- (void)invalidate;	// IMP=0x00100000000207dc
- (id)initWithPanelController:(id)arg1;	// IMP=0x0010000000020743
- (id)cellSpecifier;	// IMP=0x00100000000205ec

@end
