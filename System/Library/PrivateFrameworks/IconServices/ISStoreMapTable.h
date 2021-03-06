//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSURL;

@interface ISStoreMapTable : NSObject
{
    struct os_unfair_lock_s _dataLock;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    unsigned long long _initialCapacity;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000cc8e
@property(readonly) unsigned long long initialCapacity; // @synthesize initialCapacity=_initialCapacity;
@property struct os_unfair_lock_s dataLock; // @synthesize dataLock=_dataLock;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void)_extendData;	// IMP=0x000000000000ca4d
- (void)_extendWithMultiplyer:(float)arg1;	// IMP=0x000000000000c837
- (void)_extend;	// IMP=0x000000000000c81d
@property(readonly) NSData *data; // @synthesize data=_data;
- (void)setBytes:(const void *)arg1 size:(unsigned long long)arg2 forUUID:(unsigned char [16])arg3;	// IMP=0x000000000000c642
- (void)enumerateWithUUID:(unsigned char [16])arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c54b
- (void)compact;	// IMP=0x000000000000c531
- (void)removeAll;	// IMP=0x000000000000c44c
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c2f0
- (void)removeDataForUUID:(id)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c175
- (void)removeDataForUUID:(id)arg1;	// IMP=0x000000000000c0b2
- (id)dataForUUID:(id)arg1;	// IMP=0x000000000000bf1d
- (void)addData:(id)arg1 forUUID:(id)arg2;	// IMP=0x000000000000be48
- (id)initWithURL:(id)arg1 capacity:(unsigned long long)arg2;	// IMP=0x000000000000bdcb

@end

