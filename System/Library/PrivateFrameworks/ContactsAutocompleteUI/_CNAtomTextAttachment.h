//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIFoundation/NSTextAttachment.h>

@class CNComposeRecipient, CNComposeRecipientAtom;

@interface _CNAtomTextAttachment : NSTextAttachment
{
    _Bool _isPlaceholder;	// 8 = 0x8
    CNComposeRecipientAtom *_atomView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004c548
@property(nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(retain, nonatomic) CNComposeRecipientAtom *atomView; // @synthesize atomView=_atomView;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;	// IMP=0x000000000004c3cf
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;	// IMP=0x000000000004c3c7
- (id)attributedStringWithBaseAttributes:(id)arg1;	// IMP=0x000000000004c28e
@property(readonly, nonatomic) CNComposeRecipient *recipient;
- (id)initWithAtomView:(id)arg1;	// IMP=0x000000000004c1bb

@end

