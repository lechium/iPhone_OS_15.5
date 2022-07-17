//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LinkPresentation/AVAssetResourceLoaderDelegate-Protocol.h>
#import <LinkPresentation/LPAsynchronousResource-Protocol.h>
#import <LinkPresentation/NSSecureCoding-Protocol.h>

@class AVAsset, AVURLAsset, LPVideoProperties, NSData, NSItemProvider, NSString, NSURL;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface LPVideo : NSObject <AVAssetResourceLoaderDelegate, LPAsynchronousResource, NSSecureCoding>
{
    NSData *_data;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_mediaLoadingQueue;	// 16 = 0x10
    NSItemProvider *_itemProvider;	// 24 = 0x18
    LPVideo *_videoLoadedFromItemProvider;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_itemProviderLoadGroup;	// 40 = 0x28
    struct CGSize _intrinsicSize;	// 48 = 0x30
    _Bool _startedFetchingIntrinsicSize;	// 64 = 0x40
    AVURLAsset *_asset;	// 72 = 0x48
    id _mediaServicesResetNotificationHandler;	// 80 = 0x50
    LPVideoProperties *_properties;	// 88 = 0x58
    NSURL *_streamingURL;	// 96 = 0x60
    NSURL *_youTubeURL;	// 104 = 0x68
    NSString *_MIMEType;	// 112 = 0x70
    NSURL *_fileURL;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000061511
- (void).cxx_destruct;	// IMP=0x0000000000062f87
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, copy, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(readonly, retain, nonatomic) NSURL *youTubeURL; // @synthesize youTubeURL=_youTubeURL;
@property(readonly, retain, nonatomic) NSURL *streamingURL; // @synthesize streamingURL=_streamingURL;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;	// IMP=0x0000000000062aca
- (void)_uninstallMediaServicesResetNotificationHandler;	// IMP=0x0000000000062a59
- (void)_installMediaServicesResetNotificationHandler;	// IMP=0x0000000000062939
@property(readonly, nonatomic) AVAsset *_asset;
@property(readonly, retain, nonatomic) NSItemProvider *_itemProvider;
- (void)loadAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000062320
- (_Bool)needsAsynchronousLoad;	// IMP=0x0000000000062312
- (void)_intrinsicSizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000061b5c
- (struct CGSize)_intrinsicSizeIfKnown;	// IMP=0x0000000000061b4c
- (_Bool)_isSubstitute;	// IMP=0x0000000000061b44
- (void)_mapDataFromFileURL;	// IMP=0x0000000000061aa1
@property(readonly, copy, nonatomic) LPVideoProperties *properties;
@property(readonly, nonatomic) _Bool hasAudio;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, nonatomic) unsigned long long _encodedSize;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000061870
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006170b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000061519
- (void)dealloc;	// IMP=0x00000000000614d3
- (id)initWithItemProvider:(id)arg1 properties:(id)arg2;	// IMP=0x000000000006142b
- (id)initWithYouTubeURL:(id)arg1 properties:(id)arg2;	// IMP=0x0000000000061361
- (id)initWithYouTubeURL:(id)arg1;	// IMP=0x00000000000612d2
- (id)initWithStreamingURL:(id)arg1 properties:(id)arg2;	// IMP=0x000000000006122a
- (id)initWithStreamingURL:(id)arg1 hasAudio:(_Bool)arg2;	// IMP=0x0000000000061191
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;	// IMP=0x00000000000610b8
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;	// IMP=0x0000000000060fc6
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 hasAudio:(_Bool)arg3;	// IMP=0x0000000000060f15
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 hasAudio:(_Bool)arg3;	// IMP=0x0000000000060e64
- (id)_initWithVideo:(id)arg1;	// IMP=0x0000000000060d6e
- (id)init;	// IMP=0x0000000000060d60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
