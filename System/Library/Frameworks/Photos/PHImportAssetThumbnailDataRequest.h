//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PHImportAssetThumbnailDataRequest
{
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    unsigned char _priority;	// 40 = 0x28
    unsigned long long _longestSide;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001cd88b
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) unsigned char priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) unsigned long long longestSide; // @synthesize longestSide=_longestSide;
- (id)requestAsset;	// IMP=0x00000000001cd785
- (id)initWithAsset:(id)arg1 longestSide:(unsigned long long)arg2 priority:(unsigned char)arg3;	// IMP=0x00000000001cd74b
- (id)description;	// IMP=0x00000000001cd73e

@end
