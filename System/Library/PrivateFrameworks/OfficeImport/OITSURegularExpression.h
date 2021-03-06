//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCoding-Protocol.h>
#import <OfficeImport/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OITSURegularExpression : NSObject <NSCopying, NSCoding>
{
    NSString *_expressionString;	// 8 = 0x8
    void *_reserved;	// 16 = 0x10
}

+ (id)regularExpressionWithString:(id)arg1;	// IMP=0x000000000028576c
+ (void)initialize;	// IMP=0x0000000000285730
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000285ed6
- (const char *)getBytesForString:(id)arg1 lossByte:(unsigned char)arg2;	// IMP=0x0000000000285e7e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000285dcf
- (struct _NSRange)matchedRangeForString:(id)arg1 range:(struct _NSRange)arg2 subexpressionRanges:(struct _NSRange *)arg3 count:(unsigned int)arg4;	// IMP=0x0000000000285c78
- (struct _NSRange)matchedRangeForCString:(const char *)arg1 range:(struct _NSRange)arg2 subexpressionRanges:(struct _NSRange *)arg3 count:(unsigned int)arg4;	// IMP=0x0000000000285ae5
- (id)expressionString;	// IMP=0x0000000000285adb
- (unsigned long long)hash;	// IMP=0x0000000000285ac5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000285a4b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002859da
- (id)init;	// IMP=0x00000000002859c1
- (unsigned long long)numberOfSubexpressions;	// IMP=0x00000000002859b3
- (id)initWithExpressionString:(id)arg1 options:(unsigned int)arg2;	// IMP=0x0000000000285814
- (id)initWithExpressionString:(id)arg1;	// IMP=0x0000000000285800
- (void)dealloc;	// IMP=0x000000000028579b

@end

