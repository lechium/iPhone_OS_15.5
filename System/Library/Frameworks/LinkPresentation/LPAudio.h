//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LinkPresentation/AVAssetResourceLoaderDelegate-Protocol.h>
#import <LinkPresentation/NSSecureCoding-Protocol.h>

@class AVAsset, AVURLAsset, LPAudioProperties, NSData, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface LPAudio : NSObject <AVAssetResourceLoaderDelegate, NSSecureCoding>
{
    NSData *_data;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_mediaLoadingQueue;	// 16 = 0x10
    AVURLAsset *_asset;	// 24 = 0x18
    LPAudioProperties *_properties;	// 32 = 0x20
    NSURL *_fileURL;	// 40 = 0x28
    NSURL *_streamingURL;	// 48 = 0x30
    NSString *_MIMEType;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000093313
- (void).cxx_destruct;	// IMP=0x0000000000093ebf
@property(readonly, copy, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(readonly, retain, nonatomic) NSURL *streamingURL; // @synthesize streamingURL=_streamingURL;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;	// IMP=0x0000000000093abe
@property(readonly, nonatomic) AVAsset *_asset; // @synthesize _asset;
- (_Bool)_isSubstitute;	// IMP=0x0000000000093806
- (void)_mapDataFromFileURL;	// IMP=0x0000000000093763
@property(readonly, copy, nonatomic) LPAudioProperties *properties;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, nonatomic) unsigned long long _encodedSize;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000093565
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000093471
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009331b
- (id)initWithStreamingURL:(id)arg1 properties:(id)arg2;	// IMP=0x000000000009326b
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;	// IMP=0x0000000000093179
- (id)_initWithAudio:(id)arg1;	// IMP=0x0000000000093094
- (id)init;	// IMP=0x0000000000093086

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

