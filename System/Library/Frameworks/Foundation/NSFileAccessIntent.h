//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface NSFileAccessIntent : NSObject
{
    NSURL *_url;	// 8 = 0x8
    _Bool _isRead;	// 16 = 0x10
    long long _options;	// 24 = 0x18
}

+ (id)writingIntentWithURL:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001d7d24
+ (id)readingIntentWithURL:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001d7cdd
@property(readonly) _Bool isRead; // @synthesize isRead=_isRead;
@property(copy) NSURL *URL; // @synthesize URL=_url;
- (void)dealloc;	// IMP=0x00000000001d7e1c
- (id)description;	// IMP=0x00000000001d7d7f
@property(readonly) unsigned long long writingOptions;
@property(readonly) unsigned long long readingOptions;

@end
