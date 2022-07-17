//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <QuickLookThumbnailing/QLThumbnailService-Protocol.h>
#import <QuickLookThumbnailing/QLThumbnailServiceSurfaceGeneratorProtocol-Protocol.h>

@class NSString, QLThumbnailProvider;

__attribute__((visibility("hidden")))
@interface QLThumbnailServiceContext : NSExtensionContext <QLThumbnailServiceSurfaceGeneratorProtocol, QLThumbnailService>
{
    QLThumbnailProvider *_thumbnailProvider;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0000000000020e4f
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0000000000020c87
- (void).cxx_destruct;	// IMP=0x0000000000021df7
@property(retain, nonatomic) QLThumbnailProvider *thumbnailProvider; // @synthesize thumbnailProvider=_thumbnailProvider;
- (id)_thumbnailGenerationQueue;	// IMP=0x0000000000021d76
- (void)generateThumbnailOfSize:(struct CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 iconFlavor:(int)arg5 contentType:(id)arg6 interpolationQuality:(int)arg7 withFileURLHandler:(id)arg8 additionalResourcesWrapper:(id)arg9 generatorData:(id)arg10 completionHandler:(CDUnknownBlockType)arg11;	// IMP=0x00000000000218bc
- (void)provideThumbnailForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000215a4
- (void)generateThumbnailOfSize:(struct CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 iconFlavor:(int)arg5 contentType:(id)arg6 interpolationQuality:(int)arg7 withContents:(id)arg8 additionalResourcesWrapper:(id)arg9 generatorData:(id)arg10 completionHandler:(CDUnknownBlockType)arg11;	// IMP=0x0000000000021413
- (void)ioSurfaceForRequest:(id)arg1 withSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000210ba
- (id)protocolHostWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020f74
- (id)protocolHost;	// IMP=0x0000000000020ebb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
