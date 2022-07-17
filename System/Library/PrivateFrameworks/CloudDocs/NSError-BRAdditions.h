//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (BRAdditions)
+ (id)brc_errorCoreAnalyticsErrorCountMismatchWithExpected:(id)arg1 actual:(id)arg2;	// IMP=0x000000000003b3bb
+ (id)brc_errorItemChanged;	// IMP=0x000000000003b38a
+ (id)brc_addPartialError:(id)arg1 forURL:(id)arg2 toError:(id)arg3;	// IMP=0x000000000003b12c
+ (id)brc_errorItemNotPausedFromSync;	// IMP=0x000000000003b0fb
+ (id)brc_errorItemAlreadyPausedFromSyncByBundleID:(id)arg1;	// IMP=0x000000000003b00e
+ (id)brc_errorItemIneligibleFromSyncForInode:(id)arg1;	// IMP=0x000000000003af21
+ (id)brc_errorItemInTrash;	// IMP=0x000000000003aef0
+ (id)brc_errorItemNotShareable;	// IMP=0x000000000003aebf
+ (id)brc_errorFolderHierarchyTooDeep;	// IMP=0x000000000003ae8e
+ (id)brc_errorFolderHasSharedSubitems;	// IMP=0x000000000003ae5d
+ (id)brc_errorFolderHasSharedSubitemsWithSharedByMeURLs:(id)arg1 sharedToMeURLs:(id)arg2;	// IMP=0x000000000003ad06
+ (id)brc_errorItemAlreadyPartOfAShare;	// IMP=0x000000000003acd5
+ (id)brc_errorSyncBlocked;	// IMP=0x000000000003aca4
+ (id)brc_errorDriveDisabledOrAppLibraryDisabled;	// IMP=0x000000000003ac73
+ (id)brc_errorAcceptAlreadyInProgressForURL:(id)arg1;	// IMP=0x000000000003ac3b
+ (id)brc_errorCompatibilityIssue;	// IMP=0x000000000003ac0a
+ (id)brc_errorOperationCancelled;	// IMP=0x000000000003abd9
+ (id)brc_errorDocumentWithFilename:(id)arg1 size:(long long)arg2 isTooLargeToUpload:(long long)arg3;	// IMP=0x000000000003ab96
+ (id)brc_errorAccountMismatch;	// IMP=0x000000000003ab65
+ (id)brc_errorDocumentEvicted;	// IMP=0x000000000003ab34
+ (id)brc_errorDocumentIsNoLongerSharedAtURL:(id)arg1;	// IMP=0x000000000003aab4
+ (id)brc_errorDocumentIsNotSharedAtURL:(id)arg1;	// IMP=0x000000000003aa34
+ (id)brc_errorDocumentIsNotShared;	// IMP=0x000000000003aa03
+ (id)brc_errorDocumentAtURL:(id)arg1 isNotExternalToAppLibrary:(id)arg2;	// IMP=0x000000000003a892
+ (id)brc_errorNoDocumentAtURL:(id)arg1 underlyingPOSIXError:(int)arg2;	// IMP=0x000000000003a736
+ (id)brc_errorNoSuitableClientApp;	// IMP=0x000000000003a705
+ (id)brc_errorSyncDisabled:(id)arg1;	// IMP=0x000000000003a6cd
+ (id)brc_errorClientZoneNotFound:(id)arg1;	// IMP=0x000000000003a695
+ (id)brc_errorNoAppLibraryForBundle:(id)arg1;	// IMP=0x000000000003a65d
+ (id)brc_errorAppLibraryNotFound:(id)arg1;	// IMP=0x000000000003a625
+ (id)brc_errorUnknownKey:(id)arg1;	// IMP=0x000000000003a5ed
+ (id)brc_errorItemNotFound:(id)arg1;	// IMP=0x000000000003a5b5
+ (id)brc_errorPermissionErrorAtURL:(id)arg1;	// IMP=0x000000000003a491
+ (id)brc_errorPermissionError:(id)arg1;	// IMP=0x000000000003a395
+ (id)brc_errorPathOutsideAnyCloudDocsAppLibraryAtURL:(id)arg1;	// IMP=0x000000000003a271
+ (id)brc_errorNotInCloud:(id)arg1;	// IMP=0x000000000003a14d
+ (id)brc_errorNotOnDisk:(id)arg1;	// IMP=0x000000000003a044
+ (id)brc_errorInvalidParameter:(id)arg1 value:(id)arg2;	// IMP=0x000000000003a003
+ (id)brc_errorMethodNotImplemented:(SEL)arg1;	// IMP=0x0000000000039f43
+ (id)brc_errorDaemonShouldBeLoggedOut;	// IMP=0x0000000000039f12
+ (id)brc_errorLoggedOut;	// IMP=0x0000000000039ee1
+ (id)br_errorFromErrno;	// IMP=0x0000000000039c6a
+ (id)br_errorWithPOSIXCode:(int)arg1 description:(id)arg2;	// IMP=0x0000000000039af7
+ (id)br_errorWithPOSIXCode:(int)arg1;	// IMP=0x00000000000399aa
+ (id)br_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 description:(id)arg4;	// IMP=0x0000000000039810
+ (id)br_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;	// IMP=0x000000000003968b
- (id)br_underlyingPOSIXError;	// IMP=0x0000000000039df0
- (_Bool)br_isCloudDocsErrorCode:(long long)arg1;	// IMP=0x0000000000039d7c
- (_Bool)br_isCocoaErrorCode:(long long)arg1;	// IMP=0x0000000000039d08
- (_Bool)br_isPOSIXErrorCode:(long long)arg1;	// IMP=0x0000000000039c94
@end
