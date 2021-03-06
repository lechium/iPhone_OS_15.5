//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CARDateFormatterToken : NSObject
{
    NSString *_formatString;	// 8 = 0x8
    unsigned long long _dateStyle;	// 16 = 0x10
    unsigned long long _timeStyle;	// 24 = 0x18
}

+ (id)tokenWithDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2;	// IMP=0x002000000003c408
+ (id)tokenWithFormatString:(id)arg1;	// IMP=0x001000000003c3b2
- (void).cxx_destruct;	// IMP=0x002000000003c79e
@property(nonatomic) unsigned long long timeStyle; // @synthesize timeStyle=_timeStyle;
@property(nonatomic) unsigned long long dateStyle; // @synthesize dateStyle=_dateStyle;
@property(copy, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003c6c2
- (unsigned long long)hash;	// IMP=0x001000000003c67e
- (id)description;	// IMP=0x001000000003c5c9
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003c45f

@end

