//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuickLookSupport/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString, QLTBitmapFormat, QLURLHandler, UTType;

@interface QLPreviewReply : NSObject <NSSecureCoding>
{
    _Bool _wantsBorder;	// 8 = 0x8
    unsigned long long _stringEncoding;	// 16 = 0x10
    NSDictionary *_attachments;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    unsigned long long _replyType;	// 40 = 0x28
    NSData *_data;	// 48 = 0x30
    UTType *_contentType;	// 56 = 0x38
    QLURLHandler *_fileURLHandler;	// 64 = 0x40
    QLTBitmapFormat *_bitmapFormat;	// 72 = 0x48
    CDUnknownBlockType _drawInContextBlock;	// 80 = 0x50
    CDUnknownBlockType _documentCreationBlock;	// 88 = 0x58
    CDUnknownBlockType _dataCreationBlock;	// 96 = 0x60
    struct CGSize _contentSize;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000010a0b
- (void).cxx_destruct;	// IMP=0x000000000001112b
@property(copy, nonatomic) CDUnknownBlockType dataCreationBlock; // @synthesize dataCreationBlock=_dataCreationBlock;
@property(copy, nonatomic) CDUnknownBlockType documentCreationBlock; // @synthesize documentCreationBlock=_documentCreationBlock;
@property(copy, nonatomic) CDUnknownBlockType drawInContextBlock; // @synthesize drawInContextBlock=_drawInContextBlock;
@property _Bool wantsBorder; // @synthesize wantsBorder=_wantsBorder;
@property(retain) QLTBitmapFormat *bitmapFormat; // @synthesize bitmapFormat=_bitmapFormat;
@property(retain) QLURLHandler *fileURLHandler; // @synthesize fileURLHandler=_fileURLHandler;
@property struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain) UTType *contentType; // @synthesize contentType=_contentType;
@property(retain) NSData *data; // @synthesize data=_data;
@property unsigned long long replyType; // @synthesize replyType=_replyType;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSDictionary *attachments; // @synthesize attachments=_attachments;
@property unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010c4a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010a13
- (id)drawWithContext:(struct CGContext *)arg1;	// IMP=0x00000000000108b7
- (id)updateFromDataCreationBlock;	// IMP=0x00000000000107f3
- (void)updateWithPDFData:(id)arg1;	// IMP=0x00000000000107e1
- (void)updateWithImageData:(id)arg1 bitmapFormat:(id)arg2;	// IMP=0x0000000000010780
- (id)initWithDataOfContentType:(id)arg1 contentSize:(struct CGSize)arg2 dataCreationBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000106b7
- (id)initWithFileURL:(id)arg1 forcedContentType:(id)arg2;	// IMP=0x0000000000010563
- (id)initWithFileURL:(id)arg1;	// IMP=0x000000000001054f
- (id)initForPDFWithPageSize:(struct CGSize)arg1 documentCreationBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010497
- (id)initWithContextSize:(struct CGSize)arg1 isBitmap:(_Bool)arg2 drawingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000103c9
- (id)initWithViewControllerOfPreferredContentSize:(struct CGSize)arg1 title:(id)arg2 wantsBorder:(_Bool)arg3;	// IMP=0x0000000000010313
- (id)init;	// IMP=0x000000000001029c

@end
