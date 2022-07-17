//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCDSummary : NSObject
{
    NSString *mTitle;	// 8 = 0x8
    NSString *mAuthor;	// 16 = 0x10
    NSString *mKeywords;	// 24 = 0x18
    NSString *mComments;	// 32 = 0x20
    NSString *mHyperlinkBase;	// 40 = 0x28
    NSString *_subject;	// 48 = 0x30
    NSString *_company;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003568f0
@property(retain) NSString *company; // @synthesize company=_company;
@property(retain) NSString *subject; // @synthesize subject=_subject;
- (void)setHyperlinkBase:(id)arg1;	// IMP=0x00000000000b0cba
- (id)hyperlinkBase;	// IMP=0x000000000035689c
- (void)setComments:(id)arg1;	// IMP=0x00000000000b0ca9
- (id)comments;	// IMP=0x000000000035688e
- (void)setKeywords:(id)arg1;	// IMP=0x00000000000b0c98
- (id)keywords;	// IMP=0x0000000000356880
- (void)setAuthor:(id)arg1;	// IMP=0x00000000000b0c87
- (id)author;	// IMP=0x0000000000356872
- (void)setTitle:(id)arg1;	// IMP=0x00000000000b0c76
- (id)title;	// IMP=0x00000000000ec81f

@end
