//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APEncryptedFile, APJourneyBatchSettings, NSArray, NSMutableArray, NSString;

@interface APMetricBatch : NSObject
{
    _Bool _writable;	// 8 = 0x8
    NSString *_destinationHash;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSMutableArray *_storage;	// 32 = 0x20
    APJourneyBatchSettings *_journeyBatchSettings;	// 40 = 0x28
    APEncryptedFile *_encryptedFile;	// 48 = 0x30
}

+ (void)removeBatchByFileSystemToken:(id)arg1;	// IMP=0x00200000000bcb8b
- (void).cxx_destruct;	// IMP=0x00200000000bcd14
@property(retain, nonatomic) APEncryptedFile *encryptedFile; // @synthesize encryptedFile=_encryptedFile;
@property(readonly, nonatomic) APJourneyBatchSettings *journeyBatchSettings; // @synthesize journeyBatchSettings=_journeyBatchSettings;
@property(readonly, nonatomic) _Bool writable; // @synthesize writable=_writable;
@property(readonly, nonatomic) NSMutableArray *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *destinationHash; // @synthesize destinationHash=_destinationHash;
- (id)fileSystemToken;	// IMP=0x00100000000bcad5
- (void)delete;	// IMP=0x00100000000bca59
- (void)_deleteByFilePath:(id)arg1;	// IMP=0x00100000000bc98f
- (void)close;	// IMP=0x00100000000bc7c3
- (void)_appendMetricToFile:(id)arg1;	// IMP=0x00100000000bc487
- (id)_openFilePath;	// IMP=0x00100000000bc407
- (id)_openFileDirectory;	// IMP=0x00100000000bc373
- (id)_closedFilePath;	// IMP=0x00100000000bc2f3
- (id)_closedFileDirectory;	// IMP=0x00100000000bc25f
- (void)receivedMetric:(id)arg1;	// IMP=0x00100000000bc1aa
@property(readonly, nonatomic) _Bool shouldRotate;
- (id)serverDictionaryRepresentationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bbac5
- (id)nextMetric;	// IMP=0x00100000000bba75
@property(readonly, nonatomic) NSArray *metrics;
- (id)initWithDestination:(id)arg1;	// IMP=0x00100000000bb4ee
- (id)initWithPath:(id)arg1;	// IMP=0x00100000000baefa
- (id)_destinationHashFromPath:(id)arg1;	// IMP=0x00100000000bacd3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

