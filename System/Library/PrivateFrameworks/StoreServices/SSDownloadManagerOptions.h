//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface SSDownloadManagerOptions : NSObject <NSCopying>
{
    NSArray *_downloadKinds;	// 8 = 0x8
    _Bool _filterExternalOriginatedDownloads;	// 16 = 0x10
    NSString *_persistenceIdentifier;	// 24 = 0x18
    NSArray *_prefetchedDownloadExternalProperties;	// 32 = 0x20
    NSArray *_prefetchedDownloadProperties;	// 40 = 0x28
    _Bool _ignoreDivertedDownloads;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000bb443
@property(nonatomic) _Bool ignoreDivertedDownloads; // @synthesize ignoreDivertedDownloads=_ignoreDivertedDownloads;
@property(copy, nonatomic) NSArray *prefetchedDownloadExternalProperties; // @synthesize prefetchedDownloadExternalProperties=_prefetchedDownloadExternalProperties;
@property(copy, nonatomic) NSArray *prefetchedDownloadProperties; // @synthesize prefetchedDownloadProperties=_prefetchedDownloadProperties;
@property(copy, nonatomic) NSString *persistenceIdentifier; // @synthesize persistenceIdentifier=_persistenceIdentifier;
@property(copy, nonatomic) NSArray *downloadKinds; // @synthesize downloadKinds=_downloadKinds;
@property(nonatomic) _Bool shouldFilterExternalOriginatedDownloads; // @synthesize shouldFilterExternalOriginatedDownloads=_filterExternalOriginatedDownloads;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bb011
- (unsigned long long)hash;	// IMP=0x00000000000baffb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000baf24

@end
