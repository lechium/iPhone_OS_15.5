//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PSSpecifier;

__attribute__((visibility("hidden")))
@interface STShowMoreUsageGroupSpecifierProvider
{
    PSSpecifier *_summarySpecifier;	// 8 = 0x8
    NSArray *_usageItems;	// 16 = 0x10
    unsigned long long _numberOfItemsToShow;	// 24 = 0x18
    PSSpecifier *_showMoreSpecifier;	// 32 = 0x20
    unsigned long long _totalNumberOfItemsToShow;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000888d4
@property(nonatomic) unsigned long long totalNumberOfItemsToShow; // @synthesize totalNumberOfItemsToShow=_totalNumberOfItemsToShow;
@property(readonly, nonatomic) PSSpecifier *showMoreSpecifier; // @synthesize showMoreSpecifier=_showMoreSpecifier;
@property(nonatomic) unsigned long long numberOfItemsToShow; // @synthesize numberOfItemsToShow=_numberOfItemsToShow;
@property(copy, nonatomic) NSArray *usageItems; // @synthesize usageItems=_usageItems;
@property(retain, nonatomic) PSSpecifier *summarySpecifier; // @synthesize summarySpecifier=_summarySpecifier;
- (void)showMoreItems:(id)arg1;	// IMP=0x0000000000088811
- (void)updateSpecifier:(id)arg1 usageItem:(id)arg2;	// IMP=0x0000000000088797
- (id)newSpecifierWithUsageItem:(id)arg1;	// IMP=0x0000000000088711
- (void)refreshUsageSpecifiersWithUpdates:(_Bool)arg1;	// IMP=0x0000000000088309
- (id)init;	// IMP=0x0000000000088011

@end
