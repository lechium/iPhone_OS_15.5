//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface WRCannedReply : NSObject
{
    NSString *_text;	// 8 = 0x8
    NSString *_defaultReplyText;	// 16 = 0x10
    NSString *_defaultReplyKey;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000361b
@property(retain, nonatomic) NSString *defaultReplyKey; // @synthesize defaultReplyKey=_defaultReplyKey;
@property(retain, nonatomic) NSString *defaultReplyText; // @synthesize defaultReplyText=_defaultReplyText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;

@end
