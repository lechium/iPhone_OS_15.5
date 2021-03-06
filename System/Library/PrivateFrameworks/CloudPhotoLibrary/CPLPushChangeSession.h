//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSString;

@interface CPLPushChangeSession <CPLAbstractObject>
{
    double _startWaitingForBatch;	// 8 = 0x8
}

+ (id)shortDescription;	// IMP=0x0000000000110dc3
- (void)commitChangeBatch:(id)arg1 withUnderlyingCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000110739
- (void)commitChangeBatch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001106a1
- (id)initWithLibraryManager:(id)arg1;	// IMP=0x0000000000110654

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

