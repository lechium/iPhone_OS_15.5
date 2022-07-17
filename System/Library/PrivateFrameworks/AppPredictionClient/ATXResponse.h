//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSError, NSUUID;
@protocol OS_dispatch_queue;

@interface ATXResponse : NSObject <NSSecureCoding>
{
    NSData *_cacheFileData;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_appClipQueue;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    NSArray *_predictions;	// 40 = 0x28
    NSArray *_proactiveSuggestions;	// 48 = 0x30
    NSUUID *_blendingModelUICacheUpdateUUID;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000010fbec
- (void).cxx_destruct;	// IMP=0x000000000010ff29
@property(readonly, nonatomic) NSData *cacheFileData; // @synthesize cacheFileData=_cacheFileData;
@property(readonly, nonatomic) NSUUID *blendingModelUICacheUpdateUUID; // @synthesize blendingModelUICacheUpdateUUID=_blendingModelUICacheUpdateUUID;
@property(readonly, nonatomic) NSArray *proactiveSuggestions; // @synthesize proactiveSuggestions=_proactiveSuggestions;
@property(readonly, nonatomic) NSArray *predictions; // @synthesize predictions=_predictions;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010fe30
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010fbf4
- (void)enumerateAtxSearchResults:(CDUnknownBlockType)arg1;	// IMP=0x000000000010f5f5
- (_Bool)isEqualToResponse:(id)arg1;	// IMP=0x000000000010f43e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010f3d6
- (unsigned long long)hash;	// IMP=0x000000000010f3c0
- (id)jsonDescription;	// IMP=0x000000000010f352
- (id)json;	// IMP=0x000000000010f284
- (id)jsonRawData;	// IMP=0x000000000010f043
- (id)description;	// IMP=0x000000000010efc8
@property(readonly, nonatomic) NSArray *predictedApps;
- (id)init;	// IMP=0x000000000010efa2
- (id)initWithPredictions:(id)arg1 proactiveSuggestions:(id)arg2 uuid:(id)arg3 cacheFileData:(id)arg4 blendingUICacheUpdateUUID:(id)arg5 error:(id)arg6;	// IMP=0x000000000010ee36
- (id)initWithPredictions:(id)arg1 cacheFileData:(id)arg2 error:(id)arg3;	// IMP=0x000000000010ed88

@end
