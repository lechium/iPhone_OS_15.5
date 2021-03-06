//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>
#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WBSOpenSearchURLTemplate : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_parametersByName;	// 8 = 0x8
    NSMutableArray *_parameters;	// 16 = 0x10
    NSString *_templateString;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001041e1
- (void).cxx_destruct;	// IMP=0x00000000001042f7
@property(readonly, copy, nonatomic) NSString *templateString; // @synthesize templateString=_templateString;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000104296
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001041e9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001041d6
- (id)description;	// IMP=0x0000000000104161
- (unsigned long long)hash;	// IMP=0x000000000010414b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001040e2
- (id)templateByAddingParameter:(id)arg1 asURLQueryParameter:(id)arg2;	// IMP=0x0000000000103ed8
- (id)templateBySubstitutingValues:(id)arg1;	// IMP=0x0000000000103b7a
- (id)templateBySubstitutingValue:(id)arg1 forParameter:(id)arg2;	// IMP=0x00000000001039e4
- (id)URLWithSearchTerms:(id)arg1;	// IMP=0x000000000010357d
- (_Bool)includesParameter:(id)arg1;	// IMP=0x0000000000103546
- (id)initWithString:(id)arg1;	// IMP=0x0000000000103026

@end

