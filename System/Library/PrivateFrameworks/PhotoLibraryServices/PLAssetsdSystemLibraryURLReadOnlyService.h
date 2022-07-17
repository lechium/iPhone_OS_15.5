//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAssetsdSystemLibraryURLReadOnlyServiceProtocol-Protocol.h>

@class NSString, PLAssetsdConnectionAuthorization;

@interface PLAssetsdSystemLibraryURLReadOnlyService : NSObject <PLAssetsdSystemLibraryURLReadOnlyServiceProtocol>
{
    PLAssetsdConnectionAuthorization *_connectionAuthorization;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003c9a61
- (void)systemPhotoLibraryURL:(CDUnknownBlockType)arg1;	// IMP=0x00000000003c9835
- (id)initWithConnectionAuthorization:(id)arg1;	// IMP=0x00000000003c97ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
