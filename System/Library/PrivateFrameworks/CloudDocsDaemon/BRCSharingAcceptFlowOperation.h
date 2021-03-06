//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/BRCForegroundClient-Protocol.h>
#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>
#import <CloudDocsDaemon/LSOpenResourceOperationDelegate-Protocol.h>

@class BRCAcceptShareOperation, BRCAccountSession, BRCAppLibrary, BRCClientZone, BRCItemID, BRCXPCClient, CKRecordID, CKShareMetadata, NSArray, NSObject, NSString, NSURL;
@protocol BRCUserNotifier, OS_dispatch_group, OS_dispatch_queue;

@interface BRCSharingAcceptFlowOperation <LSOpenResourceOperationDelegate, BRCForegroundClient, BRCOperationSubclass>
{
    id <BRCUserNotifier> _userNotification;	// 32 = 0x20
    BRCAccountSession *_session;	// 40 = 0x28
    NSArray *_acceptationFlow;	// 48 = 0x30
    unsigned long long _stepIndex;	// 56 = 0x38
    NSURL *_shareURL;	// 64 = 0x40
    CKRecordID *_shareID;	// 72 = 0x48
    CKShareMetadata *_shareMetadata;	// 80 = 0x50
    BRCItemID *_linkItemID;	// 88 = 0x58
    BRCItemID *_rootItemID;	// 96 = 0x60
    NSString *_unsaltedBookmarkData;	// 104 = 0x68
    BRCClientZone *_clientZone;	// 112 = 0x70
    BRCAppLibrary *_appLibrary;	// 120 = 0x78
    _Bool _needsZoneAndAppLibraryActivation;	// 128 = 0x80
    BRCAcceptShareOperation *_acceptOperation;	// 136 = 0x88
    _Bool _allowsDirectoryFaults;	// 144 = 0x90
    NSURL *_liveFileURL;	// 152 = 0x98
    NSObject<OS_dispatch_group> *_shareAcceptGroup;	// 160 = 0xa0
    NSString *_rootFilename;	// 168 = 0xa8
    NSString *_linkFilename;	// 176 = 0xb0
    BRCXPCClient *_xpcClient;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_queue;	// 192 = 0xc0
    _Bool _skipOpenInApp;	// 200 = 0xc8
}

+ (void)_openShareURLInWebBrowser:(id)arg1 withReason:(id)arg2;	// IMP=0x00000000001c6585
+ (void)_openAppStoreForShareURL:(id)arg1;	// IMP=0x00000000001c6415
+ (void)_openiCloudSettings;	// IMP=0x00000000001c6394
+ (id)_runningShareIDs;	// IMP=0x00000000001c633f
+ (Class)userNotificationClass;	// IMP=0x00000000001bb5bb
- (void).cxx_destruct;	// IMP=0x00000000001c69ac
@property(nonatomic) _Bool skipOpenInApp; // @synthesize skipOpenInApp=_skipOpenInApp;
- (void)_endAcceptationFlow;	// IMP=0x00000000001c6320
- (void)_openSharedItemIfStillNeeded;	// IMP=0x00000000001c60f7
- (void)_setSpotlightAttribute;	// IMP=0x00000000001c5e72
- (void)_prepareToDownloadSharedDocument;	// IMP=0x00000000001c58b9
- (void)_locateSharedItemOnDisk;	// IMP=0x00000000001c54dc
- (void)_waitForSharedItemToBeOnDiskOnRecipient;	// IMP=0x00000000001c50c9
- (void)_waitForSharedItemToSyncDownOnRecipient;	// IMP=0x00000000001c4dd4
- (void)_locateSharedItemOnRecipient;	// IMP=0x00000000001c484c
- (void)_createServerFaultIfPossibleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001c3b63
- (void)_finishShareAccept;	// IMP=0x00000000001c3a52
- (void)_openSharedSideFaultFile;	// IMP=0x00000000001c3814
- (void)_openDocumentInDocumentsAppIfInstalled:(id)arg1;	// IMP=0x00000000001c35b6
- (void)_openSharedSideFaultFileWithAppID:(id)arg1;	// IMP=0x00000000001c3138
- (void)_checkIfShouldWaitUntilDownloadCompletion;	// IMP=0x00000000001c3126
- (void)_createSideFaultOnDisk;	// IMP=0x00000000001c18aa
- (void)_waitForSharedItemToBeOnDiskOnOwner;	// IMP=0x00000000001c1497
- (void)_waitForSharedItemToSyncDownOnOwner;	// IMP=0x00000000001c1168
- (void)_locateSharedItemOnOwner;	// IMP=0x00000000001c0c0e
- (void)_openiWorkAppPreemptively;	// IMP=0x00000000001c0889
- (void)_startShareAccept;	// IMP=0x00000000001bfc96
- (void)_parseShareMetadata;	// IMP=0x00000000001bf145
- (void)_showSharingJoinDialog;	// IMP=0x00000000001bed66
- (void)_isAccountRestricted;	// IMP=0x00000000001beaaa
- (void)_isUserSignedInToiCloudDrive;	// IMP=0x00000000001be3a1
- (void)_isAppInstalled;	// IMP=0x00000000001bddbe
- (void)_isFolderSharingSupported;	// IMP=0x00000000001bdc99
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000001bdc20
- (void)openResourceOperationDidComplete:(id)arg1;	// IMP=0x00000000001bdbc8
- (void)_activateSharedZoneIfNeeded;	// IMP=0x00000000001bd961
- (void)_captureOpenInfoFromItem:(id)arg1;	// IMP=0x00000000001bd84c
- (_Bool)_isiWorkShare;	// IMP=0x00000000001bd63c
- (_Bool)_isiWorkLinkInsideFolderShare;	// IMP=0x00000000001bd5e6
- (_Bool)_isDirectoryLinkInsideFolderShare;	// IMP=0x00000000001bd4ad
- (_Bool)_isDocumentLinkInsideFolderShare;	// IMP=0x00000000001bd3f0
- (_Bool)_isLinkInsideFolderShare;	// IMP=0x00000000001bd2f1
- (_Bool)_isFolderShare;	// IMP=0x00000000001bd2a2
- (_Bool)_isOwnerOrShareAlreadyAccepted;	// IMP=0x00000000001bd20e
- (_Bool)_isOwner;	// IMP=0x00000000001bd196
- (void)_showGenericErrorAndFinish:(id)arg1;	// IMP=0x00000000001bcf6f
- (void)_jumpToSelector:(SEL)arg1;	// IMP=0x00000000001bcefc
- (void)_jumpToSelectorInQueue:(SEL)arg1;	// IMP=0x00000000001bcd7a
- (void)_performNextStep;	// IMP=0x00000000001bcd12
- (void)_performNextStepInQueue;	// IMP=0x00000000001bca6e
- (void)main;	// IMP=0x00000000001bc032
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000001bb774
- (id)subclassableDescriptionWithContext:(id)arg1;	// IMP=0x00000000001bb746
- (id)_stepNameAtIndex:(unsigned long long)arg1 withPrefix:(id)arg2;	// IMP=0x00000000001bb627
- (_Bool)shouldRetryForError:(id)arg1;	// IMP=0x00000000001bb61f
@property(readonly, nonatomic) NSString *identifier;
- (id)createActivity;	// IMP=0x00000000001bb5e9
- (void)moveDialogToFront;	// IMP=0x00000000001bb5cc
- (id)initWithShareMetadata:(id)arg1 client:(id)arg2 session:(id)arg3;	// IMP=0x00000000001bb37b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

