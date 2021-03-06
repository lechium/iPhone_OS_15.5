//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFAudio/NSCopying-Protocol.h>
#import <AVFAudio/NSSecureCoding-Protocol.h>

@interface AVSpeechSynthesisMarker : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _mark;	// 8 = 0x8
    unsigned long long _byteSampleOffset;	// 16 = 0x10
    struct _NSRange _textRange;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000088cae
+ (void)initialize;	// IMP=0x0000000000088c8a
@property(nonatomic) struct _NSRange textRange; // @synthesize textRange=_textRange;
@property(nonatomic) unsigned long long byteSampleOffset; // @synthesize byteSampleOffset=_byteSampleOffset;
@property(nonatomic) unsigned long long mark; // @synthesize mark=_mark;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000088b80
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000889b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000888b1
- (id)initWithMarkerType:(unsigned long long)arg1 forTextRange:(struct _NSRange)arg2 atByteSampleOffset:(unsigned long long)arg3;	// IMP=0x00000000000888a3

@end

