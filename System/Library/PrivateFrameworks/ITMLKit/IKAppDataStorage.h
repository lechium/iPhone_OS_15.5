//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKAppDataStoring-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IKAppDataStorage : NSObject <IKAppDataStoring>
{
    unsigned long long _format;	// 8 = 0x8
    NSString *_filePath;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSMutableDictionary *_storageDict;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_storageQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001c6a0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue; // @synthesize storageQueue=_storageQueue;
@property(retain, nonatomic) NSMutableDictionary *storageDict; // @synthesize storageDict=_storageDict;
@property(readonly, retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)_saveDict:(id)arg1;	// IMP=0x000000000001c43e
- (id)dictionaryRepresentation;	// IMP=0x000000000001c2e2
- (void)clear;	// IMP=0x000000000001c1cf
- (void)removeDataForKey:(id)arg1;	// IMP=0x000000000001c00c
- (unsigned long long)setData:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001bdfa
- (id)getDataForKey:(id)arg1;	// IMP=0x000000000001bc3c
- (id)keyAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001ba26
- (unsigned long long)count;	// IMP=0x000000000001b904
- (id)initWithFilePath:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000001b677

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

