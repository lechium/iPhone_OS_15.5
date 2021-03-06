//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesShared/TTAttachment-Protocol.h>

@class NSString;

@interface TTAttachment : NSObject <TTAttachment>
{
    NSString *_attachmentIdentifier;	// 8 = 0x8
    NSString *_attachmentUTI;	// 16 = 0x10
}

+ (_Bool)typeUTIIsInlineAttachment:(id)arg1;	// IMP=0x00000000000b0b5d
+ (_Bool)isInlineAttachment:(id)arg1;	// IMP=0x00000000000b0b07
+ (_Bool)isAttachment:(id)arg1 equalToModelComparable:(id)arg2;	// IMP=0x00000000000b0a46
- (void).cxx_destruct;	// IMP=0x00000000000b0ff0
@property(copy, nonatomic) NSString *attachmentUTI; // @synthesize attachmentUTI=_attachmentUTI;
@property(copy, nonatomic) NSString *attachmentIdentifier; // @synthesize attachmentIdentifier=_attachmentIdentifier;
- (struct CGRect)attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(struct CGRect)arg4 position:(struct CGPoint)arg5;	// IMP=0x00000000000b0df5
- (id)inlineAttachmentInContext:(id)arg1;	// IMP=0x00000000000b0d66
- (id)attachmentInContext:(id)arg1;	// IMP=0x00000000000b0cd7
- (_Bool)isEqualToModelComparable:(id)arg1;	// IMP=0x00000000000b0cb8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b0c45
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

