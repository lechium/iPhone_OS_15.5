//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSTextAttachmentCell-Protocol.h>

@class NSString, NSTextAttachment;

__attribute__((visibility("hidden")))
@interface UITextAttachmentView <NSTextAttachmentCell>
{
    NSTextAttachment *_attachment;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000010a0935
@property(nonatomic) __weak NSTextAttachment *attachment; // @synthesize attachment=_attachment;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;	// IMP=0x00000000010a0851
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;	// IMP=0x00000000010a04d8
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3;	// IMP=0x00000000010a04c3
- (struct CGPoint)cellBaselineOffset;	// IMP=0x00000000010a0437
- (struct CGSize)cellSize;	// IMP=0x00000000010a03aa
- (id)contentView;	// IMP=0x00000000010a035a
- (id)initWithTextAttachment:(id)arg1 image:(id)arg2;	// IMP=0x00000000010a018b
- (id)initWithContentView:(id)arg1;	// IMP=0x00000000010a0087

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

