//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDAlignmentInfo, EDProtection, EDString;

__attribute__((visibility("hidden")))
@interface EDTextBox : NSObject
{
    EDString *mText;	// 8 = 0x8
    EDAlignmentInfo *mAlignmentInfo;	// 16 = 0x10
    EDProtection *mProtection;	// 24 = 0x18
}

+ (id)textBox;	// IMP=0x000000000016af63
- (void).cxx_destruct;	// IMP=0x00000000003b13d5
- (id)description;	// IMP=0x00000000003b1397
- (void)setProtection:(id)arg1;	// IMP=0x000000000016b0c2
- (id)protection;	// IMP=0x00000000003b1389
- (void)setAlignmentInfo:(id)arg1;	// IMP=0x000000000016b03c
- (id)alignmentInfo;	// IMP=0x00000000003b137b
- (void)setText:(id)arg1;	// IMP=0x000000000016b10d
- (id)text;	// IMP=0x000000000016b36d

@end

