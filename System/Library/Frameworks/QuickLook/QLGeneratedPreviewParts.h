//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLookSupport/QLPreviewParts.h>

@class NSData, NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface QLGeneratedPreviewParts : QLPreviewParts
{
    NSData *_data;	// 8 = 0x8
    NSDictionary *_attachments;	// 16 = 0x10
    unsigned long long _stringEncoding;	// 24 = 0x18
    NSString *_mimeType;	// 32 = 0x20
    NSMutableDictionary *_idToURL;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000519ae
@property(retain) NSMutableDictionary *idToURL; // @synthesize idToURL=_idToURL;
@property(retain) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(retain) NSDictionary *attachments; // @synthesize attachments=_attachments;
@property(retain) NSData *data; // @synthesize data=_data;
- (id)URLRequestForContentID:(id)arg1;	// IMP=0x00000000000516b3
- (void)_registerURL:(id)arg1 forContentID:(id)arg2;	// IMP=0x00000000000515f0
- (id)newAttachmentURLWithID:(id)arg1 mimeType:(id)arg2 encoding:(unsigned long long)arg3;	// IMP=0x0000000000051549
- (void)_processAttachment:(id)arg1 withID:(id)arg2;	// IMP=0x00000000000512ab
- (void)computePreview:(CDUnknownBlockType)arg1;	// IMP=0x0000000000051139
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2 mimeType:(id)arg3 attachments:(id)arg4;	// IMP=0x0000000000051060

@end
