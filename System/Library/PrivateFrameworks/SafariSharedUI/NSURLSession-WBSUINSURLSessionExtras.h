//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLSession.h>

@interface NSURLSession (WBSUINSURLSessionExtras)
+ (id)safari_sharedNonCellularSession;	// IMP=0x000000000002d0d7
+ (id)safari_sharedSession;	// IMP=0x000000000002d00a
- (void)safari_downloadImageWithURL:(id)arg1 completionHandlerIncludingErrors:(CDUnknownBlockType)arg2;	// IMP=0x000000000002dd3f
- (void)safari_downloadImageWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002dc22
- (void)safari_downloadFirstValidImageWithURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d626
- (void)_safari_downloadFirstValidImageWithURLs:(id)arg1 failedURLDownloadsToErrorsDictionary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002d1b3
@end
