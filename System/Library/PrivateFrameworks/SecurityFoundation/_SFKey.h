//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, _SFKeySpecifier;

@interface _SFKey : NSObject
{
    id _keyInternal;	// 8 = 0x8
    NSData *_keyData;	// 16 = 0x10
}

+ (id)_specifierForSecKey:(struct __SecKey *)arg1;	// IMP=0x0000000000009966
+ (Class)_attributesClass;	// IMP=0x00000000000098e9
- (void).cxx_destruct;	// IMP=0x0000000000009d2b
@property(readonly, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
@property(readonly, copy, nonatomic) NSString *keyDomain;
@property(readonly, copy, nonatomic) _SFKeySpecifier *keySpecifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000009bd3
- (id)initRandomKeyWithSpecifier:(id)arg1;	// IMP=0x0000000000009b2e
- (id)initWithAttributes:(id)arg1;	// IMP=0x0000000000009a96
- (id)initWithData:(id)arg1 specifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000099e3

@end

