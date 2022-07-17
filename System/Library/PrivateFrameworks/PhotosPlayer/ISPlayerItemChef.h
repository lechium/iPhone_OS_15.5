//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ISPlayerItemChef : NSObject
{
    NSOperationQueue *__operationQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *__isolationQueue;	// 16 = 0x10
    NSMutableDictionary *__operationsByRequestID;	// 24 = 0x18
    long long __currentRequestID;	// 32 = 0x20
}

+ (id)defaultChef;	// IMP=0x000000000001d6a2
- (void).cxx_destruct;	// IMP=0x000000000001c43a
@property(nonatomic, setter=_setCurrentRequestID:) long long _currentRequestID; // @synthesize _currentRequestID=__currentRequestID;
@property(readonly, nonatomic) NSMutableDictionary *_operationsByRequestID; // @synthesize _operationsByRequestID=__operationsByRequestID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_isolationQueue; // @synthesize _isolationQueue=__isolationQueue;
@property(readonly, nonatomic) NSOperationQueue *_operationQueue; // @synthesize _operationQueue=__operationQueue;
- (void)cancelPreparationOfIrisAssetWithRequestID:(long long)arg1;	// IMP=0x000000000001c34b
- (long long)prepareIrisPlayerItemWithAsset:(id)arg1 trimmedTimeRange:(CDStruct_e83c9415)arg2 photoTime:(CDStruct_1b6d18a9)arg3 includeVideo:(_Bool)arg4 includeAudio:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000001c0d8
- (long long)prepareIrisVideoWithAsset:(id)arg1 photoTime:(CDStruct_1b6d18a9)arg2 trimmedTimeRange:(CDStruct_e83c9415)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001c005
- (id)init;	// IMP=0x000000000001bf46

@end
