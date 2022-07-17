//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, PHPhotoLibrary;

@interface VCPMADServiceImageProcessingTaskBatch
{
    NSDictionary *_requests;	// 8 = 0x8
    PHPhotoLibrary *_photolibrary;	// 16 = 0x10
    NSString *_clientBundleID;	// 24 = 0x18
    NSString *_clientTeamID;	// 32 = 0x20
    NSString *_signpostPayload;	// 40 = 0x28
}

+ (id)taskWithCloudIdentifierRequests:(id)arg1 photoLibrary:(id)arg2 clientBundleID:(id)arg3 clientTeamID:(id)arg4 cancelBlock:(CDUnknownBlockType)arg5 andCompletionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000222854
- (void).cxx_destruct;	// IMP=0x0000000000223aaa
@property(retain, nonatomic) NSString *signpostPayload; // @synthesize signpostPayload=_signpostPayload;
- (_Bool)run:(id *)arg1;	// IMP=0x0000000000222e15
- (id)assetWithIdentifier:(id)arg1 isCloudIdentifier:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000022297a
- (_Bool)cachesResources;	// IMP=0x0000000000222972
- (id)initWithCloudIdentifierRequests:(id)arg1 photoLibrary:(id)arg2 clientBundleID:(id)arg3 clientTeamID:(id)arg4 cancelBlock:(CDUnknownBlockType)arg5 andCompletionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000222657

@end
