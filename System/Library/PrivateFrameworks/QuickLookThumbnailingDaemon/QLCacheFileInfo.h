//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class QLCacheVersionedFileIdentifier;

@interface QLCacheFileInfo : NSObject
{
    float _minSize;	// 8 = 0x8
    float _maxSize;	// 12 = 0xc
    unsigned long long _cacheId;	// 16 = 0x10
    QLCacheVersionedFileIdentifier *_fileIdentifier;	// 24 = 0x18
    unsigned long long _thumbnailCount;	// 32 = 0x20
    unsigned long long _totalDataLength;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000147b3
@property(readonly, nonatomic) unsigned long long totalDataLength; // @synthesize totalDataLength=_totalDataLength;
@property(readonly, nonatomic) float maxSize; // @synthesize maxSize=_maxSize;
@property(readonly, nonatomic) float minSize; // @synthesize minSize=_minSize;
@property(readonly, nonatomic) unsigned long long thumbnailCount; // @synthesize thumbnailCount=_thumbnailCount;
@property(readonly, nonatomic) QLCacheVersionedFileIdentifier *fileIdentifier; // @synthesize fileIdentifier=_fileIdentifier;
@property(readonly, nonatomic) unsigned long long cacheId; // @synthesize cacheId=_cacheId;
- (id)initWithCacheId:(unsigned long long)arg1 versionedFileIdentifier:(id)arg2;	// IMP=0x0000000000014754
- (id)initWithCacheId:(unsigned long long)arg1 versionedFileIdentifier:(id)arg2 thumbnailCount:(unsigned long long)arg3 minSize:(float)arg4 maxSize:(float)arg5 totalDataLength:(unsigned long long)arg6;	// IMP=0x00000000000146a2

@end
