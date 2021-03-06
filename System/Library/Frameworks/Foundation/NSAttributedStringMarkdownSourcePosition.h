//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@interface NSAttributedStringMarkdownSourcePosition : NSObject <NSCopying, NSSecureCoding>
{
    CDStruct_ef77fe6d _startOffsets;	// 8 = 0x8
    CDStruct_ef77fe6d _endOffsets;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000016a65b
+ (CDStruct_ef77fe6d)calculateOffsetsForLine:(long long)arg1 column:(long long)arg2 inString:(const char *)arg3 withExistingOffsets:(CDStruct_ef77fe6d)arg4;	// IMP=0x000000000016a4f5
- (unsigned long long)hash;	// IMP=0x000000000016add3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016a90e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016a755
- (id)debugDescription;	// IMP=0x000000000016a6ee
- (id)description;	// IMP=0x000000000016a663
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016a650
- (struct _NSRange)rangeInString:(id)arg1;	// IMP=0x000000000016a530
- (void)setOffsetsFromUTF8:(const char *)arg1 usingCache:(CDStruct_ef77fe6d *)arg2;	// IMP=0x000000000016a351
- (CDStruct_ef77fe6d)endOffsets;	// IMP=0x000000000016a331
- (CDStruct_ef77fe6d)startOffsets;	// IMP=0x000000000016a311
- (id)initWithStart:(CDStruct_ef77fe6d)arg1 end:(CDStruct_ef77fe6d)arg2;	// IMP=0x000000000016a284
- (id)initWithStartLine:(long long)arg1 startColumn:(long long)arg2 endLine:(long long)arg3 endColumn:(long long)arg4;	// IMP=0x000000000016a1ec
@property(readonly) long long endColumn;
@property(readonly) long long endLine;
@property(readonly) long long startColumn;
@property(readonly) long long startLine;

@end

