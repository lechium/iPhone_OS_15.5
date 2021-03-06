//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>
#import <Vision/VNRequestSpecifying-Protocol.h>

@class NSString;

@interface VNRequestSpecifier : NSObject <NSCopying, NSSecureCoding, VNRequestSpecifying>
{
    unsigned int _requestClassCode;	// 8 = 0x8
    unsigned long long _requestRevision;	// 16 = 0x10
    NSString *_cachedRequestClassName;	// 24 = 0x18
    Class _cachedRequestClass;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005d3c4
+ (id)specifierForRequestClassName:(id)arg1 revision:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000005d306
+ (id)specifierForRequestClass:(Class)arg1 revision:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000005d253
+ (id)specifierForRequest:(id)arg1;	// IMP=0x000000000005d17b
+ (id)specifierForRequestClassCode:(unsigned int *)arg1 revision:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000005d0cb
- (void).cxx_destruct;	// IMP=0x000000000005d0bb
- (Class)requestClassAndReturnError:(id *)arg1;	// IMP=0x000000000005d02c
@property(readonly, copy) NSString *requestClassName;
@property(readonly, nonatomic) unsigned long long requestRevision;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005cea0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005ce2e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005ce23
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005cd5b
- (unsigned long long)hash;	// IMP=0x000000000005ccfb
- (id)description;	// IMP=0x000000000005cbd3
- (_Bool)specifiesAnyRequestClassName:(id)arg1;	// IMP=0x000000000005ca2d
- (_Bool)specifiesRequestClassName:(id)arg1;	// IMP=0x000000000005c9b6
- (_Bool)specifiesAnyRequestClass:(Class)arg1;	// IMP=0x000000000005c8b3
- (_Bool)specifiesRequestClass:(Class)arg1;	// IMP=0x000000000005c886
- (_Bool)specifiesRequestClassName:(id)arg1 withAnyRevision:(unsigned long long)arg2;	// IMP=0x000000000005c722
- (_Bool)specifiesRequestClass:(Class)arg1 withAnyRevision:(unsigned long long)arg2;	// IMP=0x000000000005c600
- (_Bool)specifiesRequestClassName:(id)arg1 revision:(unsigned long long)arg2;	// IMP=0x000000000005c57c
- (_Bool)specifiesRequestClass:(Class)arg1 revision:(unsigned long long)arg2;	// IMP=0x000000000005c528
@property(readonly) unsigned int requestClassCode;
- (id)initWithRequestClass:(Class)arg1 name:(id)arg2 code:(unsigned int)arg3 revision:(unsigned long long)arg4;	// IMP=0x000000000005c48b

@end

