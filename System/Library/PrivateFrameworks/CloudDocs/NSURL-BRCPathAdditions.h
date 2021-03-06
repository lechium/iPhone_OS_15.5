//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSPersonNameComponents, NSString;

@interface NSURL (BRCPathAdditions)
+ (id)brc_fileURLWithVolumeDeviceID:(id)arg1 fileID:(id)arg2 isDirectory:(_Bool)arg3;	// IMP=0x0000000000007911
+ (id)brc_fileURLWithFileDescriptor:(int)arg1;	// IMP=0x00000000000077f0
+ (void)br_containerIDsWithExternalReferencesTo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000042ebf
+ (id)br_documentURLFromBookmarkableString:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000042a47
+ (void)br_documentURLFromBookmarkableString:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000042873
+ (id)br_documentURLFromFileObjectID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000426a6
- (id)brc_issueSandboxExtensionOfClass:(const char *)arg1 error:(id *)arg2;	// IMP=0x00000000000079ff
- (_Bool)br_setTagNames:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000364ab
- (_Bool)br_getTagNames:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000035ef6
- (id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000040f86
- (id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 lastEditorUserName:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000040f71
@property(readonly, nonatomic) NSPersonNameComponents *br_lastEditorNameComponents;
@property(readonly, nonatomic) NSString *br_lastEditorName;
@property(readonly, nonatomic) NSString *br_lastEditorDeviceName;
- (id)br_creatorNameComponentsWithError:(id *)arg1;	// IMP=0x0000000000045cd8
- (_Bool)br_isModifiedSinceShared;	// IMP=0x0000000000045c76
- (_Bool)br_isTopLevelSharedItem;	// IMP=0x0000000000045c14
- (unsigned short)br_capabilityToMoveToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000045a51
- (_Bool)br_isSymLink;	// IMP=0x00000000000459c9
- (_Bool)br_wouldBeExcludedFromSync;	// IMP=0x0000000000045980
- (id)br_typeIdentifierWithError:(id *)arg1;	// IMP=0x0000000000045915
- (_Bool)br_setAccessTime:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000457d2
- (void)br_addPhysicalProperty;	// IMP=0x0000000000045762
- (_Bool)br_isPromiseURL;	// IMP=0x0000000000045752
- (id)br_logicalURL;	// IMP=0x000000000004570a
- (id)br_physicalURL;	// IMP=0x00000000000456b6
- (id)br_documentRecordIDWithError:(id *)arg1;	// IMP=0x00000000000454f8
- (id)br_itemID;	// IMP=0x0000000000045426
- (id)br_URLByResolvingExternalDocumentReferenceWithError:(id *)arg1;	// IMP=0x0000000000044f68
- (id)br_URLByResolvingInProcessExternalDocumentReferenceWithProperties:(id)arg1;	// IMP=0x0000000000044ad7
- (id)br_externalDocumentPropertiesWithError:(id *)arg1;	// IMP=0x0000000000044981
- (_Bool)br_isExternalDocumentReference;	// IMP=0x000000000004487e
- (id)br_cloudDocsContainer;	// IMP=0x0000000000044695
- (_Bool)br_mightBeBRAlias;	// IMP=0x0000000000044600
- (_Bool)br_isDocumentsContainer;	// IMP=0x00000000000445cd
- (id)br_containerIDIfIsDesktopOrDocumentsURL;	// IMP=0x00000000000445c5
- (id)br_containerIDIfIsDocumentsContainerURL;	// IMP=0x00000000000440a7
- (id)br_containerID;	// IMP=0x0000000000043f8f
- (_Bool)br_isInSharedDocsContainer;	// IMP=0x0000000000043f87
- (void)br_isConflictedWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000043d2d
- (_Bool)br_isInCloudDocsPrivateStoragesForRemoteDocumentVersions;	// IMP=0x0000000000043b87
- (_Bool)br_isInCloudDocsPrivateStorages;	// IMP=0x0000000000043a0d
- (_Bool)_br_isInSyncedLocationStrictly:(_Bool)arg1;	// IMP=0x0000000000043936
- (_Bool)_br_isInSyncedLocationWithCurrentPersonaID:(id)arg1 strictly:(_Bool)arg2 foundHomeDirectory:(_Bool)arg3 adoptionError:(id)arg4;	// IMP=0x0000000000043924
- (_Bool)_br_mightBeInSyncedLocationUnderCurrentPersonaID:(id)arg1 strictly:(_Bool)arg2;	// IMP=0x00000000000437bd
- (_Bool)br_isStrictlyInSyncedLocation;	// IMP=0x00000000000437a6
- (_Bool)br_isInSyncedLocation;	// IMP=0x0000000000043792
- (_Bool)br_isInSyncedDocuments;	// IMP=0x0000000000043736
- (_Bool)br_isInSyncedDesktop;	// IMP=0x000000000004362f
- (_Bool)br_isInMobileDocuments;	// IMP=0x000000000004361d
- (_Bool)br_isInTrash;	// IMP=0x00000000000435a4
- (id)br_debugDescription;	// IMP=0x0000000000043279
- (id)br_pathRelativeToMobileDocuments;	// IMP=0x00000000000430fd
- (id)br_pathRelativeToSyncedRootURLForContainerID:(id)arg1;	// IMP=0x0000000000042fd2
- (void)br_containerIDsWithExternalReferencesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000042d4e
- (void)br_bookmarkableStringForRemoteOpeningAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004249b
- (void)br_bookmarkableStringWithEtag:(_Bool)arg1 onlyAllowItemKnowByServer:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000420d5
- (void)br_bookmarkableStringWithEtag:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000420be
- (id)br_cachedBookmarkData;	// IMP=0x000000000004207c
- (void)br_preCacheBookmarkData:(id)arg1 versionEtag:(id)arg2;	// IMP=0x0000000000041ff7
- (_Bool)br_isParentOfURL:(id)arg1;	// IMP=0x0000000000041fe3
- (_Bool)br_isParentOfURL:(id)arg1 strictly:(_Bool)arg2;	// IMP=0x0000000000041c82
- (_Bool)br_isInLocalHomeDirectory;	// IMP=0x0000000000041ba3
- (id)br_realpathURL;	// IMP=0x0000000000041b1f
- (_Bool)br_mightBeOnDataSeparatedVolume;	// IMP=0x0000000000046414
- (id)br_containerIDWithCurrentPersonaID:(id)arg1 needsPersonaSwitch:(_Bool)arg2;	// IMP=0x00000000000462da
- (id)br_containerIDWithCurrentPersonaID:(id)arg1;	// IMP=0x00000000000462c6
- (id)br_pathRelativeToSyncedRootURL:(id)arg1 currentPersonaID:(id)arg2;	// IMP=0x000000000004615a
- (_Bool)_br_isInLocalHomeDirectoryUnderCurrentPersona;	// IMP=0x00000000000460fc
- (_Bool)_br_isInLocalHomeDirectoryUnderPersona:(id)arg1 needsPersonaSwitch:(_Bool)arg2;	// IMP=0x000000000004602e
- (_Bool)_br_isInPersonaRoot:(id)arg1;	// IMP=0x0000000000045e6b
@end

