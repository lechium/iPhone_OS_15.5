//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSFileManager, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface TCCDAdhocSignatureCache : NSObject
{
    NSMutableDictionary *_keys;	// 8 = 0x8
    NSCache *_signatures;	// 16 = 0x10
    unsigned long long _capacity;	// 24 = 0x18
    NSString *_directoryPath;	// 32 = 0x20
    NSString *_keysPath;	// 40 = 0x28
    NSFileManager *_fileManager;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000003cfb2
- (void)addSignature:(id)arg1 forStaticCode:(struct __SecCode *)arg2;	// IMP=0x001000000003cbae
- (id)getSignatureForStaticCode:(struct __SecCode *)arg1;	// IMP=0x001000000003c6da
- (void)maintainSize;	// IMP=0x001000000003bf0e
- (id)cacheKeyForStaticCode:(struct __SecCode *)arg1;	// IMP=0x001000000003b827
- (void)saveSignature:(id)arg1 withUUID:(id)arg2;	// IMP=0x001000000003b713
- (id)loadSignatureWithUUID:(id)arg1;	// IMP=0x001000000003b60f
- (void)saveKeysToDirectory;	// IMP=0x001000000003b4b1
- (void)loadKeysFromDirectory;	// IMP=0x001000000003b28f
- (void)createStateHandler;	// IMP=0x001000000003ae5b
- (id)stateDump;	// IMP=0x001000000003ab63
- (id)init;	// IMP=0x001000000003ab55
- (id)initWithDirectoryPath:(id)arg1 capacity:(unsigned long long)arg2;	// IMP=0x001000000003a8fe
- (id)logHandle;	// IMP=0x001000000003a8ce

@end
