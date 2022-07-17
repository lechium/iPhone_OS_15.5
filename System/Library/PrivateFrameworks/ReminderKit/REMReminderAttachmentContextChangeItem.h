//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, REMReminderChangeItem;

@interface REMReminderAttachmentContextChangeItem : NSObject
{
    REMReminderChangeItem *_reminderChangeItem;	// 8 = 0x8
    NSMutableArray *_mutableAttachments;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000174b4
@property(retain, nonatomic) NSMutableArray *mutableAttachments; // @synthesize mutableAttachments=_mutableAttachments;
@property(retain, nonatomic) REMReminderChangeItem *reminderChangeItem; // @synthesize reminderChangeItem=_reminderChangeItem;
- (void)removeAllAttachmentsWithClass:(Class)arg1;	// IMP=0x0000000000017272
- (void)removeAllAttachments;	// IMP=0x0000000000017163
- (void)removeAttachment:(id)arg1;	// IMP=0x0000000000016ec8
- (void)insertAttachment:(id)arg1 afterAttachment:(id)arg2;	// IMP=0x0000000000016c9e
- (void)insertAttachment:(id)arg1 beforeAttachment:(id)arg2;	// IMP=0x0000000000016a93
- (void)addAttachment:(id)arg1;	// IMP=0x0000000000016a7f
- (void)removeURLAttachments;	// IMP=0x0000000000016a51
- (id)addURLAttachmentWithURL:(id)arg1;	// IMP=0x000000000001690d
- (id)setURLAttachmentWithURL:(id)arg1;	// IMP=0x00000000000168a8
- (id)addImageAttachmentWithData:(id)arg1 uti:(id)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;	// IMP=0x000000000001660b
- (id)addImageAttachmentWithURL:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000000163a2
- (id)addFileAttachmentWithData:(id)arg1 uti:(id)arg2;	// IMP=0x000000000001615b
- (id)addFileAttachmentWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000015f0f
@property(readonly, nonatomic) NSArray *urlAttachments;
@property(readonly, nonatomic) NSArray *imageAttachments;
@property(readonly, nonatomic) NSArray *fileAttachments;
- (id)attachmentsOfClass:(Class)arg1;	// IMP=0x0000000000015db1
@property(readonly, nonatomic) NSArray *attachments;
- (id)initWithReminderChangeItem:(id)arg1;	// IMP=0x0000000000015cf6

@end
