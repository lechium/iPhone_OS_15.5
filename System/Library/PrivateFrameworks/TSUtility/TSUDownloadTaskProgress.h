//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSUDownloadTaskProgress : NSObject
{
    _Bool _isActive;	// 8 = 0x8
    long long _totalBytesDownloaded;	// 16 = 0x10
    long long _totalBytesExpectedToBeDownloaded;	// 24 = 0x18
}

@property(nonatomic) long long totalBytesExpectedToBeDownloaded; // @synthesize totalBytesExpectedToBeDownloaded=_totalBytesExpectedToBeDownloaded;
@property(nonatomic) long long totalBytesDownloaded; // @synthesize totalBytesDownloaded=_totalBytesDownloaded;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
- (id)description;	// IMP=0x000000000005aa55

@end

