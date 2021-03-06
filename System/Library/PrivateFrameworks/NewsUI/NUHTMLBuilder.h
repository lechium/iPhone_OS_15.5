//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString;

@interface NUHTMLBuilder : NSObject
{
    NSMutableString *_string;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000041aee
@property(retain, nonatomic) NSMutableString *string; // @synthesize string=_string;
- (id)URLEncode:(id)arg1;	// IMP=0x0000000000041a4c
- (id)encodeHTMLEntities:(id)arg1;	// IMP=0x00000000000418d6
- (id)appendHTML:(id)arg1;	// IMP=0x0000000000041843
- (id)appendText:(id)arg1;	// IMP=0x00000000000417a2
- (id)appendLink:(id)arg1 withURL:(id)arg2;	// IMP=0x00000000000416b7
- (id)appendParagraphText:(id)arg1;	// IMP=0x0000000000041616
- (id)appendParagraph:(id)arg1;	// IMP=0x0000000000041578
- (id)appendStrong:(id)arg1;	// IMP=0x00000000000414d7
- (id)appendBreak;	// IMP=0x0000000000041483
- (id)fullHTML;	// IMP=0x0000000000041417
- (id)HTML;	// IMP=0x00000000000413cf
- (id)init;	// IMP=0x0000000000041379

@end

