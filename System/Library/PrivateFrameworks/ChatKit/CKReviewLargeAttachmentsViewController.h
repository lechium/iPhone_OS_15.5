//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/QLPreviewControllerDelegate-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CKReviewLargeAttachmentsViewController <QLPreviewControllerDelegate>
{
    NSArray *_attachments;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000cfd1
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
- (id)_previewItem;	// IMP=0x000000000000cecc
- (void)_populateAttachmentData;	// IMP=0x000000000000cd97
- (id)attachmentClass;	// IMP=0x000000000000cd8f
- (void)previewControllerDidDismiss:(id)arg1;	// IMP=0x000000000000ccf0
- (void)didSelectModelObjectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000cb56
- (void)deleteModelObjectAndUnderlyingData:(id)arg1;	// IMP=0x000000000000ca3f
- (id)modelObjectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000c9d0
- (unsigned long long)numberOfModelObjects;	// IMP=0x000000000000c97c
- (void)reloadModelData;	// IMP=0x000000000000c968
- (Class)tableViewCellClass;	// IMP=0x000000000000c957
- (id)tableViewCellReuseIdentifier;	// IMP=0x000000000000c94a
- (id)navigationBarTitle;	// IMP=0x000000000000c8cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
