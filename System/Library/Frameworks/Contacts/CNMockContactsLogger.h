//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNContactsLogger-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNMockContactsLogger : NSObject <CNContactsLogger>
{
}

- (void)failedToApplyContactUpdateOfKind:(const char *)arg1 value:(id)arg2 property:(id)arg3 error:(id)arg4;	// IMP=0x00000000000fcee7
- (void)deleteImageRecentsMetadataRequestFailed:(id)arg1;	// IMP=0x00000000000fcee1
- (void)setContactImageDataZeroCropRect:(id)arg1 format:(const char *)arg2;	// IMP=0x00000000000fcedb
- (void)setContactImageData:(id)arg1 format:(const char *)arg2 cropRect:(struct CGRect)arg3;	// IMP=0x00000000000fced5
- (void)removeContactImageData;	// IMP=0x00000000000fcecf
- (void)setContactImageData:(id)arg1;	// IMP=0x00000000000fcec9
- (void)applyContactUpdateOfKind:(const char *)arg1 value:(id)arg2 property:(id)arg3;	// IMP=0x00000000000fcec3
- (void)postingNotificationWithName:(id)arg1;	// IMP=0x00000000000fcebd
- (void)XPCConnectionWasInterrupted;	// IMP=0x00000000000fceb7
- (void)XPCConnectionWasInvalidated;	// IMP=0x00000000000fceb1
- (void)errorWhenQueryingTetheredSyncData:(id)arg1;	// IMP=0x00000000000fceab
- (void)internalError:(id)arg1;	// IMP=0x00000000000fcea5
- (void)SPIUsageLackingEntitlementRejectedForPID:(int)arg1;	// IMP=0x00000000000fce9f
- (void)SPIUsageLackingEntitlementGrantedForPID:(int)arg1;	// IMP=0x00000000000fce99
- (void)serviceError:(id)arg1;	// IMP=0x00000000000fce93
- (void)changedMeContact:(id)arg1;	// IMP=0x00000000000fce8d
- (void)updatingContact:(id)arg1;	// IMP=0x00000000000fce87
- (void)deletingContact:(id)arg1;	// IMP=0x00000000000fce81
- (void)addingContacts:(id)arg1 toContainerWithIdentifier:(id)arg2;	// IMP=0x00000000000fce7b
- (void)saveRequestFailed:(id)arg1;	// IMP=0x00000000000fce75
- (void)saveRequestInvalid:(id)arg1;	// IMP=0x00000000000fce6f
- (void)didFetchEncodedContacts:(id)arg1 error:(id)arg2;	// IMP=0x00000000000fce69
- (void)didFetchContacts:(id)arg1 error:(id)arg2;	// IMP=0x00000000000fce63
- (void)fetchEncodedContactsMatchingPredicate:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3;	// IMP=0x00000000000fce5d
- (void)fetchContactsProgressivelyMatchingPredicate:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3;	// IMP=0x00000000000fce57
- (void)fetchContactsMatchingPredicate:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3;	// IMP=0x00000000000fce51
- (void)contactsAccessWasDeniedWithError:(id)arg1;	// IMP=0x00000000000fce4b
- (void)contactsAccessWasGranted;	// IMP=0x00000000000fce45
- (void)requestAuthorizationWasDenied;	// IMP=0x00000000000fce3f
- (void)accessAuthorizationStatusWasDenied;	// IMP=0x00000000000fce39
- (void)postingNotification:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fce1e
- (void)servicingContactsRequest:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fce03
- (void)settingDefaultAccount:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fcde8
- (void)resettingSortDataIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fcdcd
- (void)clearingChangeHistory:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fcdb2
- (void)fetchingChangeHistory:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fcd97
- (void)unregisteringForChangeHistory:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fcd7c
- (void)registeringForChangeHistory:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fcd61
- (void)saving:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fcd46
- (void)fetchingDefaultContainerIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fcd2b
- (void)fetchingContainers:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fcd10
- (void)fetchingGroups:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fccf5
- (void)fetchingContactsBatch:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fccda
- (void)fetchingContactIdentifierWithMatchingDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fccbf
- (void)fetchingContactWithUserActivity:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fcca4
- (void)fetchingContacts:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fcc89
- (void)fetchingContactSectionCounts:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fcc6e
- (void)fetchingContactCount:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fcc53
- (void)changingMeContact:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fcc38
- (void)fetchingMeContactIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fcc1d
- (void)requestingAccessForContacts:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fcc02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

