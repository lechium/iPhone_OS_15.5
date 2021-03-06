//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHImageRequestOptions;

@interface PHAdjustmentDataRequestContext
{
    PHImageRequestOptions *_options;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000064a6b
@property(readonly, nonatomic) PHImageRequestOptions *options; // @synthesize options=_options;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;	// IMP=0x0000000000064a37
- (id)initialRequests;	// IMP=0x00000000000648d0
- (_Bool)isNetworkAccessAllowed;	// IMP=0x00000000000648b3
- (long long)type;	// IMP=0x00000000000648a8
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000064815

@end

