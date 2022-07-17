//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MessageLegacy/MFAttachmentDataProviderProtocol-Protocol.h>

@class MFMessageLibrary, NSString;

@interface MFAttachmentLibraryDataProvider : NSObject <MFAttachmentDataProviderProtocol>
{
    MFMessageLibrary *_messageLibrary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004b39c
@property __weak MFMessageLibrary *messageLibrary; // @synthesize messageLibrary=_messageLibrary;
- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;	// IMP=0x000000000004b252
- (id)messageForAttachment:(id)arg1;	// IMP=0x000000000004afe6
- (void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000004ab13
- (id)fetchLocalDataForAttachment:(id)arg1;	// IMP=0x000000000004a98e
- (id)initWithLibrary:(id)arg1;	// IMP=0x000000000004a926

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
