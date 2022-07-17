//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CollectionSaveSession, MapsThemeButton, NSArray, NSMutableArray, NSString;
@protocol SelectionCollectionDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface CollectionListDataSource
{
    NSArray *_content;	// 8 = 0x8
    CollectionSaveSession *_editSession;	// 16 = 0x10
    NSMutableArray *_selected;	// 24 = 0x18
    MapsThemeButton *_footerButton;	// 32 = 0x20
    _Bool _showsAddCollection;	// 40 = 0x28
    _Bool _editing;	// 41 = 0x29
    NSArray *_keyCommands;	// 48 = 0x30
    unsigned long long _cellsSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000ac91b1
@property(readonly, nonatomic) NSArray *selected; // @synthesize selected=_selected;
@property(nonatomic) unsigned long long cellsSize; // @synthesize cellsSize=_cellsSize;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
- (id)keyCommands;	// IMP=0x0010000000ac915d
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000ac90d5
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000ac904d
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000ac8f67
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000ac8db4
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0010000000ac8c4c
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000ac8afa
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0010000000ac8a8b
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000ac88ed
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000ac8860
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0010000000ac8858
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0010000000ac884f
- (id)_cellForCollection:(id)arg1 inTableView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0010000000ac86d4
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000ac85c2
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000ac857e
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000ac8573
- (id)shareContextualActionAtIndexPath:(id)arg1;	// IMP=0x0010000000ac8381
- (id)deleteContextualActionAtIndexPath:(id)arg1;	// IMP=0x0010000000ac81ee
- (void)_shareAtIndexPath:(id)arg1;	// IMP=0x0010000000ac80ef
- (void)_captureCuratedCuratedCollectionAction:(int)arg1 indexPath:(id)arg2;	// IMP=0x0010000000ac7e84
- (void)_deleteAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000ac7b20
- (void)_updateKeyCommandsAtIndexPath:(id)arg1;	// IMP=0x0010000000ac7978
- (void)shareRow:(id)arg1;	// IMP=0x0010000000ac792e
- (void)deleteRow:(id)arg1;	// IMP=0x0010000000ac78e2
- (int)targetForDragAnalytics;	// IMP=0x0010000000ac78d7
- (id)objectsForAnalytics;	// IMP=0x0010000000ac788f
@property(readonly, nonatomic) unsigned long long entriesCount;
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x0010000000ac76c8
- (long long)indexForObject:(id)arg1;	// IMP=0x0010000000ac763f
- (id)currentContent;	// IMP=0x0010000000ac761a
- (void)collectionManager:(id)arg1 contentDidChange:(id)arg2;	// IMP=0x0010000000ac75c1
- (void)_loadData;	// IMP=0x0010000000ac7531
- (id)initWithTableView:(id)arg1 editSession:(id)arg2 showsAddCollection:(_Bool)arg3;	// IMP=0x0010000000ac73ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SelectionCollectionDataSourceDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
