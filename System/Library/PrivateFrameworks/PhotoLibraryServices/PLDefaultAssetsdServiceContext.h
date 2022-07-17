//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAssetsdServiceContext-Protocol.h>

@class NSError, NSString, NSXPCConnection, PLAssetsdConnectionAuthorization, PLPhotoLibraryBundle;

@interface PLDefaultAssetsdServiceContext : NSObject <PLAssetsdServiceContext>
{
    SEL _selector;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    PLPhotoLibraryBundle *_libraryBundle;	// 24 = 0x18
    PLAssetsdConnectionAuthorization *_connectionAuthorization;	// 32 = 0x20
    NSError *_replyWarning;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003bd17e
@property(copy, nonatomic) NSError *replyWarning; // @synthesize replyWarning=_replyWarning;
@property(readonly, copy, nonatomic) NSString *clientDebugDescription;
- (void)awaitLibraryState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003bcf4d
- (_Bool)hasEntitlement:(id)arg1;	// IMP=0x00000000003bcf05
- (void)invalidateClientAuthorizationCache;	// IMP=0x00000000003bceef
@property(readonly, nonatomic) _Bool isClientAuthorizedForTCCServicePhotosAdd;
@property(readonly, nonatomic) _Bool isClientAuthorizedForTCCServicePhotos;
- (id)libraryServicesManager;	// IMP=0x00000000003bcead
- (id)initWithSelector:(SEL)arg1 connection:(id)arg2 libraryBundle:(id)arg3 connectionAuthorization:(id)arg4;	// IMP=0x00000000003bcdd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
