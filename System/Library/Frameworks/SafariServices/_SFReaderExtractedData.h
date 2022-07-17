//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariServices/NSCopying-Protocol.h>
#import <SafariServices/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSURL;

@interface _SFReaderExtractedData : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    NSString *_author;	// 16 = 0x10
    NSString *_publishedDate;	// 24 = 0x18
    NSData *_body;	// 32 = 0x20
    NSURL *_mainImageURL;	// 40 = 0x28
    NSURL *_url;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000070634
- (void).cxx_destruct;	// IMP=0x00000000000708e2
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSURL *mainImageURL; // @synthesize mainImageURL=_mainImageURL;
@property(readonly, nonatomic) NSData *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSString *publishedDate; // @synthesize publishedDate=_publishedDate;
@property(readonly, copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000706f9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007063c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000705d5
- (id)_initWithAuthor:(id)arg1 body:(id)arg2 publishedDate:(id)arg3 title:(id)arg4 mainImageURL:(id)arg5 url:(id)arg6;	// IMP=0x0000000000070467
- (id)initWithReaderContent:(id)arg1 url:(id)arg2;	// IMP=0x00000000000702d4
- (id)description;	// IMP=0x000000000007027f

@end
