//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PrivateFederatedLearning/PFLTaskState-Protocol.h>

@class NSData, NSURLSessionDownloadTask;

@interface PFLTaskStateDownloadingModel : NSObject <PFLTaskState>
{
    NSData *_resumeData;	// 8 = 0x8
    NSURLSessionDownloadTask *_downloadTask;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001527c
- (void).cxx_destruct;	// IMP=0x0000000000015906
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain, nonatomic) NSData *resumeData; // @synthesize resumeData=_resumeData;
- (void)suspend;	// IMP=0x00000000000157cd
- (void)resume:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000153bd
- (id)init;	// IMP=0x000000000001538e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000152fd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000015284
- (unsigned long long)tag;	// IMP=0x0000000000015274

@end
