//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _NSLexiconWord : NSObject
{
    NSString *_token;	// 8 = 0x8
    NSArray *_parts;	// 16 = 0x10
    CDStruct_be0ff5be _attributes;	// 24 = 0x18
}

@property(readonly, nonatomic) CDStruct_be0ff5be attributes; // @synthesize attributes=_attributes;
@property(readonly, copy, nonatomic) NSArray *parts; // @synthesize parts=_parts;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void)dealloc;	// IMP=0x0000000000082c0c
- (id)description;	// IMP=0x00000000000821a9

@end

