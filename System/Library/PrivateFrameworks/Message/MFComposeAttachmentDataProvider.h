//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFAttachmentDataProviderProtocol-Protocol.h>

@class NSCache, NSMutableDictionary, NSString;

@interface MFComposeAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol>
{
    NSMutableDictionary *_attachmentsData;	// 8 = 0x8
    NSCache *_attachmentsPlaceholderData;	// 16 = 0x10
    NSMutableDictionary *_attachmentsPasteboardData;	// 24 = 0x18
    NSMutableDictionary *_attachmentsUndoData;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000c9da1
- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;	// IMP=0x00000000000c9d99
- (id)messageForAttachment:(id)arg1;	// IMP=0x00000000000c9d91
- (void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c9bcb
- (id)rawDataForContentID:(id)arg1;	// IMP=0x00000000000c972d
- (id)dataForContentID:(id)arg1;	// IMP=0x00000000000c9595
- (id)_dataForAttachment:(id)arg1;	// IMP=0x00000000000c947f
- (void)recordUndoDataForAttachments:(id)arg1;	// IMP=0x00000000000c91bc
- (void)recordPasteboardDataForAttachments:(id)arg1;	// IMP=0x00000000000c8ef9
- (void)removeDataForAttachment:(id)arg1;	// IMP=0x00000000000c8e5c
- (void)addDataItemProvider:(id)arg1 forContentID:(id)arg2;	// IMP=0x00000000000c8d79
- (void)addData:(id)arg1 forContentID:(id)arg2;	// IMP=0x00000000000c8c68
- (void)_commonInitWithDataProvider:(id)arg1 forContentID:(id)arg2;	// IMP=0x00000000000c8bda
- (id)initWithAttachmentDataItemProvider:(id)arg1 forContentID:(id)arg2;	// IMP=0x00000000000c8aec
- (id)initWithData:(id)arg1 forContentID:(id)arg2;	// IMP=0x00000000000c89fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

