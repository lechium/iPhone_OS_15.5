//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUICoreFamilyMemberContactsObserver-Protocol.h>
#import <ContactsUICore/CNUICoreFamilyMemberWhitelistedContactsDataSource-Protocol.h>

@class CNUICoreContactEditingSession, CNUICoreContactTypeAssessor, NSArray, NSString;
@protocol CNCancelable, CNSchedulerProvider, CNUICoreContactStoreFacade, CNUICoreFamilyInfoFetching, CNUICoreFamilyMemberContactsObserver, CNUICoreFamilyMemberWhitelistedContactsDataSource;

@interface CNUICoreInMemoryWhitelistedContactsDataSourceDecorator : NSObject <CNUICoreFamilyMemberContactsObserver, CNUICoreFamilyMemberWhitelistedContactsDataSource>
{
    id <CNUICoreFamilyMemberContactsObserver> _observer;	// 8 = 0x8
    id <CNUICoreFamilyMemberWhitelistedContactsDataSource> _dataSource;	// 16 = 0x10
    id <CNUICoreContactStoreFacade> _mainContactStore;	// 24 = 0x18
    id <CNSchedulerProvider> _schedulerProvider;	// 32 = 0x20
    id <CNUICoreFamilyInfoFetching> _familyInfoRetriever;	// 40 = 0x28
    CNUICoreContactTypeAssessor *_contactTypeAssessor;	// 48 = 0x30
    CNUICoreContactEditingSession *_editingSession;	// 56 = 0x38
    NSArray *_familyMemberContactItemsSnapshot;	// 64 = 0x40
    id <CNCancelable> _endEditingNotificationToken;	// 72 = 0x48
}

+ (id)modelBuilderForContacts:(id)arg1 withContactTypeAssessor:(id)arg2;	// IMP=0x000000000000e4b6
+ (id)modelBuilderForAddedContacts:(id)arg1 withContactTypeAssessor:(id)arg2;	// IMP=0x000000000000e478
- (void).cxx_destruct;	// IMP=0x000000000000e676
@property(retain, nonatomic) id <CNCancelable> endEditingNotificationToken; // @synthesize endEditingNotificationToken=_endEditingNotificationToken;
@property(retain, nonatomic) NSArray *familyMemberContactItemsSnapshot; // @synthesize familyMemberContactItemsSnapshot=_familyMemberContactItemsSnapshot;
@property(retain, nonatomic) CNUICoreContactEditingSession *editingSession; // @synthesize editingSession=_editingSession;
@property(readonly, nonatomic) CNUICoreContactTypeAssessor *contactTypeAssessor; // @synthesize contactTypeAssessor=_contactTypeAssessor;
@property(readonly, nonatomic) id <CNUICoreFamilyInfoFetching> familyInfoRetriever; // @synthesize familyInfoRetriever=_familyInfoRetriever;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) id <CNUICoreContactStoreFacade> mainContactStore; // @synthesize mainContactStore=_mainContactStore;
@property(readonly, nonatomic) id <CNUICoreFamilyMemberWhitelistedContactsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <CNUICoreFamilyMemberContactsObserver> observer; // @synthesize observer=_observer;
- (void)finishPersistenceOfInMemoryContactsWhitelistState;	// IMP=0x000000000000e43b
- (void)persistInMemoryContactsWhitelistState;	// IMP=0x000000000000e0ef
- (void)finishWhitelistedContactsTasks;	// IMP=0x000000000000e0dd
- (id)contactRepresentingItem:(id)arg1;	// IMP=0x000000000000ddd9
- (void)updateWhitelistByRemovingContacts:(id)arg1;	// IMP=0x000000000000dd4d
- (void)updateWhitelistByUpdatingContacts:(id)arg1;	// IMP=0x000000000000dcc1
- (void)updateWhitelistByAddingContacts:(id)arg1;	// IMP=0x000000000000dc35
- (void)startImplicitEditngSessionForAnyItemsNotPersistedInItems:(id)arg1;	// IMP=0x000000000000da33
- (id)familyMemberContactItemsFromDataSource;	// IMP=0x000000000000d9c8
- (id)familyMemberContactItemsFromDataSourceAugmentedWithInMemoryEdits;	// IMP=0x000000000000d4f2
@property(readonly, nonatomic) NSArray *familyMemberContactItems;
@property(readonly, nonatomic) long long fetchStatus;
@property(readonly, nonatomic) _Bool familyMemberContainerIsEmpty;
- (void)flushEditingSession;	// IMP=0x000000000000d39f
- (void)startEditingSessionIfNecessaryWithSnapshotOfItems:(id)arg1;	// IMP=0x000000000000d2f9
- (void)startEditingSessionIfNecessary;	// IMP=0x000000000000d2e5
- (void)executeBlockIfEditingSessionNotInProgress:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d271
- (void)notifyObserverContactItemsChange;	// IMP=0x000000000000d234
- (void)familyMemberContactItemsDidChange;	// IMP=0x000000000000d1d2
- (id)contactTypeAssesor;	// IMP=0x000000000000d0cb
- (void)dealloc;	// IMP=0x000000000000d060
- (id)initWithDataSource:(id)arg1 familyInfoRetriever:(id)arg2 schedulerProvider:(id)arg3;	// IMP=0x000000000000ce5e
- (id)initWithDataSource:(id)arg1 schedulerProvider:(id)arg2;	// IMP=0x000000000000cd6a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
