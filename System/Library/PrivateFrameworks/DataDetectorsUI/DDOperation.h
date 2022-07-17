//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

#import <DataDetectorsUI/NSCopying-Protocol.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface DDOperation : NSOperation <NSCopying>
{
    id _container;	// 8 = 0x8
    _Bool _needContinuation;	// 16 = 0x10
    int _generationNumber;	// 20 = 0x14
    unsigned long long _types;	// 24 = 0x18
    struct __DDScanQuery *_query;	// 32 = 0x20
    NSArray *_results;	// 40 = 0x28
    _Bool _isDiscarded;	// 48 = 0x30
    int _tryCount;	// 52 = 0x34
    int _containerNotReadyTryCount;	// 56 = 0x38
    NSDictionary *_context;	// 64 = 0x40
    long long _jobIdentifier;	// 72 = 0x48
    _Bool _ignoreSignatures;	// 80 = 0x50
}

+ (_Bool)_needsFullScannerForDetectionTypes:(unsigned long long)arg1;	// IMP=0x000000000001bed4
+ (CDUnknownBlockType)urlificationBlockForTypes:(unsigned long long)arg1;	// IMP=0x000000000001b7f2
+ (CDUnknownBlockType)shouldUrlifyBlockForTypes:(unsigned long long)arg1;	// IMP=0x000000000001b509
- (void).cxx_destruct;	// IMP=0x000000000001c30f
@property(nonatomic) _Bool ignoreSignatures; // @synthesize ignoreSignatures=_ignoreSignatures;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property _Bool isDiscarded; // @synthesize isDiscarded=_isDiscarded;
@property(nonatomic) unsigned long long detectionTypes; // @synthesize detectionTypes=_types;
@property int tryCount; // @synthesize tryCount=_tryCount;
@property int generationNumber; // @synthesize generationNumber=_generationNumber;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property _Bool needContinuation; // @synthesize needContinuation=_needContinuation;
@property(retain, nonatomic) id container; // @synthesize container=_container;
- (void)dispatchScanQueryCreationWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001c078
- (id)newOperationForContinuation;	// IMP=0x000000000001c066
- (id)newOperationForStartingOver;	// IMP=0x000000000001bffb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001bf22
- (_Bool)needsToStartOver;	// IMP=0x000000000001bf1a
- (_Bool)containerIsReady;	// IMP=0x000000000001bf12
- (_Bool)needsFullScanner;	// IMP=0x000000000001bee3
- (void)_setScanQuery:(struct __DDScanQuery *)arg1;	// IMP=0x000000000001be86
- (void)cleanup;	// IMP=0x000000000001be24
- (void)cancel;	// IMP=0x000000000001bd5c
- (void)main;	// IMP=0x000000000001bbeb
- (void)dispatchContainerModificationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001bbb5
- (void)dealloc;	// IMP=0x000000000001ba7a
- (id)initWithContainer:(id)arg1;	// IMP=0x000000000001b9c8
- (struct __DDScanQuery *)scanQuery;	// IMP=0x000000000001b9b7
- (_Bool)doURLificationOnDocument;	// IMP=0x000000000001b93a
- (int)_createScanQuery;	// IMP=0x000000000001b2b2
- (struct __DDScanQuery *)_createScanQueryForBackend;	// IMP=0x000000000001b235
- (void)_updateGenerationNumber;	// IMP=0x000000000001b22f
- (_Bool)_rangeValidForContainer;	// IMP=0x000000000001b227
- (_Bool)_containerReadyForDetection;	// IMP=0x000000000001b21f
- (void)_applyContainerRestrictionsToTypes;	// IMP=0x000000000001b219

@end
