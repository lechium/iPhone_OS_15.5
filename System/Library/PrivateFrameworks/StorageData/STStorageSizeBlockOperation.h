//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class STStorageApp;

@interface STStorageSizeBlockOperation
{
    STStorageApp *_app;	// 24 = 0x18
    CDUnknownBlockType _sizeBlock;	// 32 = 0x20
}

+ (id)operationWithSizeBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000021f5
- (void).cxx_destruct;	// IMP=0x0000000000002334
@property(copy) CDUnknownBlockType sizeBlock; // @synthesize sizeBlock=_sizeBlock;
@property(retain) STStorageApp *app; // @synthesize app=_app;
- (void)main;	// IMP=0x000000000000224b

@end
