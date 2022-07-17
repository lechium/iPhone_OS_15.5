//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/NSCopying-Protocol.h>
#import <CoreML/NSSecureCoding-Protocol.h>

@class NSString;

@interface MLKey : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;	// 8 = 0x8
    NSString *_scope;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007f35e
- (void).cxx_destruct;	// IMP=0x000000000007f336
@property(readonly, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x000000000007f234
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007f0e8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007f03a
- (_Bool)hasSameNameAsKey:(id)arg1;	// IMP=0x000000000007efa9
- (_Bool)hasGlobalScope;	// IMP=0x000000000007ef76
- (id)deletingPrefixingScope:(id)arg1;	// IMP=0x000000000007ed4f
- (id)scopedTo:(id)arg1;	// IMP=0x000000000007ebba
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007ea63
- (unsigned long long)hash;	// IMP=0x000000000007e9d6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007e989
- (id)initWithKeyName:(id)arg1;	// IMP=0x000000000007e916
- (id)initWithKeyName:(id)arg1 scope:(id)arg2;	// IMP=0x000000000007e85d

@end
