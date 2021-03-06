//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;

@interface ICRemoteFileAttachmentDownloader : NSObject
{
    NSMutableDictionary *_operationsByAttachmentIdentifier;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
}

+ (id)allUndownloadedLegacyAttachmentsInContext:(id)arg1;	// IMP=0x0000000000172486
+ (_Bool)needsToDownloadRemoteFileAttachments;	// IMP=0x00000000001722ff
+ (void)releaseSharedDownloaderIfPossible;	// IMP=0x00000000001721f9
+ (void)initializeDownloaderAfterDelayIfNecessary;	// IMP=0x0000000000172070
+ (id)sharedDownloader;	// IMP=0x0000000000171fe3
- (void).cxx_destruct;	// IMP=0x0000000000173a45
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSMutableDictionary *operationsByAttachmentIdentifier; // @synthesize operationsByAttachmentIdentifier=_operationsByAttachmentIdentifier;
- (void)reachabilityChanged:(id)arg1;	// IMP=0x000000000017399a
- (void)downloadRemoteFileForAttachmentObjectID:(id)arg1;	// IMP=0x0000000000172bac
- (void)downloadRemoteFileForAttachment:(id)arg1;	// IMP=0x0000000000172b5d
- (void)downloadUndownloadedLegacyAttachments;	// IMP=0x0000000000172932
- (void)resumeDownloadsAfterDelay;	// IMP=0x0000000000172876
- (void)dealloc;	// IMP=0x00000000001727ab
- (id)init;	// IMP=0x00000000001725d4

@end

