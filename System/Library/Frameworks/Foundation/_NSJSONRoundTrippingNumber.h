//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _NSJSONRoundTrippingNumber : NSObject <NSSecureCoding>
{
    NSNumber *_number;	// 8 = 0x8
    NSString *_representation;	// 16 = 0x10
}

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000001a6060
+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x00000000001a5fdf
+ (_Bool)isSubclassOfClass:(Class)arg1;	// IMP=0x00000000001a5f19
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001a5c8b
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000001a608f
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000001a6079
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000001a6039
- (_Bool)isNSNumber__;	// IMP=0x00000000001a5fd7
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x00000000001a5f78
- (Class)superclass;	// IMP=0x00000000001a5f08
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a5e74
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a5c9b
- (_Bool)_allowsDirectEncoding;	// IMP=0x00000000001a5c93
- (unsigned long long)hash;	// IMP=0x00000000001a5c75
- (_Bool)isEqualToNumber:(id)arg1;	// IMP=0x00000000001a5c26
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a5bd9
- (id)stringValue;	// IMP=0x00000000001a5bbb
- (void)dealloc;	// IMP=0x00000000001a5b4e
- (id)initWithNumber:(id)arg1 representation:(id)arg2;	// IMP=0x00000000001a5ac0

@end
