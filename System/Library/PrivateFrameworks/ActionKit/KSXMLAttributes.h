//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCopying-Protocol.h>

@class NSDictionary, NSMutableArray;

@interface KSXMLAttributes : NSObject <NSCopying>
{
    NSMutableArray *_attributes;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000030b98f
- (id)description;	// IMP=0x000000000030b88a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000030b854
- (void)close;	// IMP=0x000000000030b83e
- (void)addAttribute:(id)arg1 value:(id)arg2;	// IMP=0x000000000030b74c
- (_Bool)hasAttributes;	// IMP=0x000000000030b72f
@property(copy, nonatomic) NSDictionary *attributesAsDictionary;
- (id)initWithXMLAttributes:(id)arg1;	// IMP=0x000000000030b436
- (id)init;	// IMP=0x000000000030b3cb
- (void)writeAttributes:(id)arg1;	// IMP=0x0000000000219885

@end
