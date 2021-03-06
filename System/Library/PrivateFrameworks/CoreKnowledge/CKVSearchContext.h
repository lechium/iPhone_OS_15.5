//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>
#import <CoreKnowledge/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface CKVSearchContext : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_context;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a798d
+ (id)_supportedContextClasses;	// IMP=0x00000000000a78f8
- (void).cxx_destruct;	// IMP=0x00000000000a7762
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a76a7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a7684
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a7629
- (id)contextForType:(unsigned short)arg1;	// IMP=0x00000000000a7581
- (_Bool)setContext:(id)arg1 withType:(unsigned short)arg2;	// IMP=0x00000000000a72f3

@end

