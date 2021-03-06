//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _WKWebsiteDataStore : NSObject
{
    struct RetainPtr<WKWebsiteDataStore> _dataStore;	// 8 = 0x8
}

+ (id)nonPersistentDataStore;	// IMP=0x00000000002fdd24
+ (id)defaultDataStore;	// IMP=0x00000000002fdcd2
- (id).cxx_construct;	// IMP=0x00000000002fe025
- (void).cxx_destruct;	// IMP=0x00000000002fe005
- (void)removeDataOfTypes:(unsigned long long)arg1 modifiedSince:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002fdf83
- (void)removeDataOfTypes:(unsigned long long)arg1 forDataRecords:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002fdf01
- (void)fetchDataRecordsOfTypes:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002fdd8f
@property(readonly, getter=isNonPersistent) _Bool nonPersistent;
- (id)initWithDataStore:(id)arg1;	// IMP=0x00000000002fdc70

@end

