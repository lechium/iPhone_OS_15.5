//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShazamKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface SHLyricLine : NSObject <NSSecureCoding>
{
    NSString *_text;	// 8 = 0x8
    double _offset;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000013fc2
+ (id)lyricLineWithText:(id)arg1 offset:(double)arg2;	// IMP=0x0000000000013f63
- (void).cxx_destruct;	// IMP=0x000000000001420d
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;	// IMP=0x0000000000014163
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000140ef
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000014044
- (id)initWithLineWithText:(id)arg1 offset:(double)arg2;	// IMP=0x0000000000013fca

@end

