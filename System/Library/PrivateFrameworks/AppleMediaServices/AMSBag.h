//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagProtocol-Protocol.h>

@class AMSProcessInfo, NSDate, NSString;
@protocol AMSBagDataSourceProtocol;

@interface AMSBag : NSObject <AMSBagProtocol>
{
    id <AMSBagDataSourceProtocol> _dataSource;	// 8 = 0x8
    AMSProcessInfo *_processInfo;	// 16 = 0x10
    optional_a428bcea _underlyingBag;	// 24 = 0x18
}

+ (void)_resetBagCache;	// IMP=0x00000000000a5124
+ (id)bagCacheAccessQueue;	// IMP=0x00000000000a2281
+ (id)bagCache;	// IMP=0x00000000000a21e9
+ (id)bagForProfile:(id)arg1 profileVersion:(id)arg2 processInfo:(id)arg3;	// IMP=0x00000000000a0c09
+ (id)bagForProfile:(id)arg1 profileVersion:(id)arg2;	// IMP=0x00000000000a0b72
- (id).cxx_construct;	// IMP=0x00000000000a5301
- (void).cxx_destruct;	// IMP=0x00000000000a52bb
@property(nonatomic) optional_a428bcea underlyingBag; // @synthesize underlyingBag=_underlyingBag;
@property(copy, nonatomic) AMSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(retain, nonatomic) id <AMSBagDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
- (id)_temporaryDictionary;	// IMP=0x00000000000a4b79
- (id)dictionaryForKey:(id)arg1;	// IMP=0x00000000000a4952
- (id)URLForKey:(id)arg1 account:(id)arg2;	// IMP=0x00000000000a4700
- (id)URLForKey:(id)arg1;	// IMP=0x00000000000a44d9
- (id)stringForKey:(id)arg1;	// IMP=0x00000000000a42b2
- (id)integerForKey:(id)arg1;	// IMP=0x00000000000a408b
- (id)doubleForKey:(id)arg1;	// IMP=0x00000000000a3e64
- (id)boolForKey:(id)arg1;	// IMP=0x00000000000a3c3d
- (id)arrayForKey:(id)arg1;	// IMP=0x00000000000a3a1c
- (void)setDefaultValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000a37e7
@property(readonly, nonatomic) NSString *descriptionExtended;
@property(readonly, copy) NSString *description;
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a2ade
- (_Bool)isLoaded;	// IMP=0x00000000000a29b6
@property(readonly, copy, nonatomic) NSString *profileVersion;
@property(readonly, copy, nonatomic) NSString *profile;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic) NSDate *expirationDate;
- (id)initWithBag:(struct Bag)arg1 processInfo:(id)arg2;	// IMP=0x00000000000a0a4f
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000000a09d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
