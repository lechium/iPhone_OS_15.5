//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

@interface PHLivePhotoExportSession : NSObject
{
    NSArray *_fileURLs;	// 8 = 0x8
    NSURL *_imageURL;	// 16 = 0x10
    NSURL *_videoURL;	// 24 = 0x18
}

+ (_Bool)_canCreateLivePhotoWithURLs:(id)arg1 outError:(id *)arg2;	// IMP=0x000000000020cf94
+ (_Bool)_identifyResourceURLs:(id)arg1 outImageURL:(id *)arg2 outVideoURL:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000020c848
- (void).cxx_destruct;	// IMP=0x000000000020c668
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSArray *fileURLs; // @synthesize fileURLs=_fileURLs;
- (_Bool)_isOutputURLValid:(id)arg1 withOptions:(id)arg2 error:(out id *)arg3;	// IMP=0x000000000020c374
- (id)writeToFileURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000020bbd0
- (id)initWithResourceFileURLs:(id)arg1;	// IMP=0x000000000020bb65

@end
