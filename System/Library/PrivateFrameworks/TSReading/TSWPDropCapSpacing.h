//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@interface TSWPDropCapSpacing : NSObject <NSCopying>
{
    _Bool _allowSpanParagraphs;	// 8 = 0x8
    unsigned long long _lineCount;	// 16 = 0x10
    unsigned long long _elevatedLineCount;	// 24 = 0x18
    unsigned long long _followingLineCount;	// 32 = 0x20
    double _padding;	// 40 = 0x28
    unsigned long long _flags;	// 48 = 0x30
    double _maxWidthFactor;	// 56 = 0x38
}

+ (id)dropCapSpacingWithLineCount:(unsigned long long)arg1 elevatedLineCount:(unsigned long long)arg2;	// IMP=0x000000000030fd2d
@property(nonatomic) double maxWidthFactor; // @synthesize maxWidthFactor=_maxWidthFactor;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(nonatomic) _Bool allowSpanParagraphs; // @synthesize allowSpanParagraphs=_allowSpanParagraphs;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) unsigned long long followingLineCount; // @synthesize followingLineCount=_followingLineCount;
@property(nonatomic) unsigned long long elevatedLineCount; // @synthesize elevatedLineCount=_elevatedLineCount;
@property(nonatomic) unsigned long long lineCount; // @synthesize lineCount=_lineCount;
- (id)description;	// IMP=0x000000000031004e
- (unsigned long long)hash;	// IMP=0x000000000030ffa7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000030fe86
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000030fdd8
- (unsigned long long)computedFlagsWithPropertyMap:(id)arg1;	// IMP=0x000000000030fd81
- (void)dealloc;	// IMP=0x000000000030fcfe
- (id)init;	// IMP=0x000000000030fc9f

@end

