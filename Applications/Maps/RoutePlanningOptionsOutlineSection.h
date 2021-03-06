//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RoutePlanningOptionsDataSource;
@protocol RoutePlanningDataCoordination;

__attribute__((visibility("hidden")))
@interface RoutePlanningOptionsOutlineSection
{
    RoutePlanningOptionsDataSource *_dataSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000051203a
- (void)didSelectItemAtIndexPath:(id)arg1;	// IMP=0x0010000000512013
- (_Bool)shouldHighlightItemAtIndexPath:(id)arg1;	// IMP=0x0010000000511fec
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x0010000000511fc5
- (long long)numberOfSections;	// IMP=0x0010000000511fa1
- (id)viewForFooterInSection:(long long)arg1;	// IMP=0x0010000000511eb8
- (id)viewForHeaderInSection:(long long)arg1;	// IMP=0x0010000000511dcf
- (id)cellForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000511d04
- (id)listLayoutSectionConfigurationAtIndex:(long long)arg1 layoutEnvironment:(id)arg2;	// IMP=0x0010000000511c52
- (void)dataSourceDidRebuildSections:(id)arg1;	// IMP=0x0010000000511c06
- (_Bool)updateWithTransportType:(long long)arg1 routeCollection:(id)arg2;	// IMP=0x0010000000511b12
@property(nonatomic) __weak id <RoutePlanningDataCoordination> dataCoordinator;
- (id)initWithCollectionView:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x00100000005119de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

