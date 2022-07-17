//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PrivacyAccounting/NSCopying-Protocol.h>

@class PAAccess;

@interface PAAccessMatcher : NSObject <NSCopying>
{
    PAAccess *_access;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
}

+ (id)negativeAccessCacheMatcherForAccess:(id)arg1;	// IMP=0x0000000000003e44
+ (id)coalescingMatcherForAccess:(id)arg1;	// IMP=0x0000000000003df6
- (void).cxx_destruct;	// IMP=0x0000000000003fff
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) PAAccess *access; // @synthesize access=_access;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003fe0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003f02
- (unsigned long long)hash;	// IMP=0x0000000000003ecc
- (id)initWithAccess:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000003e56

@end
