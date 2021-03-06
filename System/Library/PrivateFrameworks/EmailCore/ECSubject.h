//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailCore/EFPubliclyDescribable-Protocol.h>
#import <EmailCore/NSCopying-Protocol.h>
#import <EmailCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface ECSubject : NSObject <NSCopying, NSSecureCoding, EFPubliclyDescribable>
{
    long long _hasReplyPrefixState;	// 8 = 0x8
    _Bool _hasPrefix;	// 16 = 0x10
    unsigned long long _length;	// 24 = 0x18
    NSString *_prefix;	// 32 = 0x20
    unsigned long long _prefixLength;	// 40 = 0x28
    NSString *_subjectWithoutPrefix;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002eb24
+ (id)_uniqueString:(id)arg1 type:(long long)arg2;	// IMP=0x000000000002e508
+ (id)_prefixTruncatedToMaximumAllowableSize:(id)arg1;	// IMP=0x000000000002e48a
+ (id)_subjectTruncatedToMaximumAllowableSize:(id)arg1;	// IMP=0x000000000002e40c
+ (id)subjectWithString:(id)arg1;	// IMP=0x000000000002e3af
- (void).cxx_destruct;	// IMP=0x000000000002f491
@property(readonly, nonatomic) _Bool hasPrefix; // @synthesize hasPrefix=_hasPrefix;
@property(copy, nonatomic) NSString *subjectWithoutPrefix; // @synthesize subjectWithoutPrefix=_subjectWithoutPrefix;
@property(readonly, nonatomic) unsigned long long prefixLength; // @synthesize prefixLength=_prefixLength;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
- (_Bool)isEqualToSubjectIgnoringPrefix:(id)arg1;	// IMP=0x000000000002f37f
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x000000000002f2ec
- (_Bool)isEqualToSubject:(id)arg1;	// IMP=0x000000000002f102
@property(readonly, nonatomic) _Bool hasReplyPrefix;
@property(readonly, copy, nonatomic) NSString *subjectString;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002efba
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002eda6
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002ec29
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002eb2c
- (id)init;	// IMP=0x000000000002eb0d
- (id)initWithPrefix:(id)arg1 subjectWithoutPrefix:(id)arg2;	// IMP=0x000000000002e91d
- (id)initWithString:(id)arg1;	// IMP=0x000000000002e872

// Remaining properties
@property(readonly) Class superclass;

@end

