//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriCore/NSCopying-Protocol.h>

@interface SiriCoreSQLiteQueryRange : NSObject <NSCopying>
{
    unsigned long long _limit;	// 8 = 0x8
    unsigned long long _offset;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003663
- (id)initWithLimit:(unsigned long long)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000000361b
- (id)initWithLimit:(unsigned long long)arg1;	// IMP=0x0000000000003607

@end

