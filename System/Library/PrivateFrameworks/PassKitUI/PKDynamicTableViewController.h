//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface PKDynamicTableViewController : UITableViewController
{
    NSMutableDictionary *_sectionControllerMap;	// 8 = 0x8
    NSMutableArray *_sectionItems;	// 16 = 0x10
    NSArray *_orderOfSectionIdentifiers;	// 24 = 0x18
    NSArray *_sectionControllers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001fad8b
@property(retain, nonatomic) NSArray *sectionControllers; // @synthesize sectionControllers=_sectionControllers;
- (id)_sectionControllerForSectionIdentifier:(id)arg1;	// IMP=0x00000000001fad5d
- (long long)rowAnimationForDeletingSection:(unsigned long long)arg1;	// IMP=0x00000000001fad55
- (long long)rowAnimationForReloadingSection:(unsigned long long)arg1;	// IMP=0x00000000001fad4d
- (long long)rowAnimationForInsertingSection:(unsigned long long)arg1;	// IMP=0x00000000001fad45
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000001fac3c
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001fab4b
- (id)tableView:(id)arg1 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001faa5a
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;	// IMP=0x00000000001fa9bb
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x00000000001fa91c
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000001fa851
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001fa784
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00000000001fa69f
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001fa5be
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001fa4e6
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000000001fa41b
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000001fa350
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001fa250
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00000000001fa184
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000001fa0b8
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x00000000001fa00d
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000001f9f62
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001f9e7f
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001f9dd4
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001f9db7
- (long long)numberOfSections;	// IMP=0x00000000001f9d9a
- (long long)indexOfSectionIdentifier:(id)arg1;	// IMP=0x00000000001f9d17
- (_Bool)hasSectionForSectionIdentifier:(id)arg1;	// IMP=0x00000000001f9cd9
- (void)recomputeMappedSectionsAndReloadSections:(id)arg1 sectionIdentifiers:(id)arg2;	// IMP=0x00000000001f952a
- (void)_sortMappedSectionIdentifiers:(id)arg1;	// IMP=0x00000000001f9346
- (id)_computeSectionControllerMap:(id)arg1;	// IMP=0x00000000001f8fce
- (void)reloadRows:(id)arg1 inSectionWithSectionIdentifier:(id)arg2;	// IMP=0x00000000001f8d1c
- (void)reloadRow:(long long)arg1 inSectionWithSectionIdentifier:(id)arg2;	// IMP=0x00000000001f8c4a
- (void)reloadSectionIdentifiers:(id)arg1;	// IMP=0x00000000001f8928
- (void)reloadSectionIdentifier:(id)arg1;	// IMP=0x00000000001f8841
- (void)_reloadData:(_Bool)arg1;	// IMP=0x00000000001f8794
- (void)setSectionControllers:(id)arg1 sectionIdentifiers:(id)arg2;	// IMP=0x00000000001f86e6
- (void)viewDidLoad;	// IMP=0x00000000001f8668
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000001f8639
- (id)init;	// IMP=0x00000000001f85b7

@end

