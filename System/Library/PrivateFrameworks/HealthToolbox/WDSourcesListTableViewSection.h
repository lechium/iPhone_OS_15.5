//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthToolbox/HKSourceListDataSourceObserver-Protocol.h>
#import <HealthToolbox/WDSourceTableViewSection-Protocol.h>

@class HKSourceListDataSource, NSString;

@interface WDSourcesListTableViewSection <WDSourceTableViewSection, HKSourceListDataSourceObserver>
{
    HKSourceListDataSource *_dataSource;	// 8 = 0x8
    NSString *_restorationSourceBundleIdentifier;	// 16 = 0x10
}

+ (id)detailViewControllerForSourceModel:(id)arg1 withProfile:(id)arg2;	// IMP=0x000000000002bd96
- (void).cxx_destruct;	// IMP=0x000000000002c2f9
@property(copy, nonatomic) NSString *restorationSourceBundleIdentifier; // @synthesize restorationSourceBundleIdentifier=_restorationSourceBundleIdentifier;
@property(retain, nonatomic) HKSourceListDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id)detailViewControllerForSourceModel:(id)arg1;	// IMP=0x000000000002bce6
- (id)noneString;	// IMP=0x000000000002bc8a
- (id)noneCellForTableView:(id)arg1;	// IMP=0x000000000002baef
- (void)dataSourceDidUpdate;	// IMP=0x000000000002bae9
- (double)heightForRow:(unsigned long long)arg1;	// IMP=0x000000000002bad8
- (double)estimatedHeightForRow:(unsigned long long)arg1;	// IMP=0x000000000002bac7
- (void)sourceListDataSourceDidUpdate:(id)arg1;	// IMP=0x000000000002bab5
- (void)setSourceListDataSource:(id)arg1;	// IMP=0x000000000002ba06
- (void)dealloc;	// IMP=0x000000000002b9ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
