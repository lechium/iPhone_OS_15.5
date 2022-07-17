//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, SSBagProfileConfig;

@interface SSBag : NSObject
{
    NSString *_profile;	// 8 = 0x8
    NSString *_profileVersion;	// 16 = 0x10
}

+ (unsigned long long)_AMSBagValueTypeFromSSBagValueType:(unsigned long long)arg1;	// IMP=0x000000000008bcf3
+ (void)setDebugBackingDictionary:(id)arg1 forProfileConfig:(id)arg2;	// IMP=0x000000000008bc63
+ (void)removeAllDebugBackingDictionaries;	// IMP=0x000000000008bc5d
+ (id)cache;	// IMP=0x000000000008a2c7
+ (id)bagWithProfileConfig:(id)arg1;	// IMP=0x0000000000089c95
- (void).cxx_destruct;	// IMP=0x000000000008bda2
@property(retain, nonatomic) NSString *profileVersion; // @synthesize profileVersion=_profileVersion;
@property(retain, nonatomic) NSString *profile; // @synthesize profile=_profile;
- (void)_bagChanged:(id)arg1;	// IMP=0x000000000008bd12
- (id)_AMSBag;	// IMP=0x000000000008bc69
- (_Bool)canHandleTrustedDomains;	// IMP=0x000000000008bb2a
- (id)URLForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008ba49
- (id)stringForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008b968
- (id)integerForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008b887
- (id)doubleForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008b7a6
- (id)dictionaryForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008b6c5
- (id)boolForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008b5e4
- (id)arrayForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008b503
- (id)URLPromiseForKey:(id)arg1;	// IMP=0x000000000008b479
- (id)stringPromiseForKey:(id)arg1;	// IMP=0x000000000008b3ef
- (id)integerPromiseForKey:(id)arg1;	// IMP=0x000000000008b365
- (id)doublePromiseForKey:(id)arg1;	// IMP=0x000000000008b2db
- (id)dictionaryPromiseForKey:(id)arg1;	// IMP=0x000000000008b251
- (id)boolPromiseForKey:(id)arg1;	// IMP=0x000000000008b1c7
- (id)arrayPromiseForKey:(id)arg1;	// IMP=0x000000000008b13d
- (id)description;	// IMP=0x000000000008b0ed
- (void)URLForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008afe4
- (void)stringForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008aedb
- (void)integerForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008add2
- (void)doubleForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008acc9
- (void)dictionaryForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008abc0
- (void)boolForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008aab7
- (void)arrayForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008a9ae
- (_Bool)URLIsTrusted:(id)arg1;	// IMP=0x000000000008a4c6
- (id)resetCaches;	// IMP=0x000000000008a4ad
@property(readonly, nonatomic) SSBagProfileConfig *profileConfig;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic) NSDate *expirationDate;
- (void)dealloc;	// IMP=0x000000000008a252
- (id)_initWithProfile:(id)arg1 profileVersion:(id)arg2;	// IMP=0x000000000008a136

@end
