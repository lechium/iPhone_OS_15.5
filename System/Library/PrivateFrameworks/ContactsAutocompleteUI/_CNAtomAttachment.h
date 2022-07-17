//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIFoundation/NSTextAttachment.h>

@class _CNAtomLayoutView;

@interface _CNAtomAttachment : NSTextAttachment
{
    _CNAtomLayoutView *_atomView;	// 8 = 0x8
    id _representedObject;	// 16 = 0x10
}

+ (id)attachmentWithAtomLayoutView:(id)arg1 representedObject:(id)arg2;	// IMP=0x000000000001b8a6
- (void).cxx_destruct;	// IMP=0x000000000001ba46
@property(readonly, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(readonly, nonatomic) _CNAtomLayoutView *atomView; // @synthesize atomView=_atomView;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;	// IMP=0x000000000001b9cf
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;	// IMP=0x000000000001b9c7
- (id)initWithAtomLayoutView:(id)arg1 representedObject:(id)arg2;	// IMP=0x000000000001b912

@end
