//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HUNameItemModuleController, HUValveEditorItemManager, NSMutableSet;

@interface HUValveEditorViewController
{
    HUValveEditorItemManager *_valveEditorItemManager;	// 8 = 0x8
    HUNameItemModuleController *_nameModuleController;	// 16 = 0x10
    NSMutableSet *_moduleControllers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000026ad69
@property(retain, nonatomic) NSMutableSet *moduleControllers; // @synthesize moduleControllers=_moduleControllers;
@property(retain, nonatomic) HUNameItemModuleController *nameModuleController; // @synthesize nameModuleController=_nameModuleController;
@property(retain, nonatomic) HUValveEditorItemManager *valveEditorItemManager; // @synthesize valveEditorItemManager=_valveEditorItemManager;
- (void)diffableDataItemManager:(id)arg1 willUpdateItems:(id)arg2 addItems:(id)arg3 removeItems:(id)arg4 isInitialLoad:(_Bool)arg5;	// IMP=0x000000000026a992
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;	// IMP=0x000000000026a626
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;	// IMP=0x000000000026a347
- (_Bool)shouldManageTextFieldForItem:(id)arg1;	// IMP=0x000000000026a33f
- (id)itemModuleControllers;	// IMP=0x000000000026a147
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000269e84
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;	// IMP=0x0000000000269d84
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;	// IMP=0x0000000000269cc2
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x0000000000269b94
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;	// IMP=0x0000000000269adf
- (id)initWithSourceItem:(id)arg1 editorMode:(unsigned long long)arg2;	// IMP=0x00000000002699fb

@end
