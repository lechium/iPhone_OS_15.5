//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SXTextStyleAttributesMap : NSObject
{
    NSString *_string;	// 8 = 0x8
    NSMutableArray *_attributes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000125c32
@property(readonly, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (id)description;	// IMP=0x00000000001259ed
- (id)attributesMapWithAttributesForRange:(struct _NSRange)arg1;	// IMP=0x00000000001257b1
- (id)attributedString;	// IMP=0x00000000001255ab
- (void)addAttributes:(id)arg1;	// IMP=0x0000000000125539
- (id)initWithString:(id)arg1;	// IMP=0x00000000001254a4

@end

