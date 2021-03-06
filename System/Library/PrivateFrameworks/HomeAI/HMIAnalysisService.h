//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSString;

@interface HMIAnalysisService : HMFObject <HMFLogging>
{
}

+ (id)logCategory;	// IMP=0x000000000009fe4c
- (_Bool)cancelRequest:(int)arg1;	// IMP=0x000000000009fe44
- (int)requestAnalysisForAssetData:(id)arg1 withProperties:(id)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000009fe2a
- (int)requestAnalysisForPixelBuffer:(struct __CVBuffer *)arg1 withProperties:(id)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000009fe10
- (id)expectedClasses;	// IMP=0x000000000009fdf0
- (id)init;	// IMP=0x000000000009fdc1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

