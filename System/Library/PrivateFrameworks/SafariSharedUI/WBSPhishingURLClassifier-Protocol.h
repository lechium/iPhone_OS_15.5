//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@protocol WBSPhishingURLClassifier
- (void)classifyURL:(NSURL *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(unsigned long long, NSError *))arg3;
@end

