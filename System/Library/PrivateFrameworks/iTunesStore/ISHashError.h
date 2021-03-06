//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStore/NSCopying-Protocol.h>

@class NSString;

@interface ISHashError : NSObject <NSCopying>
{
    NSString *_actualHashString;	// 8 = 0x8
    NSString *_expectedHashString;	// 16 = 0x10
    long long _rangeEnd;	// 24 = 0x18
    long long _rangeStart;	// 32 = 0x20
}

@property(nonatomic) long long rangeStart; // @synthesize rangeStart=_rangeStart;
@property(nonatomic) long long rangeEnd; // @synthesize rangeEnd=_rangeEnd;
@property(copy, nonatomic) NSString *expectedHashString; // @synthesize expectedHashString=_expectedHashString;
@property(copy, nonatomic) NSString *actualHashString; // @synthesize actualHashString=_actualHashString;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003caa8
@property(readonly, nonatomic) NSString *hashFailureHeaderString;
- (void)dealloc;	// IMP=0x000000000003ca29

@end

