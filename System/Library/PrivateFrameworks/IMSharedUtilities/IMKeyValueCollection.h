//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/IMKeyValueCollectionStorage-Protocol.h>
#import <IMSharedUtilities/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol IMKeyValueCollectionDelegate, IMKeyValueCollectionStorage;

@interface IMKeyValueCollection : NSObject <IMKeyValueCollectionStorage, NSCopying>
{
    long long _batchCount;	// 8 = 0x8
    id <IMKeyValueCollectionStorage> _keyValueStorage;	// 16 = 0x10
    id <IMKeyValueCollectionDelegate> _delegate;	// 24 = 0x18
    NSMutableDictionary *_recordedChanges;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000472ee
@property(readonly) NSMutableDictionary *recordedChanges; // @synthesize recordedChanges=_recordedChanges;
@property(nonatomic) __weak id <IMKeyValueCollectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <IMKeyValueCollectionStorage> keyValueStorage; // @synthesize keyValueStorage=_keyValueStorage;
@property(readonly, copy) NSString *description;
- (void)setString:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000471d8
- (id)stringForKey:(id)arg1;	// IMP=0x00000000000471c4
- (id)stringForKey:(id)arg1 withDefault:(id)arg2;	// IMP=0x00000000000471b2
- (void)setDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x000000000004712c
- (double)doubleForKey:(id)arg1;	// IMP=0x0000000000047117
- (double)doubleForKey:(id)arg1 withDefault:(double)arg2;	// IMP=0x0000000000047069
- (void)setUint64:(long long)arg1 forKey:(id)arg2;	// IMP=0x0000000000046fe8
- (unsigned long long)uint64ForKey:(id)arg1;	// IMP=0x0000000000046fd4
- (unsigned long long)uint64ForKey:(id)arg1 withDefault:(unsigned long long)arg2;	// IMP=0x0000000000046f31
- (void)setInt64:(long long)arg1 forKey:(id)arg2;	// IMP=0x0000000000046eb0
- (long long)int64ForKey:(id)arg1;	// IMP=0x0000000000046e9c
- (long long)int64ForKey:(id)arg1 withDefault:(long long)arg2;	// IMP=0x0000000000046df9
- (void)setInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x0000000000046d78
- (long long)integerForKey:(id)arg1;	// IMP=0x0000000000046d64
- (long long)integerForKey:(id)arg1 withDefault:(long long)arg2;	// IMP=0x0000000000046cc1
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0000000000046c40
- (_Bool)boolForKey:(id)arg1;	// IMP=0x0000000000046c2c
- (_Bool)boolForKey:(id)arg1 withDefault:(_Bool)arg2;	// IMP=0x0000000000046b89
- (void)_commitBatchWrite;	// IMP=0x0000000000046b33
- (void)_startBatchWrite;	// IMP=0x0000000000046b01
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000046aea
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000046995
- (void)_recordChange:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000468b5
- (void)_setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000467de
- (id)objectForKey:(id)arg1 withDefault:(id)arg2;	// IMP=0x0000000000046766
- (id)objectForKey:(id)arg1;	// IMP=0x00000000000466b1
- (void)_broadcastIfNeeded;	// IMP=0x0000000000046601
- (void)_notifyListeners;	// IMP=0x0000000000046535
- (id)initWithKeyValueStorage:(id)arg1;	// IMP=0x00000000000464ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004644b
- (id)init;	// IMP=0x0000000000046421
- (id)errorArrayForKey:(id)arg1;	// IMP=0x0000000000013e40
- (void)addErrorToArray:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000013a89
- (id)errorForKey:(id)arg1;	// IMP=0x0000000000013a25
- (void)setError:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000139ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

