//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMFoundation/IMFileCopierDelegate-Protocol.h>

@class NSMutableArray;

@interface _IMLogFileCompressor : NSObject <IMFileCopierDelegate>
{
    NSMutableArray *_archivers;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000000308b3
- (void).cxx_destruct;	// IMP=0x0000000000030b45
- (void)fileCopierDidFinish:(id)arg1;	// IMP=0x0000000000030a87
- (void)fileCopierDidStart:(id)arg1;	// IMP=0x0000000000030a81
- (void)compressPath:(id)arg1 toPath:(id)arg2;	// IMP=0x000000000003095e
- (id)init;	// IMP=0x0000000000030908

@end

