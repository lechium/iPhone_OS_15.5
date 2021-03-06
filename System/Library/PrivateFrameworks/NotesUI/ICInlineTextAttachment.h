//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICInlineAttachment;

@interface ICInlineTextAttachment
{
}

+ (Class)textAttachmentClassForAttachment:(id)arg1;	// IMP=0x0000000000094a4d
+ (id)textAttachmentWithAttachment:(id)arg1;	// IMP=0x00000000000949e5
- (id)printableTextContentForAppearanceType:(unsigned long long)arg1 styleAttributes:(id)arg2;	// IMP=0x0000000000094fc4
- (id)altText;	// IMP=0x0000000000094e28
- (id)attachmentUTI;	// IMP=0x0000000000094c8c
- (id)attachmentIdentifier;	// IMP=0x0000000000094af0
- (id)newlyCreatedView;	// IMP=0x0000000000094aaf
- (Class)attachmentViewClass;	// IMP=0x0000000000094a9e
- (id)inlineAttachmentInContext:(id)arg1;	// IMP=0x00000000000947e2
- (id)attachmentInContext:(id)arg1;	// IMP=0x00000000000947da
- (_Bool)isUnsupported;	// IMP=0x0000000000094796
- (id)initWithAttachment:(id)arg1;	// IMP=0x00000000000946a7

// Remaining properties
@property(retain, nonatomic) ICInlineAttachment *attachment; // @dynamic attachment;

@end

