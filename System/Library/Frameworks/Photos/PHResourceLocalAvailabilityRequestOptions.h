//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PHResourceLocalAvailabilityRequestOptions : NSObject
{
    _Bool _treatLivePhotoAsStill;	// 8 = 0x8
    _Bool _dontAllowRAW;	// 9 = 0x9
    _Bool _includeAllAssetResources;	// 10 = 0xa
    NSObject<OS_dispatch_queue> *_resultHandlerQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000856e2
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue; // @synthesize resultHandlerQueue=_resultHandlerQueue;
@property(nonatomic) _Bool includeAllAssetResources; // @synthesize includeAllAssetResources=_includeAllAssetResources;
@property(nonatomic) _Bool dontAllowRAW; // @synthesize dontAllowRAW=_dontAllowRAW;
@property(nonatomic) _Bool treatLivePhotoAsStill; // @synthesize treatLivePhotoAsStill=_treatLivePhotoAsStill;
- (id)description;	// IMP=0x000000000008560a

@end
