//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBSOpenSearchURLTemplateParameter : NSObject
{
    _Bool _optional;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_prefix;	// 24 = 0x18
    struct _NSRange _range;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000102ffe
@property(nonatomic, getter=isOptional) _Bool optional; // @synthesize optional=_optional;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

