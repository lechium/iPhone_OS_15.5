//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTFileTransferServiceDebugInboxAuthorizedAPI-Protocol.h>

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface DTFileTransferService : DTXService <DTFileTransferServiceDebugInboxAuthorizedAPI>
{
    NSObject<OS_dispatch_queue> *_coordinationQueue;	// 8 = 0x8
    NSMutableArray *_activeFileTransfers;	// 16 = 0x10
}

+ (void)registerCapabilities:(id)arg1;	// IMP=0x0000000000059212
- (void).cxx_destruct;	// IMP=0x000000000005c827
- (_Bool)_unarchivePackageIfNecessary:(id)arg1;	// IMP=0x000000000005c0b7
- (id)_moveFileTransfer:(id)arg1 inDataContainerOfApplicationBundleIdentifier:(id)arg2 withError:(id *)arg3;	// IMP=0x000000000005bae0
- (id)_moveFileTransfer:(id)arg1 toDebugInboxOfApplicationWithBundleIdentifier:(id)arg2 outError:(id *)arg3;	// IMP=0x000000000005b53b
- (id)_beginTransferOfFileNamed:(id)arg1 outError:(id *)arg2;	// IMP=0x000000000005b057
- (_Bool)_fileTransfer:(id)arg1 isValidForApplication:(id)arg2;	// IMP=0x000000000005adfd
- (id)transferData:(id)arg1 intoAppContainerForBundleIdentifier:(id)arg2 filename:(id)arg3;	// IMP=0x000000000005a588
- (id)openFileInDocumentDebugInbox:(id)arg1 forApplicationWithBundleIdentifier:(id)arg2 withAnnotation:(id)arg3;	// IMP=0x0000000000059dd3
- (id)transferFile:(id)arg1 toDebugInboxOfApplicationWithBundleIdentifier:(id)arg2 destinationFilename:(id)arg3;	// IMP=0x0000000000059565
- (id)initWithChannel:(id)arg1;	// IMP=0x000000000005927b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

