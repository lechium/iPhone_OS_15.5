//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriController, NSArray, NSHashTable, NSString, SLBertClassifier;
@protocol OS_dispatch_queue;

@interface CSAttSiriNLDAClassifierNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSArray *_requiredNodes;	// 24 = 0x18
    CSAttSiriController *_attSiriController;	// 32 = 0x20
    NSString *_mhId;	// 40 = 0x28
    CSAsset *_prefetchedAsset;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    SLBertClassifier *_bertModel;	// 64 = 0x40
    NSHashTable *_receivers;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000b7871
@property(retain, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property(retain, nonatomic) SLBertClassifier *bertModel; // @synthesize bertModel=_bertModel;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSAsset *prefetchedAsset; // @synthesize prefetchedAsset=_prefetchedAsset;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(readonly, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)processSpeechPackageSync:(id)arg1;	// IMP=0x00100000000b7659
- (void)processSpeechPackage:(id)arg1;	// IMP=0x00100000000b723d
- (void)createNLDAClassifierWithAsset:(id)arg1;	// IMP=0x00100000000b6fe9
- (void)pause;	// IMP=0x00100000000b6e0e
- (void)stop;	// IMP=0x00100000000b6d27
- (void)start;	// IMP=0x00100000000b6b8a
- (void)removeReceiver:(id)arg1;	// IMP=0x00100000000b6b74
- (void)addReceiver:(id)arg1;	// IMP=0x00100000000b6a7b
- (id)initWithAttSiriController:(id)arg1;	// IMP=0x00100000000b693b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
