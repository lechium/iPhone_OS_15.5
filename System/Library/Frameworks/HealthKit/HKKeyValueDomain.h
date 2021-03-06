//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKHealthStore, HKTaskServerProxyProvider, NSString, NSUUID;

@interface HKKeyValueDomain : NSObject <_HKXPCExportable>
{
    NSUUID *_identifier;	// 8 = 0x8
    HKTaskServerProxyProvider *_proxyProvider;	// 16 = 0x10
    long long _category;	// 24 = 0x18
    NSString *_domainName;	// 32 = 0x20
    HKHealthStore *_healthStore;	// 40 = 0x28
}

+ (id)clientInterface;	// IMP=0x000000000012d268
+ (id)serverInterface;	// IMP=0x000000000012d248
+ (id)heartRhythmDefaultsDomainWithHealthStore:(id)arg1;	// IMP=0x00000000000bbbb2
+ (id)safetyDefaultsDomainWithHealthStore:(id)arg1;	// IMP=0x0000000000217396
+ (id)healthArticlesDefaultsDomainWithHealthStore:(id)arg1;	// IMP=0x000000000021733a
+ (id)healthAppDefaultsDomainWithHealthStore:(id)arg1;	// IMP=0x00000000002172de
- (void).cxx_destruct;	// IMP=0x000000000012d2e0
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(readonly, copy, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
- (void)connectionInvalidated;	// IMP=0x000000000012d2bc
- (id)remoteInterface;	// IMP=0x000000000012d2a2
- (id)exportedInterface;	// IMP=0x000000000012d288
- (void)allValuesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000012d132
- (id)_propertyListValueFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012d111
- (id)_dataFromPropertyListValue:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012d0ed
- (void)propertyListValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000012ce9c
- (id)propertyListValueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012cba3
- (void)stringForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000012ca4e
- (id)stringForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012c76d
- (void)dateForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000012c618
- (id)dateForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012c337
- (void)dataForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000012c1e2
- (id)dataForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012bf01
- (void)numberForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000012bdac
- (id)numberForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012bacb
- (void)setValueForAllKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000012b976
- (void)removeValuesForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000012b821
- (void)setValuesWithDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000012b6cc
- (void)setPropertyListValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000012b4ab
- (_Bool)setPropertyListValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012b1b5
- (void)setString:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000012af91
- (_Bool)setString:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012ac4a
- (void)setDate:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000012aa26
- (_Bool)setDate:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012a6df
- (void)setData:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000012a4bb
- (_Bool)setData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012a174
- (void)setNumber:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000129f50
- (_Bool)setNumber:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000129be4
- (void)invalidate;	// IMP=0x0000000000129bce
- (id)initWithCategory:(long long)arg1 domainName:(id)arg2 healthStore:(id)arg3;	// IMP=0x0000000000129a68
- (id)_propertyListValueWithErrorNoDataForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001a4e31
- (id)_numberWithErrorNoDataForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001a4dad
- (id)_stringWithErrorNoDataForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001a4d29
- (id)_dateWithErrorNoDataForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001a4ca5
- (id)_dataWithErrorNoDataForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001a4b39

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

