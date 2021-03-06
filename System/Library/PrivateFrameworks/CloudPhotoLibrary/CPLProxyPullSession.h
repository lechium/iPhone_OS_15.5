//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLPullChangeSessionImplementation-Protocol.h>

@class NSString;

@interface CPLProxyPullSession <CPLPullChangeSessionImplementation>
{
}

+ (void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001c60e
- (void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001cd75
- (void)getChangeBatchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001c62c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

