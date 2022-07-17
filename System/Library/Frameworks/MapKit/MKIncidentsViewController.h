//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOComposedRouteAdvisory, NSArray, NSString;

@interface MKIncidentsViewController
{
    NSArray *_sections;	// 8 = 0x8
    NSArray *_transitIncidents;	// 16 = 0x10
    NSArray *_restrictionIncidents;	// 24 = 0x18
    NSArray *_advisoryCards;	// 32 = 0x20
    NSString *_incidentsTitle;	// 40 = 0x28
    GEOComposedRouteAdvisory *_advisory;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000010d1bb
@property(copy, nonatomic) GEOComposedRouteAdvisory *advisory; // @synthesize advisory=_advisory;
@property(readonly, nonatomic) NSString *incidentsTitle; // @synthesize incidentsTitle=_incidentsTitle;
@property(copy, nonatomic) NSArray *advisoryCards; // @synthesize advisoryCards=_advisoryCards;
@property(copy, nonatomic) NSArray *restrictionIncidents; // @synthesize restrictionIncidents=_restrictionIncidents;
@property(copy, nonatomic) NSArray *transitIncidents; // @synthesize transitIncidents=_transitIncidents;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000010d0f3
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000010d0e2
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000010d0d4
- (long long)_numberOfRowsInSection:(long long)arg1;	// IMP=0x000000000010cfe1
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000010cfcc
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000010cfaf
- (id)extendedDetailCell;	// IMP=0x000000000010cf2f
- (id)detailCellInSection:(long long)arg1;	// IMP=0x000000000010ceaf
- (long long)_sectionForSectionIndex:(long long)arg1;	// IMP=0x000000000010ce60
- (void)_compileSections;	// IMP=0x000000000010cc9d
- (long long)_transitIncidentIndexForRow:(long long)arg1 section:(long long)arg2;	// IMP=0x000000000010cc65
- (unsigned long long)_transitIncidentsCount;	// IMP=0x000000000010cc48
- (unsigned long long)_incidentsCount;	// IMP=0x000000000010cb61
- (id)_advisoryItemCellForIndex:(long long)arg1;	// IMP=0x000000000010cab6
- (id)_noticeCellForIndex:(long long)arg1;	// IMP=0x000000000010ca3b
- (id)_transitCellForIndex:(long long)arg1 inSection:(long long)arg2;	// IMP=0x000000000010c90b
- (id)_restrictionCellForIndex:(long long)arg1;	// IMP=0x000000000010c890
- (id)_cellForRow:(long long)arg1 inSection:(long long)arg2;	// IMP=0x000000000010c739
- (void)dealloc;	// IMP=0x000000000010c6c4
- (void)_localeDidChange;	// IMP=0x000000000010c687
- (void)reloadDataSource;	// IMP=0x000000000010c617
- (void)_updateTitle;	// IMP=0x000000000010c1d7
- (void)infoCardThemeChanged;	// IMP=0x000000000010c144
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000010c0c8
- (void)viewDidLoad;	// IMP=0x000000000010bdce
- (id)initWithRestrictionIncidents:(id)arg1;	// IMP=0x000000000010bd61
- (id)initWithTransitIncidents:(id)arg1;	// IMP=0x000000000010bcf4
- (id)init;	// IMP=0x000000000010bcc0
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000010bcb8

@end
