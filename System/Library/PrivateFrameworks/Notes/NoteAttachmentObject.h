//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString, NoteObject;

@interface NoteAttachmentObject : NSManagedObject
{
}

+ (_Bool)applyFileAttributesForAttachment:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000172dd
+ (_Bool)migrateFileForAttachment:(id)arg1 toCurrentAttachmentPathWithError:(id *)arg2;	// IMP=0x0000000000017077
+ (_Bool)migrateAttachmentRelatedFilesInContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000016e1b
+ (id)attachmentDirectoryPathForAttachmentObjectID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001638a
+ (id)attachmentDirectoryURLForAttachmentObjectID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001632a
- (void)prepareForDeletion;	// IMP=0x0000000000016a86
- (id)attachmentDataWithError:(id *)arg1;	// IMP=0x0000000000016a1e
- (id)attachmentDataFileURLWithError:(id *)arg1;	// IMP=0x00000000000169c3
- (_Bool)persistAttachmentData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000167df

// Remaining properties
@property(retain, nonatomic) NSString *contentID; // @dynamic contentID;
@property(retain, nonatomic) NSString *filename; // @dynamic filename;
@property(retain, nonatomic) NSString *mimeType; // @dynamic mimeType;
@property(retain, nonatomic) NoteObject *note; // @dynamic note;

@end
