//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCoding-Protocol.h>

@class NSArray, NSDate, NSString;

@interface MWFeedItem : NSObject <NSCoding>
{
    NSString *identifier;	// 8 = 0x8
    NSString *title;	// 16 = 0x10
    NSString *link;	// 24 = 0x18
    NSDate *date;	// 32 = 0x20
    NSDate *updated;	// 40 = 0x28
    NSString *summary;	// 48 = 0x30
    NSString *content;	// 56 = 0x38
    NSString *author;	// 64 = 0x40
    NSArray *enclosures;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000002facc9
@property(copy, nonatomic) NSArray *enclosures; // @synthesize enclosures;
@property(copy, nonatomic) NSString *author; // @synthesize author;
@property(copy, nonatomic) NSString *content; // @synthesize content;
@property(copy, nonatomic) NSString *summary; // @synthesize summary;
@property(copy, nonatomic) NSDate *updated; // @synthesize updated;
@property(copy, nonatomic) NSDate *date; // @synthesize date;
@property(copy, nonatomic) NSString *link; // @synthesize link;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002faaa5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002fa8f0
- (id)description;	// IMP=0x00000000002fa7d2

@end

