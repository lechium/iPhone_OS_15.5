//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MFAttachmentPlaceholder : NSObject
{
    NSMutableDictionary *_jsonDictionary;	// 8 = 0x8
}

+ (id)serializedPlaceholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4;	// IMP=0x00000000000c3dc2
+ (id)placeholderDirectory;	// IMP=0x00000000000c3c2d
+ (void)removePlaceholder:(id)arg1;	// IMP=0x00000000000c3bca
+ (void)removePlaceholderForFileURL:(id)arg1;	// IMP=0x00000000000c3acc
+ (_Bool)setFileProtectionForFileAt:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c3a9f
+ (void)cloneFileAtURL:(id)arg1 toPlaceholderURL:(id)arg2;	// IMP=0x00000000000c37da
+ (_Bool)writeData:(id)arg1 forURL:(id)arg2;	// IMP=0x00000000000c36da
+ (id)dataForPlaceholder:(id)arg1;	// IMP=0x00000000000c32e3
+ (id)placeholderRepresentations:(id)arg1;	// IMP=0x00000000000c2d8f
+ (_Bool)hasPlaceholderRepresentation:(id)arg1;	// IMP=0x00000000000c2c7c
+ (_Bool)isPlaceholderSerializedRepresentation:(id)arg1;	// IMP=0x00000000000c2a6f
+ (id)_placeholderMagic;	// IMP=0x00000000000c29fe
+ (id)placeholderFromSerializedRepresentation:(id)arg1;	// IMP=0x00000000000c2815
+ (id)_localStoreURLForFileData:(id)arg1 contentID:(id)arg2;	// IMP=0x00000000000c26b1
+ (id)attachmentPlaceholderForData:(id)arg1 fileName:(id)arg2 type:(id)arg3 contentID:(id)arg4;	// IMP=0x00000000000c1f91
+ (id)attachmentPlaceholderForFileURL:(id)arg1 fileName:(id)arg2 fileSize:(long long)arg3 type:(id)arg4 contentID:(id)arg5;	// IMP=0x00000000000c1d2b
+ (id)placeholder;	// IMP=0x00000000000c1c8d
- (void).cxx_destruct;	// IMP=0x00000000000c401b
- (id)serializedRepresentation;	// IMP=0x00000000000c2b4a
- (void)setUseMailDrop:(_Bool)arg1;	// IMP=0x00000000000c2642
- (_Bool)useMailDrop;	// IMP=0x00000000000c25df
- (void)setContentID:(id)arg1;	// IMP=0x00000000000c25c1
- (id)contentID;	// IMP=0x00000000000c25a4
- (id)fileURL;	// IMP=0x00000000000c252d
- (void)setFileURLString:(id)arg1;	// IMP=0x00000000000c250f
- (id)fileURLString;	// IMP=0x00000000000c24f2
- (void)setMimeType:(id)arg1;	// IMP=0x00000000000c24d4
- (id)mimeType;	// IMP=0x00000000000c24b7
- (void)setFileSize:(unsigned long long)arg1;	// IMP=0x00000000000c2448
- (unsigned long long)fileSize;	// IMP=0x00000000000c23e5
- (void)setFileName:(id)arg1;	// IMP=0x00000000000c23c7
- (id)fileName;	// IMP=0x00000000000c23aa
- (void)_setJSONDictionary:(id)arg1;	// IMP=0x00000000000c2399
- (id)description;	// IMP=0x00000000000c2213
- (id)init;	// IMP=0x00000000000c1c9f

@end

