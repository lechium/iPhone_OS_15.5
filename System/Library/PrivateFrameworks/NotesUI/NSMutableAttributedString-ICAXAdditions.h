//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (ICAXAdditions)
- (void)icaxApplyLowerPitchTokenToRange:(struct _NSRange)arg1;	// IMP=0x0000000000023eb6
- (void)ic_addForegroundColorInRangesWhereNoColorAlreadyExists:(id)arg1;	// IMP=0x0000000000101c81
- (void)ic_setParagraphStyleForWritingDirection:(long long)arg1 andAlignment:(_Bool)arg2;	// IMP=0x0000000000101b1e
- (void)ic_convertParagraphStyleToBodyInRange:(struct _NSRange)arg1;	// IMP=0x0000000000135827
- (void)ic_addTextBlocks:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000135698
@end

