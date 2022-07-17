//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface STMostUsedGroupSpecifierProvider
{
    NSDictionary *_allowancesByActiveBudgetedIdentifier;	// 8 = 0x8
    unsigned long long _selectedItemType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006cda4
@property(nonatomic) unsigned long long selectedItemType; // @synthesize selectedItemType=_selectedItemType;
@property(copy, nonatomic) NSDictionary *allowancesByActiveBudgetedIdentifier; // @synthesize allowancesByActiveBudgetedIdentifier=_allowancesByActiveBudgetedIdentifier;
- (id)allowanceIconForUsageItem:(id)arg1;	// IMP=0x000000000006ca17
- (void)showMostUsedDetailListController:(id)arg1;	// IMP=0x000000000006c8d2
- (void)reloadMostUsedSpecifiers;	// IMP=0x000000000006c66d
- (void)toggleSelectedItemType:(id)arg1;	// IMP=0x000000000006c60b
- (id)getUsageItem:(id)arg1;	// IMP=0x000000000006c5f6
- (void)loadActiveBudgetedIdentifiers;	// IMP=0x000000000006bd8d
- (void)updateSpecifier:(id)arg1 usageItem:(id)arg2;	// IMP=0x000000000006bc93
- (id)newSpecifierWithUsageItem:(id)arg1;	// IMP=0x000000000006bafc
- (void)_allowancesByIdentifierDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000006ba40
- (void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000006b89e
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000006b5eb
- (void)setCoordinator:(id)arg1;	// IMP=0x000000000006b4e3
- (id)init;	// IMP=0x000000000006b30e

@end
