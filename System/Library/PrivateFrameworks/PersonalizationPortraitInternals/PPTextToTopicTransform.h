//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _PASLock, _PASNotificationToken;
@protocol TRINotificationToken;

@interface PPTextToTopicTransform : NSObject
{
    _PASLock *_lock;	// 8 = 0x8
    id <TRINotificationToken> _trialToken;	// 16 = 0x10
    NSString *_vocabularyPath;	// 24 = 0x18
    NSString *_weightsPath;	// 32 = 0x20
    NSString *_mappingId;	// 40 = 0x28
    _PASNotificationToken *_assetUpdateNotificationToken;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00000000000ea8e2
- (void).cxx_destruct;	// IMP=0x00000000000e9aee
- (id)_payloadForTopic:(unsigned int)arg1;	// IMP=0x00000000000e99e4
- (void)iterateTopicsForText:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e9915
@property(readonly, nonatomic) float threshold;
@property(readonly, nonatomic) unsigned long long outputTopicCount;
- (id)init;	// IMP=0x00000000000e97bc
- (void)dealloc;	// IMP=0x00000000000e9746
- (id)_initWithVocabulary:(id)arg1 weights:(id)arg2;	// IMP=0x00000000000e954c
- (id)_init;	// IMP=0x00000000000e92e2

@end
