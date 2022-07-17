//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVProviderDatasetBridge-Protocol.h>

@class NSString, NSURL;

@interface CKVSimulatedDatasetBridge : NSObject <CKVProviderDatasetBridge>
{
    NSURL *_directoryURL;	// 8 = 0x8
    unsigned short _datasetType;	// 16 = 0x10
    Class _processorClass;	// 24 = 0x18
}

+ (_Bool)_directoryExistsAtURL:(id)arg1;	// IMP=0x000000000008ecc3
- (void).cxx_destruct;	// IMP=0x000000000008ecb3
- (_Bool)enumerateItemsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000008e6f2
- (id)originAppId;	// IMP=0x000000000008e6dc
- (long long)itemType;	// IMP=0x000000000008e6c6
- (id)init;	// IMP=0x000000000008e67e
- (id)initWithDatasetType:(unsigned short)arg1;	// IMP=0x000000000008e510

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
