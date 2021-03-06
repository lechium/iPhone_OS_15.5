//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSWPLayout.h>

@class NSMutableSet;

@interface SXTextTangierTextLayout : TSWPLayout
{
    NSMutableSet *_addedChildren;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x00000000000d84a1
@property(retain, nonatomic) NSMutableSet *addedChildren; // @synthesize addedChildren=_addedChildren;
- (struct CGSize)maxSize;	// IMP=0x00000000000d846b
- (_Bool)drawableAttachment:(id)arg1 withLayout:(id)arg2 shouldPositionIterativelyInColumn:(id)arg3;	// IMP=0x00000000000d8379
- (void)drawableAttachment:(id)arg1 didFinalizePosition:(struct CGPoint)arg2;	// IMP=0x00000000000d824b
- (void)drawableAttachment:(id)arg1 willStartNewIterationWithIndex:(unsigned long long)arg2;	// IMP=0x00000000000d8082
- (void)startedIterativePositioningProcessForDrawableAttachment:(id)arg1;	// IMP=0x00000000000d7f9d
- (id)validatedLayoutForAttachedDrawable:(id)arg1;	// IMP=0x00000000000d7e46
- (id)attachedLayoutsInLayout:(id)arg1 anchored:(_Bool)arg2;	// IMP=0x00000000000d7ad9
- (_Bool)pushAscendersIntoColumn;	// IMP=0x00000000000d7ad1
- (_Bool)alwaysAllowWordSplit;	// IMP=0x00000000000d7ac9
- (void)invalidateTextLayout;	// IMP=0x00000000000d7910
- (void)invalidate;	// IMP=0x00000000000d78e1
- (void)validate;	// IMP=0x00000000000d789f
- (void)addAttachmentLayout:(id)arg1;	// IMP=0x00000000000d7767
- (id)layoutForInlineDrawable:(id)arg1;	// IMP=0x00000000000d7745
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;	// IMP=0x00000000000d7723
- (id)currentAnchoredDrawableLayouts;	// IMP=0x00000000000d7709
- (id)currentInlineDrawableLayouts;	// IMP=0x00000000000d76f2
- (struct __CFLocale *)hyphenationLocale;	// IMP=0x00000000000d7681
- (unsigned long long)iterativeAttachmentPositioningMaxPassCount;	// IMP=0x00000000000d7676
- (_Bool)shouldPositionAttachmentsIteratively;	// IMP=0x00000000000d766e
- (double)baselineForLastLine;	// IMP=0x00000000000d755d
- (double)lineHeightGuessForFirstLine;	// IMP=0x00000000000d7331

@end

