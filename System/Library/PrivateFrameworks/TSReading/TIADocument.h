//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIDocument.h>

#import <TSReading/TSADocumentRootDelegate-Protocol.h>
#import <TSReading/TSKDocumentRootProvider-Protocol.h>
#import <TSReading/TSPObjectContextDelegate-Protocol.h>

@class NSObject, NSString, NSURL, SFUCryptoKey, TIADocumentInfo, TSADocumentRoot, TSPObjectContext;
@protocol NSFilePresenter, OS_dispatch_queue, TIADocumentPassphraseDelegate;

@interface TIADocument : UIDocument <TSADocumentRootDelegate, TSKDocumentRootProvider, TSPObjectContextDelegate>
{
    int _hasPersistenceErrors;	// 8 = 0x8
    TSADocumentRoot *_documentRootForDocumentDidLoad;	// 16 = 0x10
    TSADocumentRoot *_suspendedDocumentRoot;	// 24 = 0x18
    TSPObjectContext *_context;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_ioQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_ioOperationQueue;	// 48 = 0x30
    id _documentStateChangedObserver;	// 56 = 0x38
    _Bool _passwordEntryWasAbandoned;	// 64 = 0x40
    _Bool _isShowingConflictResolutionSheet;	// 65 = 0x41
    _Bool _isClosingWithoutSaving;	// 66 = 0x42
    _Bool _isReadOnly;	// 67 = 0x43
    _Bool _documentNeedsDownloadOnRevert;	// 68 = 0x44
    _Bool _documentRevertWasAbandoned;	// 69 = 0x45
    TIADocumentInfo *_documentInfo;	// 72 = 0x48
    id <TIADocumentPassphraseDelegate> _passphraseDelegate;	// 80 = 0x50
    SFUCryptoKey *_encryptionKey;	// 88 = 0x58
    NSString *_sourcePathForNondestructiveImport;	// 96 = 0x60
    TSPObjectContext *_contextForRevert;	// 104 = 0x68
    NSURL *_templateURL;	// 112 = 0x70
}

@property(readonly) _Bool documentRevertWasAbandoned; // @synthesize documentRevertWasAbandoned=_documentRevertWasAbandoned;
@property(readonly) _Bool documentNeedsDownloadOnRevert; // @synthesize documentNeedsDownloadOnRevert=_documentNeedsDownloadOnRevert;
@property _Bool isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property(copy, nonatomic) NSURL *templateURL; // @synthesize templateURL=_templateURL;
@property(retain, nonatomic) TSPObjectContext *contextForRevert; // @synthesize contextForRevert=_contextForRevert;
@property(retain, nonatomic) NSString *sourcePathForNondestructiveImport; // @synthesize sourcePathForNondestructiveImport=_sourcePathForNondestructiveImport;
@property(retain, nonatomic) SFUCryptoKey *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(nonatomic) id <TIADocumentPassphraseDelegate> passphraseDelegate; // @synthesize passphraseDelegate=_passphraseDelegate;
@property _Bool isClosingWithoutSaving; // @synthesize isClosingWithoutSaving=_isClosingWithoutSaving;
@property(readonly) _Bool isShowingConflictResolutionSheet; // @synthesize isShowingConflictResolutionSheet=_isShowingConflictResolutionSheet;
@property(retain, nonatomic) TIADocumentInfo *documentInfo; // @synthesize documentInfo=_documentInfo;
@property(retain, nonatomic) TSPObjectContext *context; // @synthesize context=_context;
@property(readonly) _Bool passwordEntryWasAbandoned; // @synthesize passwordEntryWasAbandoned=_passwordEntryWasAbandoned;
- (id)newExporterForType:(id)arg1 options:(id)arg2 preferredType:(id *)arg3;	// IMP=0x00000000003e62a2
@property(copy, nonatomic) NSString *documentPasswordHint;
- (_Bool)validatePassphrase:(id)arg1;	// IMP=0x00000000003e61fa
- (void)setEncryptionKeyWithPassphrase:(id)arg1;	// IMP=0x00000000003e6160
@property(readonly, nonatomic) _Bool isPasswordProtected;
- (void)decryptedDocumentWithKey:(id)arg1;	// IMP=0x00000000003e60fa
- (void)setDocumentFileProtectionTo:(id)arg1;	// IMP=0x00000000003e60ad
- (void)setFileProtectionTo:(id)arg1 atPath:(id)arg2;	// IMP=0x00000000003e6006
- (_Bool)_shouldPreventFileProtectionUpgradeToLevel:(id)arg1;	// IMP=0x00000000003e5f9e
- (void)context:(id)arg1 didDownloadDocumentResources:(id)arg2 failedOrCancelledDocumentResources:(id)arg3 error:(id)arg4;	// IMP=0x00000000003e5f30
- (id)persistenceWarningsForData:(id)arg1 isReadable:(_Bool)arg2 isExternal:(_Bool)arg3;	// IMP=0x00000000003e5ed9
- (id)additionalDocumentPropertiesForWrite;	// IMP=0x00000000003e5eae
- (id)packageDataForWrite;	// IMP=0x00000000003e5e83
- (void)coordinatedReadUsingAccessor:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e5d1d
@property(readonly, nonatomic) id <NSFilePresenter> filePresenter;
- (void)passwordStateDidChange;	// IMP=0x00000000003e5d00
@property(readonly, nonatomic) NSString *name;
@property(readonly) _Bool hasPersistenceErrors;
- (_Bool)shouldAbandonDocumentRevert;	// IMP=0x00000000003e5cb9
- (void)documentDidLoad;	// IMP=0x00000000003e5c75
- (id)contentsForType:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003e5c5c
- (void)p_performSynchronousBlockOnMainThread:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e5c1a
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e595b
@property(readonly, nonatomic) _Bool isClosed;
@property(readonly) _Bool shouldHideForSnapshots;
@property(readonly, nonatomic) NSString *documentCachePath;
- (id)documentUUID;	// IMP=0x00000000003e5901
- (_Bool)hasUnsavedChanges;	// IMP=0x00000000003e5885
@property(readonly, retain, nonatomic) TSADocumentRoot *documentRoot;
- (void)dealloc;	// IMP=0x00000000003e5729
- (id)initWithTemporaryFileURL:(id)arg1;	// IMP=0x00000000003e55d4

// Remaining properties
@property(readonly, nonatomic) _Bool areNewExternalReferencesToDataAllowed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSString *defaultDraftName;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool ignoreDocumentSupport;
@property(readonly, nonatomic) _Bool isDocumentSupportTemporary;
@property(readonly) Class superclass;

@end

