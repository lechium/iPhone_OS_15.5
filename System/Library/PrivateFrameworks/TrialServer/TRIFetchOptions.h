//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>

@class NSNumber, TRIDownloadOptions;

@interface TRIFetchOptions : NSObject <NSCopying>
{
    TRIDownloadOptions *_downloadOptions;	// 8 = 0x8
    NSNumber *_cacheDeleteAvailableSpaceClass;	// 16 = 0x10
}

+ (id)optionsWithDownloadOptions:(id)arg1 cacheDeleteAvailableSpaceClass:(id)arg2;	// IMP=0x0000000000011865
- (void).cxx_destruct;	// IMP=0x0000000000011bc9
@property(readonly, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass; // @synthesize cacheDeleteAvailableSpaceClass=_cacheDeleteAvailableSpaceClass;
@property(readonly, nonatomic) TRIDownloadOptions *downloadOptions; // @synthesize downloadOptions=_downloadOptions;
- (id)init;	// IMP=0x0000000000011baf
- (id)description;	// IMP=0x0000000000011b6b
- (unsigned long long)hash;	// IMP=0x0000000000011b24
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000011abc
- (_Bool)isEqualToOptions:(id)arg1;	// IMP=0x000000000001197e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011973
- (id)copyWithReplacementCacheDeleteAvailableSpaceClass:(id)arg1;	// IMP=0x0000000000011922
- (id)copyWithReplacementDownloadOptions:(id)arg1;	// IMP=0x00000000000118d1
- (id)initWithDownloadOptions:(id)arg1 cacheDeleteAvailableSpaceClass:(id)arg2;	// IMP=0x00000000000116dd

@end

