//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NPKLibrary : NSObject
{
    _Bool _needsRelevancyInformation;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000000144e7
@property(nonatomic) _Bool needsRelevancyInformation; // @synthesize needsRelevancyInformation=_needsRelevancyInformation;
- (void)addPassData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014578

@end
