//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetReaderInternal, NSArray, NSError;

@interface AVAssetReader : NSObject
{
    AVAssetReaderInternal *_priv;	// 8 = 0x8
}

+ (id)_errorForOSStatus:(int)arg1;	// IMP=0x0000000000086bf6
+ (id)assetReaderWithAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000864c8
+ (void)initialize;	// IMP=0x00000000000864a0
@property(readonly, nonatomic, getter=_figAssetReader) struct OpaqueFigAssetReader *figAssetReader;
- (void)cancelReading;	// IMP=0x0000000000087983
- (_Bool)startReading;	// IMP=0x00000000000875d6
- (void)_outputDidFinish:(id)arg1;	// IMP=0x0000000000087484
- (void)addOutput:(id)arg1;	// IMP=0x00000000000872b4
- (_Bool)canAddOutput:(id)arg1;	// IMP=0x0000000000087214
- (_Bool)_canAddOutput:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x000000000008714a
@property(readonly, nonatomic) NSArray *outputs;
@property(nonatomic, getter=_readSingleSample, setter=_setReadSingleSample:) _Bool readSingleSample;
@property(nonatomic) CDStruct_e83c9415 timeRange;
- (void)_failWithError:(id)arg1;	// IMP=0x0000000000086fcd
@property(readonly) NSError *error;
- (void)_transitionToStatus:(long long)arg1 failureError:(id)arg2;	// IMP=0x0000000000086c2b
@property(readonly) long long status;
@property(readonly, retain, nonatomic) AVAsset *asset;
- (id)description;	// IMP=0x0000000000086aa3
- (void)_tearDownFigAssetReader;	// IMP=0x0000000000086a3a
- (void)dealloc;	// IMP=0x0000000000086978
- (id)initWithAsset:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008651a
- (id)init;	// IMP=0x0000000000086504

@end

