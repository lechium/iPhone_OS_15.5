//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TTParagraphStyle;

@interface ICTrackedParagraph : NSObject
{
    TTParagraphStyle *_paragraph;	// 8 = 0x8
    struct _NSRange _characterRange;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b6172
@property(nonatomic) struct _NSRange characterRange; // @synthesize characterRange=_characterRange;
@property(retain, nonatomic) TTParagraphStyle *paragraph; // @synthesize paragraph=_paragraph;
- (id)description;	// IMP=0x00000000000b6091

@end

