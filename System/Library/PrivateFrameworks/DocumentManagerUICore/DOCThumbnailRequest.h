//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DOCThumbnailRequest : NSObject
{
    CDUnknownBlockType _thumbnailGenerationRequiresDownloadHandler;	// 8 = 0x8
}

+ (id)iconRequestForItem:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;	// IMP=0x000000000000a7b1
+ (id)iconRequestForURL:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;	// IMP=0x000000000000a513
+ (id)requestForItem:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;	// IMP=0x000000000000a23a
- (void).cxx_destruct;	// IMP=0x000000000000aac6
@property(copy, nonatomic) CDUnknownBlockType thumbnailGenerationRequiresDownloadHandler; // @synthesize thumbnailGenerationRequiresDownloadHandler=_thumbnailGenerationRequiresDownloadHandler;
- (void)cancel;	// IMP=0x000000000000aaa7
- (void)generateThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000aa0a

@end

