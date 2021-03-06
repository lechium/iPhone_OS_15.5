//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARSettingsCellSpecifier, NSArray;

@interface CARDisplayPanel
{
    CARSettingsCellSpecifier *_cellSpecifier;	// 8 = 0x8
    NSArray *_cellSpecifiers;	// 16 = 0x10
    NSArray *_panels;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000158a7
@property(readonly, nonatomic) NSArray *panels; // @synthesize panels=_panels;
- (void)viewDidLoad;	// IMP=0x0010000000015867
- (id)cellSpecifiers;	// IMP=0x0010000000015780
- (id)cellSpecifier;	// IMP=0x00100000000155d5
- (id)initWithPanelController:(id)arg1;	// IMP=0x00100000000154b3

@end

