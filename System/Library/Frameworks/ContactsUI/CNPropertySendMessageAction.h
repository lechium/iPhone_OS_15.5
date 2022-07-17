//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNContactActionsControllerDelegate-Protocol.h>
#import <ContactsUI/CNPropertyContextMenuAction-Protocol.h>

@class CNActionMenuHelper, CNContactActionsController, CNUIUserActionListDataSource, NSString, UIContextMenuInteraction;

__attribute__((visibility("hidden")))
@interface CNPropertySendMessageAction <CNContactActionsControllerDelegate, CNPropertyContextMenuAction>
{
    CNContactActionsController *_actionsController;	// 8 = 0x8
    CNUIUserActionListDataSource *_actionsDataSource;	// 16 = 0x10
    CNActionMenuHelper *_actionMenuHelper;	// 24 = 0x18
    UIContextMenuInteraction *_contextMenuInteraction;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001563e0
@property(retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // @synthesize contextMenuInteraction=_contextMenuInteraction;
@property(retain, nonatomic) CNActionMenuHelper *actionMenuHelper; // @synthesize actionMenuHelper=_actionMenuHelper;
@property(retain, nonatomic) CNUIUserActionListDataSource *actionsDataSource; // @synthesize actionsDataSource=_actionsDataSource;
@property(retain, nonatomic) CNContactActionsController *actionsController; // @synthesize actionsController=_actionsController;
- (void)contactActionsController:(id)arg1 didUpdateWithMenu:(id)arg2;	// IMP=0x00000000001562c2
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;	// IMP=0x0000000000156208
- (void)performActionForItem:(id)arg1 sender:(id)arg2;	// IMP=0x0000000000155eae
- (void)performActionWithSender:(id)arg1;	// IMP=0x0000000000155df9
- (CDUnknownBlockType)menuProviderForContextMenuInteraction:(id)arg1;	// IMP=0x0000000000155be0
- (_Bool)shouldPresentDisambiguationMenu;	// IMP=0x0000000000155b97
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2 actionDataSource:(id)arg3;	// IMP=0x0000000000155b15

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
