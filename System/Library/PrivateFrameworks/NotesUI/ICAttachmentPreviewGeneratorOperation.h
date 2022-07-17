//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class ICAttachmentModel, NSManagedObjectContext, NSManagedObjectID;

@interface ICAttachmentPreviewGeneratorOperation : NSOperation
{
    NSManagedObjectID *_attachmentID;	// 8 = 0x8
    NSManagedObjectContext *_managedObjectContext;	// 16 = 0x10
    ICAttachmentModel *_attachmentModel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f9687
@property(retain) ICAttachmentModel *attachmentModel; // @synthesize attachmentModel=_attachmentModel;
@property(retain) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain) NSManagedObjectID *attachmentID; // @synthesize attachmentID=_attachmentID;
- (void)cancel;	// IMP=0x00000000000f94f8
- (void)main;	// IMP=0x00000000000f8a27
@property(readonly, nonatomic) unsigned long long type;
- (id)initWithAttachmentManagedObjectID:(id)arg1;	// IMP=0x00000000000f89b4

@end
