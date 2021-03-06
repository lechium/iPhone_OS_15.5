//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNPickerControllerDelegate-Protocol.h>
#import <ContactsUI/CNUINavigationListViewControllerDelegate-Protocol.h>
#import <ContactsUI/HKMedicalIDViewControllerDelegate-Protocol.h>

@class CNContactProperty, CNContactStore, CNHealthStoreManager, CNUINavigationListViewController, NSString, UIAlertController;
@protocol CNScheduler;

__attribute__((visibility("hidden")))
@interface CNEmergencyContactAction <CNUINavigationListViewControllerDelegate, CNPickerControllerDelegate, HKMedicalIDViewControllerDelegate>
{
    _Bool _addingToEmergency;	// 8 = 0x8
    CNContactStore *_contactStore;	// 16 = 0x10
    CNHealthStoreManager *_healthStoreManager;	// 24 = 0x18
    CNContactProperty *_contactProperty;	// 32 = 0x20
    UIAlertController *_alertController;	// 40 = 0x28
    CNUINavigationListViewController *_listController;	// 48 = 0x30
    id <CNScheduler> _mainThreadScheduler;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000014cd17
@property(retain, nonatomic) id <CNScheduler> mainThreadScheduler; // @synthesize mainThreadScheduler=_mainThreadScheduler;
@property(retain, nonatomic) CNUINavigationListViewController *listController; // @synthesize listController=_listController;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) CNContactProperty *contactProperty; // @synthesize contactProperty=_contactProperty;
@property(retain, nonatomic) CNHealthStoreManager *healthStoreManager; // @synthesize healthStoreManager=_healthStoreManager;
@property(nonatomic) _Bool addingToEmergency; // @synthesize addingToEmergency=_addingToEmergency;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void)medicalIDViewControllerDidFinish:(id)arg1;	// IMP=0x000000000014cb53
- (void)medicalIDViewControllerDidSave:(id)arg1;	// IMP=0x000000000014ca8d
- (void)medicalIDViewControllerDidCancel:(id)arg1;	// IMP=0x000000000014c9c7
- (void)pickerDidCancel:(id)arg1;	// IMP=0x000000000014c964
- (void)picker:(id)arg1 didPickItem:(id)arg2;	// IMP=0x000000000014c8d8
- (void)navigationListController:(id)arg1 didSelectItem:(id)arg2;	// IMP=0x000000000014c7bd
- (void)showRelationshipPickerForContactProperty:(id)arg1 sender:(id)arg2;	// IMP=0x000000000014c505
- (void)showConfirmRemoveAlertWithSender:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000014c0cb
- (void)presentDisambiguationAlertWithSender:(id)arg1;	// IMP=0x000000000014bcba
- (void)createMedicalIDWithEmergencyContact:(id)arg1;	// IMP=0x000000000014baf1
- (void)showHKMedicalIDViewControllerForMedicalID:(id)arg1;	// IMP=0x000000000014b980
- (void)performActionWithSender:(id)arg1;	// IMP=0x000000000014b87d
- (void)performActionWithContactProperty:(id)arg1 relationship:(id)arg2;	// IMP=0x000000000014b78b
- (void)performActionForItem:(id)arg1 sender:(id)arg2;	// IMP=0x000000000014b611
- (id)initWithContact:(id)arg1 healthStoreManager:(id)arg2 propertyItems:(id)arg3;	// IMP=0x000000000014b503

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

