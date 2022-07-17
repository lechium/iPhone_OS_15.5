//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMBatchRequest;

@interface HMCharacteristicBatchRequest : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    CDUnknownBlockType _progressHandler;	// 16 = 0x10
    HMBatchRequest *_batchRequest;	// 24 = 0x18
}

+ (id)characteristicBatchRequestWithWriteRequests:(id)arg1;	// IMP=0x000000000006dd11
+ (id)characteristicBatchRequestWithReadRequests:(id)arg1;	// IMP=0x000000000006dcb3
- (void).cxx_destruct;	// IMP=0x000000000006da27
@property(retain, nonatomic) HMBatchRequest *batchRequest; // @synthesize batchRequest=_batchRequest;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (id)requests;	// IMP=0x000000000006d659
- (id)initWithBatchRequest:(id)arg1;	// IMP=0x000000000006d5ee

@end
