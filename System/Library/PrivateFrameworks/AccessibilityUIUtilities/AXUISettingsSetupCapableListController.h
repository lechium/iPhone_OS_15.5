//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@interface AXUISettingsSetupCapableListController : PSListController
{
    _Bool _inSetup;	// 192 = 0xc0
}

@property(nonatomic) _Bool inSetup; // @synthesize inSetup=_inSetup;
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000007881
- (void)setupLongTitleSpecifiers:(id)arg1;	// IMP=0x00000000000076cc
- (void)setAllSpecifiersUnsearchable:(id)arg1;	// IMP=0x0000000000007594
- (void)filterBuddy:(id)arg1;	// IMP=0x0000000000007362
- (void)viewDidLoad;	// IMP=0x0000000000007112
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000070be
- (void)dealloc;	// IMP=0x0000000000007088
- (id)init;	// IMP=0x0000000000007034

@end
